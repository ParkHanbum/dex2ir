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

LOCAL_PATH:= $(call my-dir)

ANDROID_HARDWARE := ANDROID_HARDWARE_generic

ifneq ($(filter arm arm64 x86,$(TARGET_ARCH)),)

common_cflags := \
	-Wall -Wmissing-prototypes -Wshadow -Wpointer-arith -Wmissing-declarations \
	-Wno-pointer-sign -Wno-sign-compare -Wno-unused-parameter -Wno-shadow \
	-fno-strict-aliasing -fno-stack-protector \
	-DVGO_linux=1 \
	-DANDROID_SYMBOLS_DIR=\"/data/local/symbols\"

target_arch_cflags := \
	-DVGA_$(TARGET_ARCH)=1 \
	-DVGP_$(TARGET_ARCH)_linux=1 \
	-DVGPV_$(TARGET_ARCH)_linux_android=1 \
	-DVG_PLATFORM=\"$(TARGET_ARCH)-linux\"

ifeq ($(TARGET_IS_64_BIT),true)
  vg_module_path := /system/lib64/valgrind
else
  vg_module_path := /system/lib/valgrind
endif

vg_libdir := \"$(vg_module_path)\"

target_arch_cflags+=-DVG_LIBDIR=$(vg_libdir)

ifdef TARGET_2ND_ARCH
target_2nd_arch_cflags := \
	-DVGA_$(TARGET_2ND_ARCH)=1 \
	-DVGP_$(TARGET_2ND_ARCH)_linux=1 \
	-DVGPV_$(TARGET_2ND_ARCH)_linux_android=1 \
    -DVG_LIBDIR=$(vg_libdir) \
	-DVG_PLATFORM=\"$(TARGET_2ND_ARCH)-linux\"
vg_second_arch := $(TARGET_2ND_ARCH)

endif

common_includes := \
	external/valgrind/main \
	external/valgrind/main/include \
	external/valgrind/main/VEX/pub \
	external/valgrind/main/coregrind

vex_ldflags := -nodefaultlibs

ifeq (,$(filter $(TARGET_ARCH),arm arm64))
tool_ldflags := -static -Wl,--build-id=none,-Ttext=0x38000000 -nodefaultlibs -nostartfiles -u _start -e_start

# ioctl/syscall wrappers are device dependent
ifeq ($(TARGET_BOOTLOADER_BOARD_NAME),manta)
ANDROID_HARDWARE := ANDROID_HARDWARE_nexus_10
else ifeq ($(TARGET_BOOTLOADER_BOARD_NAME),grouper)
ANDROID_HARDWARE := ANDROID_HARDWARE_nexus_7
else ifeq ($(TARGET_BOOTLOADER_BOARD_NAME),MAKO)
ANDROID_HARDWARE := ANDROID_HARDWARE_nexus_4
endif

else
tool_ldflags := -static -Wl,-Ttext=0x38000000 -nodefaultlibs -nostartfiles -u _start -e_start
endif

common_cflags += -D$(ANDROID_HARDWARE)

preload_ldflags := -nodefaultlibs -Wl,-z,interpose,-z,initfirst
# Remove this when the all toolchains are GCC 4.4
ifeq ($(TARGET_ARCH),arm)
  preload_ldflags += -Wl,--icf=none
endif

# Build libvex-($TARGET_ARCH)-linux.a
vg_local_module=libvex

vg_local_cflags := $(common_cflags) \
    -Wbad-function-cast \
    -Wcast-qual \
    -Wcast-align \
    -fstrict-aliasing

