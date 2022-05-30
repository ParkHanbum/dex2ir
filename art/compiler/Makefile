#
# Copyright (C) 2012 The Android Open Source Project
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

include $(srcdir)/Makefile.include
include $(srcdir)/art/build/Android.common.mk

srcdir := $(CURDIR)
objdir := $(CURDIR)


LIBART_COMPILER_SRC_FILES := \
	compiled_method.cc \
	dex/local_value_numbering.cc \
	dex/dex_to_dex_compiler.cc \
	dex/mir_dataflow.cc \
	dex/mir_field_info.cc \
	dex/mir_method_info.cc \
	dex/mir_optimization.cc \
	dex/pass_driver.cc \
	dex/bb_optimizations.cc \
	dex/bit_vector_block_iterator.cc \
	dex/frontend.cc \
	dex/mir_graph.cc \
	dex/mir_analysis.cc \
	dex/verified_method.cc \
	dex/verification_results.cc \
	dex/vreg_analysis.cc \
	dex/ssa_transformation.cc \
	driver/compiler_driver.cc \
	driver/dex_compilation_unit.cc \
	optimizing/builder.cc \
	optimizing/code_generator.cc \
	optimizing/code_generator_arm.cc \
	optimizing/code_generator_x86.cc \
	optimizing/graph_visualizer.cc \
	optimizing/nodes.cc \
	optimizing/optimizing_compiler.cc \
	optimizing/ssa_builder.cc \
	optimizing/ssa_liveness_analysis.cc \
	trampolines/trampoline_compiler.cc \
	utils/arena_allocator.cc \
	utils/arena_bit_vector.cc \
	utils/arm/assembler_arm.cc \
	utils/arm/managed_register_arm.cc \
	utils/arm64/assembler_arm64.cc \
	utils/arm64/managed_register_arm64.cc \
	utils/assembler.cc \
	utils/mips/assembler_mips.cc \
	utils/mips/managed_register_mips.cc \
	utils/x86/assembler_x86.cc \
	utils/x86/managed_register_x86.cc \
	utils/x86_64/assembler_x86_64.cc \
	utils/x86_64/managed_register_x86_64.cc \
	utils/scoped_arena_allocator.cc \
	buffered_output_stream.cc \
	compiler.cc \
	elf_fixup.cc \
	elf_stripper.cc \
	elf_writer.cc \
	elf_writer_quick.cc \
	file_output_stream.cc \
	image_writer.cc \
	oat_writer.cc \
	vector_output_stream.cc

LIBART_COMPILER_SRC_FILES += \
	dex/portable/mir_to_gbc.cc \
	elf_writer_mclinker.cc \
	jni/portable/jni_compiler.cc \
	llvm/compiler_llvm.cc \
	llvm/gbc_expander.cc \
	llvm/generated/art_module.cc \
	llvm/intrinsic_helper.cc \
	llvm/ir_builder.cc \
	llvm/llvm_compilation_unit.cc \
	llvm/md_builder.cc \
	llvm/runtime_support_builder.cc \
	llvm/runtime_support_builder_arm.cc \
	llvm/runtime_support_builder_x86.cc

LIBART_COMPILER_ENUM_OPERATOR_OUT_HEADER_FILES := \
	dex/compiler_enums.h

LIBART_COMPILER_ENUM_OPERATOR_OUT_HEADER_FILES += \
	utils/x86/managed_register_x86.h \
	utils/x86/constants_x86.h \
	utils/x86_64/managed_register_x86_64.h \
	utils/x86_64/constants_x86_64.h \
	utils/arm/managed_register_arm.h \
	utils/arm/constants_arm.h \
	utils/arm64/managed_register_arm64.h \
	utils/arm64/constants_arm64.h \
	utils/mips/managed_register_mips.h \
	utils/mips/constants_mips.h \

# ART_USE_PORTABLE_COMPILER indicates whether to use the LLVM compiler.
LIBARTC_CFLAGS := -I$(srcdir) -I$(LIBLLVM_HDRS) -I$(srcdir)/dex/portable
LIBARTC_CFLAGS += -I$(LIBRUNTIME_HDRS) -I$(LIBNATIVEHELPER_HDRS) -I$(LIBZLIB_HDRS)
LIBARTC_CFLAGS += -I$(srcdir)/dex
LIBARTC_CFLAGS += $(CXXFLAGS) $(LLVM_CXXFLAGS)

LIBARTC_CFLAGS += -DART_USE_PORTABLE_COMPILER=1 -D__STDC_LIMIT_MACROS -D__STDC_CONSTANT_MACROS


GENERATED_SRC := generated_out.cc
SRC_FILES := $(LIBART_COMPILER_SRC_FILES)
SRC_FILES += $(GENERATED_SRC)

OBJS := $(patsubst %.cc,%.o,$(SRC_FILES))
OBJS := $(addprefix $(objdir)/,$(OBJS))

TARGET := $(notdir $(LIBARTC_ARCHIVE))


all: $(GENERATED_SRC) $(TARGET)

$(GENERATED_SRC):
	$(QUIET_GEN) python $(GENERATOR) $(srcdir) $(LIBART_COMPILER_ENUM_OPERATOR_OUT_HEADER_FILES) > $@

$(OBJS):
	$(CXX) -c $(@:.o=.cc) -o $@ $(LIBARTC_CFLAGS)

$(TARGET): $(OBJS)
	$(QUIET_AR)ar -rcs $@ $^

clean:
	rm -f $(objdir)/$(GENERATED_SRC)
	rm -f $(objdir)/$(TARGET)
	find . -name '*.o' -exec rm {} \;
