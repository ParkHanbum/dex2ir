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

srcdir := $(CURDIR)
objdir := $(CURDIR)

LIBART_COMPILER_SRC_FILES := \
	compiled_method.cc \
	dex/global_value_numbering.cc \
	dex/local_value_numbering.cc \
	dex/quick/arm/assemble_arm.cc \
	dex/quick/arm/call_arm.cc \
	dex/quick/arm/fp_arm.cc \
	dex/quick/arm/int_arm.cc \
	dex/quick/arm/target_arm.cc \
	dex/quick/arm/utility_arm.cc \
	dex/quick/arm64/assemble_arm64.cc \
	dex/quick/arm64/call_arm64.cc \
	dex/quick/arm64/fp_arm64.cc \
	dex/quick/arm64/int_arm64.cc \
	dex/quick/arm64/target_arm64.cc \
	dex/quick/arm64/utility_arm64.cc \
	dex/quick/codegen_util.cc \
	dex/quick/dex_file_method_inliner.cc \
	dex/quick/dex_file_to_method_inliner_map.cc \
	dex/quick/gen_common.cc \
	dex/quick/gen_invoke.cc \
	dex/quick/gen_loadstore.cc \
	dex/quick/local_optimizations.cc \
	dex/quick/mips/assemble_mips.cc \
	dex/quick/mips/call_mips.cc \
	dex/quick/mips/fp_mips.cc \
	dex/quick/mips/int_mips.cc \
	dex/quick/mips/target_mips.cc \
	dex/quick/mips/utility_mips.cc \
	dex/quick/mir_to_lir.cc \
	dex/quick/ralloc_util.cc \
	dex/quick/resource_mask.cc \
	dex/quick/x86/assemble_x86.cc \
	dex/quick/x86/call_x86.cc \
	dex/quick/x86/fp_x86.cc \
	dex/quick/x86/int_x86.cc \
	dex/quick/x86/target_x86.cc \
	dex/quick/x86/utility_x86.cc \
	dex/dex_to_dex_compiler.cc \
	dex/mir_dataflow.cc \
	dex/mir_field_info.cc \
	dex/mir_method_info.cc \
	dex/mir_optimization.cc \
	dex/bb_optimizations.cc \
	dex/post_opt_passes.cc \
	dex/pass_driver_me_opts.cc \
	dex/pass_driver_me_post_opt.cc \
	dex/frontend.cc \
	dex/mir_graph.cc \
	dex/mir_analysis.cc \
	dex/verified_method.cc \
	dex/verification_results.cc \
	dex/vreg_analysis.cc \
	dex/ssa_transformation.cc \
	dex/quick_compiler_callbacks.cc \
	driver/compiler_driver.cc \
	driver/dex_compilation_unit.cc \
	jni/quick/arm/calling_convention_arm.cc \
	jni/quick/arm64/calling_convention_arm64.cc \
	jni/quick/mips/calling_convention_mips.cc \
	jni/quick/x86/calling_convention_x86.cc \
	jni/quick/x86_64/calling_convention_x86_64.cc \
	jni/quick/calling_convention.cc \
	jni/quick/jni_compiler.cc \
	optimizing/builder.cc \
	optimizing/code_generator.cc \
	optimizing/code_generator_arm.cc \
	optimizing/code_generator_x86.cc \
	optimizing/code_generator_x86_64.cc \
	optimizing/graph_visualizer.cc \
	optimizing/locations.cc \
	optimizing/nodes.cc \
	optimizing/optimizing_compiler.cc \
	optimizing/parallel_move_resolver.cc \
	optimizing/register_allocator.cc \
	optimizing/ssa_builder.cc \
	optimizing/ssa_liveness_analysis.cc \
	optimizing/ssa_phi_elimination.cc \
	optimizing/ssa_type_propagation.cc \
	trampolines/trampoline_compiler.cc \
	utils/arena_allocator.cc \
	utils/arena_bit_vector.cc \
	utils/arm/assembler_arm.cc \
	utils/arm/assembler_arm32.cc \
	utils/arm/assembler_thumb2.cc \
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
	compilers.cc \
	compiler.cc \
	elf_fixup.cc \
	elf_patcher.cc \
	elf_stripper.cc \
	elf_writer.cc \
	elf_writer_quick.cc \
	file_output_stream.cc \
	image_writer.cc \
	oat_writer.cc \
	vector_output_stream.cc

LIBART_COMPILER_CFLAGS :=
ifeq ($(ART_USE_PORTABLE_COMPILER),true)
  LIBART_COMPILER_SRC_FILES += elf_writer_mclinker.cc
  LIBART_COMPILER_CFLAGS += -DART_USE_PORTABLE_COMPILER=1
endif

OPERATOR_OUT_HEADER_FILES := \
	dex/compiler_enums.h

LIBARTC_CFLAGS := -I$(srcdir) -I$(LIBLLVM_HDRS) -I$(LLVM_CONFIG) -I$(srcdir)/dex/portable
LIBARTC_CFLAGS += -I$(LIBRUNTIME_HDRS) -I$(LIBNATIVEHELPER_HDRS) 
LIBARTC_CFLAGS += -I$(srcdir)/dex
LIBARTC_CFLAGS += -DART_USE_PORTABLE_COMPILER=1 -D__STDC_LIMIT_MACROS -D__STDC_CONSTANT_MACROS
LIBARTC_CFLAGS += $(CXXFLAGS)
LIBARTC_CFLAGS += $(ANDROID_CONFIG_CXXFLAGS)


GENERATED_SRC := generated_out.cc
SRC_FILES := $(LIBART_COMPILER_SRC_FILES)
SRC_FILES += $(GENERATED_SRC)

OBJS := $(patsubst %.cc,%.o,$(SRC_FILES))
OBJS := $(addprefix $(objdir)/,$(OBJS))

TARGET := $(notdir $(LIBARTC_ARCHIVE))


all: $(GENERATED_SRC) $(TARGET)

$(GENERATED_SRC):
	$(QUIET_GEN) python $(GENERATOR) $(srcdir) $(OPERATOR_OUT_HEADER_FILES) > $@

$(OBJS):
	$(CXX) -c $(@:.o=.cc) -o $@ $(LIBARTC_CFLAGS)

$(TARGET): $(OBJS)
	$(QUIET_AR)ar -rcs $@ $^

clean:
	rm -f $(objdir)/$(GENERATED_SRC)
	rm -f $(objdir)/$(TARGET)
	find . -name '*.o' -exec rm {} \;