vg_local_src_files := \
	VEX/priv/main_globals.c \
	VEX/priv/main_main.c \
	VEX/priv/main_util.c \
	VEX/priv/ir_defs.c \
	VEX/priv/ir_match.c \
	VEX/priv/ir_opt.c \
	VEX/priv/ir_inject.c \
	VEX/priv/guest_generic_bb_to_IR.c \
	VEX/priv/guest_generic_x87.c \
	VEX/priv/guest_mips_helpers.c \
	VEX/priv/guest_mips_toIR.c \
	VEX/priv/guest_x86_helpers.c \
	VEX/priv/guest_x86_toIR.c \
	VEX/priv/guest_amd64_helpers.c \
	VEX/priv/guest_amd64_toIR.c \
	VEX/priv/guest_ppc_helpers.c \
	VEX/priv/guest_ppc_toIR.c \
	VEX/priv/guest_arm_helpers.c \
	VEX/priv/guest_arm_toIR.c \
	VEX/priv/guest_arm64_helpers.c \
	VEX/priv/guest_arm64_toIR.c \
	VEX/priv/guest_s390_helpers.c \
	VEX/priv/guest_s390_toIR.c \
	VEX/priv/host_generic_maddf.c \
	VEX/priv/host_generic_regs.c \
	VEX/priv/host_generic_simd64.c \
	VEX/priv/host_generic_simd128.c \
	VEX/priv/host_generic_simd256.c \
	VEX/priv/host_generic_reg_alloc2.c \
	VEX/priv/host_x86_defs.c \
	VEX/priv/host_x86_isel.c \
	VEX/priv/host_amd64_defs.c \
	VEX/priv/host_amd64_isel.c \
	VEX/priv/host_mips_defs.c \
	VEX/priv/host_mips_isel.c \
	VEX/priv/host_ppc_defs.c \
	VEX/priv/host_ppc_isel.c \
	VEX/priv/host_arm_defs.c \
	VEX/priv/host_arm_isel.c \
	VEX/priv/host_arm64_defs.c \
	VEX/priv/host_arm64_isel.c \
	VEX/priv/host_s390_defs.c \
	VEX/priv/host_s390_isel.c \
	VEX/priv/s390_disasm.c

vg_local_target := STATIC_LIBRARY
include $(LOCAL_PATH)/Android.build_all.mk

# Build libcoregrind-$(TARGET_ARCH)-linux.a
vg_local_module := libcoregrind
vg_local_target := STATIC_LIBRARY

