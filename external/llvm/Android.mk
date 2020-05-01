LOCAL_PATH := $(call my-dir)
LLVM_ROOT_PATH := $(LOCAL_PATH)
LLVM_ENABLE_ASSERTION := false

include $(CLEAR_VARS)

# LLVM Libraries
subdirs := \
  lib/Analysis \
  lib/Analysis/IPA \
  lib/AsmParser \
  lib/Bitcode/Reader \
  lib/Bitcode/Writer \
  lib/ExecutionEngine \
  lib/ExecutionEngine/RuntimeDyld \
  lib/ExecutionEngine/JIT \
  lib/ExecutionEngine/MCJIT \
  lib/ExecutionEngine/Interpreter \
  lib/CodeGen \
  lib/CodeGen/AsmPrinter \
  lib/CodeGen/SelectionDAG \
  lib/DebugInfo \
  lib/IR \
  lib/IRReader \
  lib/Linker \
  lib/LTO \
  lib/MC \
  lib/MC/MCAnalysis \
  lib/MC/MCDisassembler \
  lib/MC/MCParser \
  lib/Object \
  lib/Option \
  lib/ProfileData \
  lib/Support \
  lib/TableGen \
  lib/Target \
  lib/Transforms/IPO \
  lib/Transforms/InstCombine \
  lib/Transforms/Instrumentation \
  lib/Transforms/ObjCARC \
  lib/Transforms/Scalar \
  lib/Transforms/Utils \
  lib/Transforms/Vectorize \

# ARM Code Generation Libraries
subdirs += \
  lib/Target/ARM \
  lib/Target/ARM/AsmParser \
  lib/Target/ARM/InstPrinter \
  lib/Target/ARM/Disassembler \
  lib/Target/ARM/MCTargetDesc \
  lib/Target/ARM/TargetInfo

# AArch64 Code Generation Libraries
subdirs += \
  lib/Target/AArch64  \
  lib/Target/AArch64/AsmParser \
  lib/Target/AArch64/InstPrinter \
  lib/Target/AArch64/Disassembler \
  lib/Target/AArch64/MCTargetDesc \
  lib/Target/AArch64/TargetInfo \
  lib/Target/AArch64/Utils

# MIPS Code Generation Libraries
subdirs += \
  lib/Target/Mips \
  lib/Target/Mips/AsmParser \
  lib/Target/Mips/InstPrinter \
  lib/Target/Mips/Disassembler \
  lib/Target/Mips/MCTargetDesc \
  lib/Target/Mips/TargetInfo

# X86 Code Generation Libraries
subdirs += \
  lib/Target/X86 \
  lib/Target/X86/AsmParser \
  lib/Target/X86/InstPrinter \
  lib/Target/X86/Disassembler \
  lib/Target/X86/MCTargetDesc \
  lib/Target/X86/TargetInfo \
  lib/Target/X86/Utils

# LLVM Command Line Tools
subdirs += \
  tools/bugpoint \
  tools/llc \
  tools/lli \
  tools/llvm-ar \
  tools/llvm-as \
  tools/llvm-bcanalyzer \
  tools/llvm-c-test \
  tools/llvm-config \
  tools/llvm-cov \
  tools/llvm-dis \
  tools/llvm-diff \
  tools/llvm-dwarfdump \
  tools/llvm-extract \
  tools/llvm-link \
  tools/llvm-lto \
  tools/llvm-mc \
  tools/llvm-mcmarkup \
  tools/llvm-nm \
  tools/llvm-objdump \
  tools/llvm-profdata \
  tools/llvm-readobj \
  tools/llvm-rtdyld \
  tools/llvm-size \
  tools/macho-dump \
  tools/obj2yaml \
  tools/opt \
  tools/yaml2obj \

# LLVM Command Line Utilities
subdirs += \
  utils/count \
  utils/FileCheck \
  utils/not \
  utils/TableGen \

include $(LOCAL_PATH)/llvm.mk
include $(LOCAL_PATH)/shared_llvm.mk

include $(addprefix $(LOCAL_PATH)/,$(addsuffix /Android.mk, $(subdirs)))
