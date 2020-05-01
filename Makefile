srcdir := $(CURDIR)
objdir := $(CURDIR)


# must declare at here before include common_build
# start of image reserved address space
LIBART_IMG_HOST_BASE_ADDRESS   := 0x60000000
LIBART_IMG_TARGET_BASE_ADDRESS := 0x70000000
include art/build/Android.common_path.mk
include art/build/Android.executable.mk
include art/build/Android.common_build.mk

GENERATOR := $(srcdir)/art/tools/generate_operator_out.py

DEX2IR_SRCS := $(srcdir)/dex2oat.cc
DEX2IR_OBJS := $(patsubst $(srcdir)/%.cc,$(objdir)/%.op,$(DEX2IR_SRCS))

art_cflags := \
	-fno-rtti \
	-std=gnu++11 \
	-ggdb3 \
	-Wno-sign-promo \
	-Wno-unused-parameter \
	-Wstrict-aliasing \
	-fstrict-aliasing \
	-fvisibility=protected

# these are necessary for Clang ARM64 ART builds
ART_TARGET_CLANG_CFLAGS_arm64  += \
	-Wno-implicit-exception-spec-mismatch \
	-DNVALGRIND \
	-Wno-unused-value

ART_C_INCLUDES := \
	external/gtest/include \
	external/valgrind/main/include \
	external/valgrind/main \
	external/vixl/src \
	external/zlib \
	frameworks/compile/mclinker/include


LIBRUNTIME_BASE := $(srcdir)/art/runtime
LIBRUNTIME_HDRS := $(LIBRUNTIME_BASE)
MIRROR_HDRS := $(LIBRUNTIME_BASE)/mirror
BASE_HDRS := $(LIBRUNTIME_BASE)/base
LIBRUNTIME_ARCHIVE := $(LIBRUNTIME_BASE)/libart.a

LIBARTC_BASE := $(srcdir)/art/compiler
LIBARTC_HDRS := $(srcdir)/art/compiler
LIBARTC_ARCHIVE := $(LIBARTC_BASE)/libartc.a

EXTERNAL_BASE := $(srcdir)/external
LIBLLVM_BASE := $(EXTERNAL_BASE)/llvm
LIBLLVM_HDRS := $(LIBLLVM_BASE)/include

LIBNATIVEHELPER_BASE := $(srcdir)/libnativehelper
LIBNATIVEHELPER_HDRS := $(LIBNATIVEHELPER_BASE)/include/nativehelper

LIBVALGRIND_BASE := $(srcdir)/external/valgrind
LIBVALGRIND_HDRS := $(LIBVALGRIND_BASE)/main/include
LIBVALGRIND_MAIN := $(LIBVALGRIND_BASE)/main
LIBVALGRIND_SUB_HDRS := $(LIBVALGRIND_MAIN)

GTEST_BASE := $(srcdir)/external/gtest
GTEST_HDRS := $(GTEST_BASE)/include
VIXL_BASE := $(srcdir)/external/vixl
VIXL_HDRS := $(VIXL_BASE)/src
MCLINKER_BASE := $(srcdir)/external/compile/mclinker
MCLINKER_HDRS := $(MCLINKER_BASE)/include
LIBZLIB_BASE := $(srcdir)/external/zlib

SYSTEM_CORE_BASE := $(srcdir)/system/core
SYSTEM_CORE_HDRS := $(SYSTEM_CORE_BASE)/include

LIBCUTILS_BASE := $(SYSTEM_CORE_BASE)/libcutils
LIBCUTILS_HDRS := $(LIBCUTILS_BASE)
CUTILS_BASE := $(SYSTEM_CORE_HDRS)/cutils
CUTILS_HDRS := $(CUTILS_BASE)

LIBSIGCHAIN_BASE := $(srcdir)/art/sigchainlib
LIBSIGCHAIN_HDRS := $(LIBSIGCHAIN_BASE)

GLOBAL_CONFIG := $(srcdir)/build/core/combo/include/arch/linux-x86/

LLVM_CONFIG := $(EXTERNAL_BASE)/llvm/host/include/