vg_local_src_files := \
	coregrind/m_addrinfo.c \
	coregrind/m_cache.c \
	coregrind/m_commandline.c \
	coregrind/m_clientstate.c \
	coregrind/m_cpuid.S \
	coregrind/m_debugger.c \
	coregrind/m_debuglog.c \
	coregrind/m_errormgr.c \
	coregrind/m_execontext.c \
	coregrind/m_hashtable.c \
	coregrind/m_libcbase.c \
	coregrind/m_libcassert.c \
	coregrind/m_libcfile.c \
	coregrind/m_libcprint.c \
	coregrind/m_libcproc.c \
	coregrind/m_libcsetjmp.c \
	coregrind/m_libcsignal.c \
	coregrind/m_machine.c \
	coregrind/m_main.c \
	coregrind/m_mallocfree.c \
	coregrind/m_options.c \
	coregrind/m_oset.c \
	coregrind/m_poolalloc.c \
	coregrind/m_rangemap.c \
	coregrind/m_redir.c \
	coregrind/m_seqmatch.c \
	coregrind/m_signals.c \
	coregrind/m_sparsewa.c \
	coregrind/m_stacks.c \
	coregrind/m_stacktrace.c \
	coregrind/m_syscall.c \
	coregrind/m_threadstate.c \
	coregrind/m_tooliface.c \
	coregrind/m_trampoline.S \
	coregrind/m_translate.c \
	coregrind/m_transtab.c \
	coregrind/m_vki.c \
	coregrind/m_vkiscnums.c \
	coregrind/m_wordfm.c \
	coregrind/m_xarray.c \
	coregrind/m_aspacehl.c \
	coregrind/m_aspacemgr/aspacemgr-common.c \
	coregrind/m_aspacemgr/aspacemgr-linux.c \
	coregrind/m_coredump/coredump-elf.c \
	coregrind/m_coredump/coredump-macho.c \
	coregrind/m_debuginfo/image.c \
	coregrind/m_debuginfo/misc.c \
	coregrind/m_debuginfo/d3basics.c \
	coregrind/m_debuginfo/debuginfo.c \
	coregrind/m_debuginfo/readdwarf.c \
	coregrind/m_debuginfo/readdwarf3.c \
	coregrind/m_debuginfo/readelf.c \
	coregrind/m_debuginfo/readmacho.c \
	coregrind/m_debuginfo/readpdb.c \
	coregrind/m_debuginfo/storage.c \
	coregrind/m_debuginfo/tytypes.c \
	coregrind/m_demangle/cp-demangle.c \
	coregrind/m_demangle/cplus-dem.c \
	coregrind/m_demangle/demangle.c \
	coregrind/m_demangle/dyn-string.c \
	coregrind/m_demangle/safe-ctype.c \
	coregrind/m_dispatch/dispatch-x86-linux.S \
	coregrind/m_dispatch/dispatch-amd64-linux.S \
	coregrind/m_dispatch/dispatch-ppc32-linux.S \
	coregrind/m_dispatch/dispatch-ppc64-linux.S \
	coregrind/m_dispatch/dispatch-arm-linux.S \
	coregrind/m_dispatch/dispatch-arm64-linux.S \
	coregrind/m_dispatch/dispatch-x86-darwin.S \
	coregrind/m_dispatch/dispatch-amd64-darwin.S \
	coregrind/m_initimg/initimg-linux.c \
	coregrind/m_initimg/initimg-darwin.c \
	coregrind/m_initimg/initimg-pathscan.c \
	coregrind/m_mach/mach_basics.c \
	coregrind/m_mach/mach_msg.c \
	coregrind/m_mach/mach_traps-x86-darwin.S \
	coregrind/m_mach/mach_traps-amd64-darwin.S \
	coregrind/m_replacemalloc/replacemalloc_core.c \
    coregrind/m_sbprofile.c \
	coregrind/m_scheduler/sched-lock.c \
	coregrind/m_scheduler/sched-lock-generic.c \
	coregrind/m_scheduler/scheduler.c \
	coregrind/m_scheduler/sema.c \
	coregrind/m_scheduler/ticket-lock-linux.c \
	coregrind/m_sigframe/sigframe-x86-linux.c \
	coregrind/m_sigframe/sigframe-amd64-linux.c \
	coregrind/m_sigframe/sigframe-ppc32-linux.c \
	coregrind/m_sigframe/sigframe-ppc64-linux.c \
	coregrind/m_sigframe/sigframe-arm-linux.c \
	coregrind/m_sigframe/sigframe-arm64-linux.c \
	coregrind/m_sigframe/sigframe-x86-darwin.c \
	coregrind/m_sigframe/sigframe-amd64-darwin.c \
	coregrind/m_sigframe/sigframe-s390x-linux.c \
	coregrind/m_syswrap/syscall-x86-linux.S \
	coregrind/m_syswrap/syscall-amd64-linux.S \
	coregrind/m_syswrap/syscall-ppc32-linux.S \
	coregrind/m_syswrap/syscall-ppc64-linux.S \
	coregrind/m_syswrap/syscall-arm-linux.S \
	coregrind/m_syswrap/syscall-arm64-linux.S \
	coregrind/m_syswrap/syscall-x86-darwin.S \
	coregrind/m_syswrap/syscall-amd64-darwin.S \
	coregrind/m_syswrap/syscall-s390x-linux.S \
	coregrind/m_syswrap/syswrap-main.c \
	coregrind/m_syswrap/syswrap-generic.c \
	coregrind/m_syswrap/syswrap-linux.c \
	coregrind/m_syswrap/syswrap-linux-variants.c \
	coregrind/m_syswrap/syswrap-darwin.c \
	coregrind/m_syswrap/syswrap-x86-linux.c \
	coregrind/m_syswrap/syswrap-amd64-linux.c \
	coregrind/m_syswrap/syswrap-ppc32-linux.c \
	coregrind/m_syswrap/syswrap-ppc64-linux.c \
	coregrind/m_syswrap/syswrap-arm-linux.c \
	coregrind/m_syswrap/syswrap-arm64-linux.c \
	coregrind/m_syswrap/syswrap-x86-darwin.c \
	coregrind/m_syswrap/syswrap-amd64-darwin.c \
	coregrind/m_syswrap/syswrap-s390x-linux.c \
	coregrind/m_syswrap/syswrap-xen.c \
	coregrind/m_ume/elf.c \
	coregrind/m_ume/macho.c \
	coregrind/m_ume/main.c \
	coregrind/m_ume/script.c \
	coregrind/vgdb.c \
	coregrind/m_gdbserver/inferiors.c \
	coregrind/m_gdbserver/m_gdbserver.c \
	coregrind/m_gdbserver/regcache.c \
	coregrind/m_gdbserver/remote-utils.c \
	coregrind/m_gdbserver/server.c \
	coregrind/m_gdbserver/signals.c \
	coregrind/m_gdbserver/target.c \
	coregrind/m_gdbserver/utils.c \
	coregrind/m_gdbserver/valgrind-low-amd64.c \
	coregrind/m_gdbserver/valgrind-low-arm.c \
	coregrind/m_gdbserver/valgrind-low-arm64.c \
	coregrind/m_gdbserver/valgrind-low-ppc32.c \
	coregrind/m_gdbserver/valgrind-low-ppc64.c \
	coregrind/m_gdbserver/valgrind-low-s390x.c \
	coregrind/m_gdbserver/valgrind-low-x86.c \
	coregrind/m_gdbserver/version.c

