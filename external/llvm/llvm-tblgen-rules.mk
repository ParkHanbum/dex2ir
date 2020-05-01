###########################################################
## Commands for running tblgen to compile a td file
##########################################################
define transform-td-to-out
$(if $(LOCAL_IS_HOST_MODULE),	\
	$(call transform-host-td-to-out,$(1)),	\
	$(call transform-device-td-to-out,$(1)))
endef

###########################################################
## TableGen: Compile .td files to .inc.
###########################################################

# Set LOCAL_MODULE_CLASS to STATIC_LIBRARIES default (require
# for macro local-generated-sources-dir)
ifeq ($(LOCAL_MODULE_CLASS),)
	LOCAL_MODULE_CLASS := STATIC_LIBRARIES
endif

ifneq ($(strip $(TBLGEN_TABLES)),)

generated_sources := $(call local-generated-sources-dir)
tblgen_gen_tables := $(addprefix $(generated_sources)/,$(TBLGEN_TABLES))
LOCAL_GENERATED_SOURCES += $(tblgen_gen_tables)

tblgen_source_dir := $(LOCAL_PATH)
ifneq ($(TBLGEN_TD_DIR),)
tblgen_source_dir := $(TBLGEN_TD_DIR)
endif

ifneq (,$(filter $(tblgen_source_dir),MCTargetDesc))
tblgen_td_deps := $(tblgen_source_dir)/../*.td
else
tblgen_td_deps := $(tblgen_source_dir)/*.td
endif
tblgen_td_deps := $(wildcard $(tblgen_td_deps))

#
# The directory and the .td directory is not the same.
#
ifeq ($(tblgen_source_dir),$(LLVM_ROOT_PATH)/lib/Target/ARM/MCTargetDesc)
$(generated_sources)/%GenRegisterInfo.inc: TBLGEN_LOCAL_MODULE := $(LOCAL_MODULE)
$(generated_sources)/%GenRegisterInfo.inc: $(tblgen_source_dir)/../%.td \
                                       $(tblgen_td_deps) | $(LLVM_TBLGEN)
	$(call transform-td-to-out, register-info)

$(generated_sources)/%GenInstrInfo.inc: TBLGEN_LOCAL_MODULE := $(LOCAL_MODULE)
$(generated_sources)/%GenInstrInfo.inc: $(tblgen_source_dir)/../%.td \
                                    $(tblgen_td_deps) | $(LLVM_TBLGEN)
	$(call transform-td-to-out,instr-info)

$(generated_sources)/%GenSubtargetInfo.inc: TBLGEN_LOCAL_MODULE := $(LOCAL_MODULE)
$(generated_sources)/%GenSubtargetInfo.inc: $(tblgen_source_dir)/../%.td \
                                        $(tblgen_td_deps) | $(LLVM_TBLGEN)
	$(call transform-td-to-out,subtarget)
endif

ifeq ($(tblgen_source_dir),$(LLVM_ROOT_PATH)/lib/Target/X86/MCTargetDesc)
$(generated_sources)/%GenRegisterInfo.inc: TBLGEN_LOCAL_MODULE := $(LOCAL_MODULE)
$(generated_sources)/%GenRegisterInfo.inc: $(tblgen_source_dir)/../%.td \
                                       $(tblgen_td_deps) | $(LLVM_TBLGEN)
	$(call transform-td-to-out, register-info)

$(generated_sources)/%GenInstrInfo.inc: TBLGEN_LOCAL_MODULE := $(LOCAL_MODULE)
$(generated_sources)/%GenInstrInfo.inc: $(tblgen_source_dir)/../%.td \
                                    $(tblgen_td_deps) | $(LLVM_TBLGEN)
	$(call transform-td-to-out,instr-info)

$(generated_sources)/%GenSubtargetInfo.inc: TBLGEN_LOCAL_MODULE := $(LOCAL_MODULE)
$(generated_sources)/%GenSubtargetInfo.inc: $(tblgen_source_dir)/../%.td \
                                        $(tblgen_td_deps) | $(LLVM_TBLGEN)
	$(call transform-td-to-out,subtarget)
endif

ifeq ($(tblgen_source_dir),$(LLVM_ROOT_PATH)/lib/Target/Mips/MCTargetDesc)
$(generated_sources)/%GenRegisterInfo.inc: TBLGEN_LOCAL_MODULE := $(LOCAL_MODULE)
$(generated_sources)/%GenRegisterInfo.inc: $(tblgen_source_dir)/../%.td \
                                       $(tblgen_td_deps) | $(LLVM_TBLGEN)
	$(call transform-td-to-out, register-info)

$(generated_sources)/%GenInstrInfo.inc: TBLGEN_LOCAL_MODULE := $(LOCAL_MODULE)
$(generated_sources)/%GenInstrInfo.inc: $(tblgen_source_dir)/../%.td \
                                    $(tblgen_td_deps) | $(LLVM_TBLGEN)
	$(call transform-td-to-out,instr-info)

$(generated_sources)/%GenSubtargetInfo.inc: TBLGEN_LOCAL_MODULE := $(LOCAL_MODULE)
$(generated_sources)/%GenSubtargetInfo.inc: $(tblgen_source_dir)/../%.td \
                                        $(tblgen_td_deps) | $(LLVM_TBLGEN)
	$(call transform-td-to-out,subtarget)
endif


ifneq ($(filter %GenRegisterInfo.inc,$(tblgen_gen_tables)),)
$(generated_sources)/%GenRegisterInfo.inc: TBLGEN_LOCAL_MODULE := $(LOCAL_MODULE)
$(generated_sources)/%GenRegisterInfo.inc: $(tblgen_source_dir)/%.td \
                                       $(tblgen_td_deps) | $(LLVM_TBLGEN)
	$(call transform-td-to-out,register-info)
endif

ifneq ($(filter %GenInstrInfo.inc,$(tblgen_gen_tables)),)
$(generated_sources)/%GenInstrInfo.inc: TBLGEN_LOCAL_MODULE := $(LOCAL_MODULE)
$(generated_sources)/%GenInstrInfo.inc: $(tblgen_source_dir)/%.td \
                                    $(tblgen_td_deps) | $(LLVM_TBLGEN)
	$(call transform-td-to-out,instr-info)
endif

ifneq ($(filter %GenAsmWriter.inc,$(tblgen_gen_tables)),)
$(generated_sources)/%GenAsmWriter.inc: TBLGEN_LOCAL_MODULE := $(LOCAL_MODULE)
$(generated_sources)/%GenAsmWriter.inc: $(tblgen_source_dir)/%.td \
                                    $(tblgen_td_deps) | $(LLVM_TBLGEN)
	$(call transform-td-to-out,asm-writer)
endif

ifneq ($(filter %GenAsmWriter1.inc,$(tblgen_gen_tables)),)
$(generated_sources)/%GenAsmWriter1.inc: TBLGEN_LOCAL_MODULE := $(LOCAL_MODULE)
$(generated_sources)/%GenAsmWriter1.inc: $(tblgen_source_dir)/%.td \
                                     $(tblgen_td_deps) | $(LLVM_TBLGEN)
	$(call transform-td-to-out,asm-writer -asmwriternum=1)
endif

ifneq ($(filter %GenAsmMatcher.inc,$(tblgen_gen_tables)),)
$(generated_sources)/%GenAsmMatcher.inc: TBLGEN_LOCAL_MODULE := $(LOCAL_MODULE)
$(generated_sources)/%GenAsmMatcher.inc: $(tblgen_source_dir)/%.td \
                                     $(tblgen_td_deps) | $(LLVM_TBLGEN)
	$(call transform-td-to-out,asm-matcher)
endif

ifneq ($(filter %GenCodeEmitter.inc,$(tblgen_gen_tables)),)
$(generated_sources)/%GenCodeEmitter.inc: TBLGEN_LOCAL_MODULE := $(LOCAL_MODULE)
$(generated_sources)/%GenCodeEmitter.inc: $(tblgen_source_dir)/%.td \
                                      $(tblgen_td_deps) | $(LLVM_TBLGEN)
	$(call transform-td-to-out,emitter)
endif

ifneq ($(filter %GenMCCodeEmitter.inc,$(tblgen_gen_tables)),)
$(generated_sources)/%GenMCCodeEmitter.inc: TBLGEN_LOCAL_MODULE := $(LOCAL_MODULE)
$(generated_sources)/%GenMCCodeEmitter.inc: $(tblgen_source_dir)/%.td \
                                        $(tblgen_td_deps) | $(LLVM_TBLGEN)
	$(call transform-td-to-out,emitter -mc-emitter)
endif

ifneq ($(filter %GenMCPseudoLowering.inc,$(tblgen_gen_tables)),)
$(generated_sources)/%GenMCPseudoLowering.inc: TBLGEN_LOCAL_MODULE := $(LOCAL_MODULE)
$(generated_sources)/%GenMCPseudoLowering.inc: $(tblgen_source_dir)/%.td \
                                           $(tblgen_td_deps) | $(LLVM_TBLGEN)
	$(call transform-td-to-out,pseudo-lowering)
endif

ifneq ($(filter %GenDAGISel.inc,$(tblgen_gen_tables)),)
$(generated_sources)/%GenDAGISel.inc: TBLGEN_LOCAL_MODULE := $(LOCAL_MODULE)
$(generated_sources)/%GenDAGISel.inc: $(tblgen_source_dir)/%.td \
                                  $(tblgen_td_deps) | $(LLVM_TBLGEN)
	$(call transform-td-to-out,dag-isel)
endif

ifneq ($(filter %GenDisassemblerTables.inc,$(tblgen_gen_tables)),)
$(generated_sources)/%GenDisassemblerTables.inc: TBLGEN_LOCAL_MODULE := $(LOCAL_MODULE)
$(generated_sources)/%GenDisassemblerTables.inc: $(tblgen_source_dir)/%.td \
                                             $(tblgen_td_deps) | $(LLVM_TBLGEN)
	$(call transform-td-to-out,disassembler)
endif

ifneq ($(filter %GenEDInfo.inc,$(tblgen_gen_tables)),)
$(generated_sources)/%GenEDInfo.inc: TBLGEN_LOCAL_MODULE := $(LOCAL_MODULE)
$(generated_sources)/%GenEDInfo.inc: $(tblgen_source_dir)/%.td \
                                 $(tblgen_td_deps) | $(LLVM_TBLGEN)
	$(call transform-td-to-out,enhanced-disassembly-info)
endif

ifneq ($(filter %GenFastISel.inc,$(tblgen_gen_tables)),)
$(generated_sources)/%GenFastISel.inc: TBLGEN_LOCAL_MODULE := $(LOCAL_MODULE)
$(generated_sources)/%GenFastISel.inc: $(tblgen_source_dir)/%.td \
                                   $(tblgen_td_deps) | $(LLVM_TBLGEN)
	$(call transform-td-to-out,fast-isel)
endif

ifneq ($(filter %GenSubtargetInfo.inc,$(tblgen_gen_tables)),)
$(generated_sources)/%GenSubtargetInfo.inc: TBLGEN_LOCAL_MODULE := $(LOCAL_MODULE)
$(generated_sources)/%GenSubtargetInfo.inc: $(tblgen_source_dir)/%.td \
                                        $(tblgen_td_deps) | $(LLVM_TBLGEN)
	$(call transform-td-to-out,subtarget)
endif

ifneq ($(filter %GenCallingConv.inc,$(tblgen_gen_tables)),)
$(generated_sources)/%GenCallingConv.inc: TBLGEN_LOCAL_MODULE := $(LOCAL_MODULE)
$(generated_sources)/%GenCallingConv.inc: $(tblgen_source_dir)/%.td \
                                      $(tblgen_td_deps) | $(LLVM_TBLGEN)
	$(call transform-td-to-out,callingconv)
endif

ifneq ($(filter %GenIntrinsics.inc,$(tblgen_gen_tables)),)
$(generated_sources)/%GenIntrinsics.inc: TBLGEN_LOCAL_MODULE := $(LOCAL_MODULE)
$(generated_sources)/%GenIntrinsics.inc: $(tblgen_source_dir)/%.td \
                                     $(tblgen_td_deps) | $(LLVM_TBLGEN)
	$(call transform-td-to-out,tgt_intrinsics)
endif

ifneq ($(findstring ARMGenDecoderTables.inc,$(tblgen_gen_tables)),)
$(generated_sources)/ARMGenDecoderTables.inc: TBLGEN_LOCAL_MODULE := $(LOCAL_MODULE)
$(generated_sources)/ARMGenDecoderTables.inc: $(tblgen_source_dir)/ARM.td \
                                          $(tblgen_td_deps) | $(LLVM_TBLGEN)
	$(call transform-td-to-out,arm-decoder)
endif

# Reset local variables
tblgen_td_deps :=

endif