CXX := g++
CXXFLAGS += -I$(LIBVALGRIND_HDRS) -I$(LIBVALGRIND_MAIN) -I$(GTEST_HDRS) -I$(VIXL_HDRS)
CXXFLAGS += -I$(SYSTEM_CORE_HDRS) -I$(LIBCUTILS_HDRS) -I$(CUTILS_HDRS)
CXXFLAGS += -I$(MCLINKER_HDRS)

CXXFLAGS += -O0 -DDYNAMIC_ANNOTATIONS_ENABLED=1
#CXXFLAGS += -DART_USE_PARTABLE_COMPILER=1 -DIMT_SIZE=64 -DART_SEA_IR_MODE=1
# change instruction set to div if target arch is cortext a7,a15,krait,denver
#CXXFLAGS += -DART_DEFAUlT_INSTRUCTION_SET_FEATURES=default
CXXFLAGS += -Wno-expansion-to-defined
CXXFLAGS += -D_FILE_OFFSET_BITS=64
CXXFLAGS += -DANDROID_SMP
CXXFLAGS += $(ART_HOST_CFLAGS)

ANDROID_CONFIG_CXXFLAGS := -include $(srcdir)/build/core/combo/include/arch/linux-x86/AndroidConfig.h

LDFLAGS := -lz -lpthread -ldl -lm -lstdc++


include $(srcdir)/Makefile.include

export CXXFLAGS LLVM_CONFIG
export LIBNATIVEHELPER_HDRS LIBRUNTIME_HDRS 
export LIBVALGRIND_HDRS LIBVALGRIND_MAIN GTEST_HDRS VIXL_HDRS
export SYSTEM_CORE_HDRS LIBCUTILS_HDRS CUTILS_HDRS
export MCLINKER_HDRS
export LIBLLVM_HDRS MIRROR_HDRS BASE_HDRS

export LIBSIGCHAIN_HDRS LIBVALGRIND_HDRS
export ANDROID_CONFIG_CXXFLAGS

export srcdir objdir CXX CXXFLAGS GENERATOR
export ANDROID_HDRS LIBZIPARCHIVE_HDRS LIBARTPALETTE_HDRS JNI_HDRS
export LIBCUTILS_HDRS LIBUTILS_HDRS LIBUTILS_HDRS
export LIBC_HDRS LIBLOG_HDRS LIBCUTILS_HDRS LIBUTILS_HDRS
export LIBZIPARCHIVE_BASE LIBARTBASE_BASE LIBNATIVEHELPER_HDRS

export LIBARTC_ARCHIVE LIBRUNTIME_ARCHIVE

DEXIR_CFLAGS := -I$(LIBRUNTIME_HDRS) -I$(LIBNATIVEHELPER_HDRS) -I$(LIBARTC_HDRS)
DEXIR_CFLAGS += -I$(SYSTEM_CORE_HDRS) -I$(LIBVALGRIND_HDRS) -I$(LIBVALGRIND_SUB_HDRS)
DEXIR_CFLAGS += -D_FILE_OFFSET_BITS=64

all: $(LIBRUNTIME_ARCHIVE) $(LIBARTC_ARCHIVE) dex2ir

$(LIBRUNTIME_ARCHIVE):
	@$(MAKE) -C $(LIBRUNTIME_BASE)

$(LIBARTC_ARCHIVE):
	@$(MAKE) -C $(LIBARTC_BASE)

$(DEX2IR_OBJS):
	$(CXX) -c $(@:.op=.cc) -o $@ $(DEXIR_CFLAGS)

dex2ir: $(DEX2IR_OBJS) $(LIBRUNTIME_ARCHIVE) $(LIBARTC_ARCHIVE)
	$(QUIET_CXX)$(CXX) -o $@ $^ $(LDFLAGS)

clean:
	@$(MAKE) -C $(LIBRUNTIME_BASE) clean
	@$(MAKE) -C $(LIBARTC_BASE) clean
	rm -f $(objdir)/*.op
	rm -f dex2ir