vg_local_ldflags := $(vex_ldflags)
vg_local_cflags := $(common_cflags)

include $(LOCAL_PATH)/Android.build_all.mk

# Build libreplacemalloc_toolpreload-$(TARGET_ARCH)-linux.a
vg_local_module := libreplacemalloc_toolpreload
vg_local_target := STATIC_LIBRARY

vg_local_src_files := \
	coregrind/m_replacemalloc/vg_replace_malloc.c

vg_local_ldflags := $(preload_ldflags)

vg_local_cflags := $(common_cflags)

include $(LOCAL_PATH)/Android.build_all.mk

# Build vgpreload_core-$(TARGET_ARCH)-linux.so
vg_local_module := vgpreload_core
vg_local_target := SHARED_LIBRARY
vg_local_module_class := SHARED_LIBRARIES

vg_local_src_files := \
	coregrind/vg_preloaded.c

#LOCAL_STRIP_MODULE := false
#vg_local_no_crt := true
#LOCAL_PRELINK_MODULE := false

vg_local_ldflags := $(preload_ldflags)
vg_local_cflags := $(common_cflags)

vg_local_arch_cflags := $(target_arch_cflags)

include $(LOCAL_PATH)/Android.build_all.mk

# Build memcheck-$(TARGET_ARCH)-linux
vg_local_module := memcheck
vg_local_target := EXECUTABLE
vg_local_module_class := SHARED_LIBRARIES
vg_local_src_files := \
	memcheck/mc_leakcheck.c \
	memcheck/mc_malloc_wrappers.c \
	memcheck/mc_main.c \
	memcheck/mc_translate.c \
	memcheck/mc_machine.c \
	memcheck/mc_errors.c

vg_local_cflags := $(common_cflags)
vg_local_ldflags := $(tool_ldflags)
vg_local_static_libraries := libcoregrind libvex

vg_local_without_system_shared_libraries := true
vg_local_no_crt := true

include $(LOCAL_PATH)/Android.build_all.mk

# Build vgpreload_memcheck-$(TARGET_ARCH)-linux.so
vg_local_module := vgpreload_memcheck
vg_local_module_class := SHARED_LIBRARIES
vg_local_target := SHARED_LIBRARY

vg_local_src_files := \
	memcheck/mc_replace_strmem.c

vg_local_ldflags := $(preload_ldflags)
vg_local_cflags := $(common_cflags)

vg_local_whole_static_libraries := libreplacemalloc_toolpreload

include $(LOCAL_PATH)/Android.build_all.mk

#LOCAL_STRIP_MODULE := false
#vg_local_no_crt := true
#LOCAL_PRELINK_MODULE := false


# Build cachegrind-$(TARGET_ARCH)-linux
vg_local_module := cachegrind
vg_local_module_class := SHARED_LIBRARIES
vg_local_target := EXECUTABLE
vg_local_no_crt := true
vg_local_without_system_shared_libraries := true

vg_local_src_files := \
	cachegrind/cg_arch.c \
	cachegrind/cg_main.c

vg_local_ldflags := $(tool_ldflags)
vg_local_cflags := $(common_cflags)

vg_local_static_libraries := libcoregrind libvex

include $(LOCAL_PATH)/Android.build_all.mk

#LOCAL_FORCE_STATIC_EXECUTABLE := true

# Build callgrind-$(TARGET_ARCH)-linux

vg_local_module := callgrind
vg_local_module_class := SHARED_LIBRARIES
vg_local_target := EXECUTABLE
vg_local_no_crt := true
vg_local_without_system_shared_libraries := true

vg_local_src_files := \
	callgrind/bb.c \
	callgrind/bbcc.c \
	callgrind/callstack.c \
	callgrind/clo.c \
	callgrind/context.c \
	callgrind/costs.c \
	callgrind/debug.c \
	callgrind/dump.c \
	callgrind/events.c \
	callgrind/fn.c \
	callgrind/jumps.c \
	callgrind/main.c \
	callgrind/sim.c \
	callgrind/threads.c

vg_local_c_includes := external/valgrind/main/cachegrind
vg_local_ldflags := $(tool_ldflags)
vg_local_cflags := $(common_cflags)
vg_local_static_libraries := libcoregrind libvex

include $(LOCAL_PATH)/Android.build_all.mk

#LOCAL_FORCE_STATIC_EXECUTABLE := true

# Build helgrind-$(TARGET_ARCH)-linux
vg_local_module := helgrind
vg_local_module_class := SHARED_LIBRARIES
vg_local_target := EXECUTABLE
vg_local_no_crt := true
vg_local_without_system_shared_libraries := true
vg_local_src_files := \
    helgrind/hg_addrdescr.c \
    helgrind/hg_basics.c \
    helgrind/hg_errors.c \
    helgrind/hg_lock_n_thread.c \
    helgrind/hg_main.c \
    helgrind/hg_wordset.c \
    helgrind/libhb_core.c

vg_local_ldflags := $(tool_ldflags)
vg_local_cflags := $(common_cflags)
vg_local_static_libraries := libcoregrind libvex

include $(LOCAL_PATH)/Android.build_all.mk

#LOCAL_FORCE_STATIC_EXECUTABLE := true

# Build vgpreload_helgrind-$(TARGET_ARCH)-linux.so
vg_local_module := vgpreload_helgrind
vg_local_module_class := SHARED_LIBRARIES
vg_local_target := SHARED_LIBRARY
#LOCAL_STRIP_MODULE := false
vg_local_no_crt := true
#LOCAL_PRELINK_MODULE := false

vg_local_src_files := \
	helgrind/hg_intercepts.c


vg_local_ldflags := $(preload_ldflags)
vg_local_cflags := $(common_cflags)
vg_local_whole_static_libraries := libreplacemalloc_toolpreload

include $(LOCAL_PATH)/Android.build_all.mk

# Build drd-$(TARGET_ARCH)-linux
vg_local_module := drd
vg_local_module_class := SHARED_LIBRARIES
vg_local_target := EXECUTABLE
#LOCAL_FORCE_STATIC_EXECUTABLE := true
vg_local_no_crt := true
vg_local_without_system_shared_libraries := true

vg_local_src_files := \
	drd/drd_barrier.c \
	drd/drd_clientobj.c \
	drd/drd_clientreq.c \
	drd/drd_cond.c \
	drd/drd_cond_initializer.c \
	drd/drd_error.c \
	drd/drd_hb.c \
	drd/drd_load_store.c \
	drd/drd_main.c \
	drd/drd_malloc_wrappers.c \
	drd/drd_mutex.c \
	drd/drd_rwlock.c \
	drd/drd_semaphore.c \
	drd/drd_suppression.c

vg_local_ldflags := $(tool_ldflags)
vg_local_cflags := $(common_cflags)

vg_local_static_libraries := libcoregrind libvex

include $(LOCAL_PATH)/Android.build_all.mk

# Build vgpreload_drd-$(TARGET_ARCH)-linux.so
vg_local_module := vgpreload_drd
vg_local_module_class := SHARED_LIBRARIES
vg_local_target := SHARED_LIBRARY
#LOCAL_STRIP_MODULE := false
vg_local_no_crt := true
#LOCAL_PRELINK_MODULE := false

vg_local_src_files := \
	drd/drd_pthread_intercepts.c \
	drd/drd_qtcore_intercepts.c \
	drd/drd_strmem_intercepts.c

vg_local_ldflags := $(preload_ldflags)
vg_local_cflags := $(common_cflags)

vg_local_whole_static_libraries := libreplacemalloc_toolpreload

include $(LOCAL_PATH)/Android.build_all.mk

# Build massif-$(TARGET_ARCH)-linux
vg_local_module := massif
vg_local_module_class := SHARED_LIBRARIES
vg_local_target := EXECUTABLE
#LOCAL_FORCE_STATIC_EXECUTABLE := true
vg_local_no_crt := true
vg_local_without_system_shared_libraries := true

vg_local_src_files := \
	massif/ms_main.c

vg_local_ldflags := $(tool_ldflags)
vg_local_cflags := $(common_cflags)

vg_local_static_libraries := libcoregrind libvex

include $(LOCAL_PATH)/Android.build_all.mk

# Build vgpreload_massif-$(TARGET_ARCH)-linux.so
vg_local_module := vgpreload_massif
vg_local_module_class := SHARED_LIBRARIES
vg_local_target := SHARED_LIBRARY
#LOCAL_STRIP_MODULE := false
vg_local_no_crt := true

#LOCAL_PRELINK_MODULE := false

vg_local_src_files :=

vg_local_ldflags := $(preload_ldflags)
vg_local_cflags := $(common_cflags)
vg_local_whole_static_libraries := libreplacemalloc_toolpreload

include $(LOCAL_PATH)/Android.build_all.mk

# Build none-$(TARGET_ARCH)-linux
vg_local_module := none
vg_local_module_class := SHARED_LIBRARIES
vg_local_target := EXECUTABLE

#LOCAL_FORCE_STATIC_EXECUTABLE := true
vg_local_no_crt := true
vg_local_without_system_shared_libraries := true

vg_local_src_files := \
	none/nl_main.c

vg_local_ldflags := $(tool_ldflags)
vg_local_cflags := $(common_cflags)
vg_local_static_libraries := libcoregrind libvex

include $(LOCAL_PATH)/Android.build_all.mk

# Build valgrind
include $(CLEAR_VARS)
LOCAL_MODULE := valgrind
LOCAL_ARM_MODE := arm
LOCAL_SRC_FILES := \
	coregrind/launcher-linux.c \
	coregrind/m_debuglog.c

LOCAL_C_INCLUDES := $(common_includes)
LOCAL_CFLAGS := $(common_cflags)

LOCAL_CFLAGS_$(TARGET_ARCH) = $(target_arch_cflags)

include $(BUILD_EXECUTABLE)

# Build tests (one of them)...
# TODO: tests need separate build framework it terms of 2ND_ARCH
ifeq ($(TARGET_ARCH),arm)
test := v6intThumb
include $(LOCAL_PATH)/Android.test.mk
endif

ifeq ($(TARGET_ARCH),arm64)
test := integer
include $(LOCAL_PATH)/Android.test.mk
test := fp_and_simd
include $(LOCAL_PATH)/Android.test.mk
endif

# Copy prebuilt suppressions
include $(CLEAR_VARS)
LOCAL_MODULE := default.supp
LOCAL_MODULE_CLASS := SHARED_LIBRARIES
LOCAL_MODULE_PATH := $(PRODUCT_OUT)$(vg_module_path)
LOCAL_SRC_FILES := bionic.supp

include $(BUILD_PREBUILT)

#include bionic/libc/Android.mk

endif
