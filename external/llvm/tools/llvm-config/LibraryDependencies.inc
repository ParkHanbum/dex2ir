//===- llvm-build generated file --------------------------------*- C++ -*-===//
//
// Component Library Depenedency Table
//
// Automatically generated file, do not edit!
//
//===----------------------------------------------------------------------===//

struct AvailableComponent {
  /// The name of the component.
  const char *Name;

  /// The name of the library for this component (or NULL).
  const char *Library;

  /// Whether the component is installed.
  bool IsInstalled;

  /// The list of libraries required when linking this component.
  const char *RequiredLibraries[16];
} AvailableComponents[72] = {
  { "aarch64", 0, 1, { "aarch64utils", "aarch64asmprinter", "aarch64info", "aarch64desc", "aarch64asmparser", "aarch64codegen", "aarch64disassembler" } },
  { "aarch64asmparser", "libLLVMAArch64AsmParser.a", 1, { "aarch64desc", "aarch64info", "aarch64utils", "mc", "mcparser", "support" } },
  { "aarch64asmprinter", "libLLVMAArch64AsmPrinter.a", 1, { "aarch64utils", "mc", "support" } },
  { "aarch64codegen", "libLLVMAArch64CodeGen.a", 1, { "aarch64asmprinter", "aarch64desc", "aarch64info", "aarch64utils", "analysis", "asmprinter", "codegen", "core", "mc", "scalaropts", "selectiondag", "support", "target" } },
  { "aarch64desc", "libLLVMAArch64Desc.a", 1, { "aarch64asmprinter", "aarch64info", "mc", "support" } },
  { "aarch64disassembler", "libLLVMAArch64Disassembler.a", 1, { "aarch64info", "aarch64utils", "mc", "support" } },
  { "aarch64info", "libLLVMAArch64Info.a", 1, { "support" } },
  { "aarch64utils", "libLLVMAArch64Utils.a", 1, { "support" } },
  { "all", 0, 1, { "mcjit", "interpreter", "mcdisassembler", "engine", "option", "debuginfo", "gtest_main", "all-targets", "irreader", "profiledata", "instrumentation", "lineeditor", "nativecodegen", "tablegen", "lto" } },
  { "all-targets", 0, 1, { "x86", "aarch64", "arm", "mips" } },
  { "analysis", "libLLVMAnalysis.a", 1, { "core", "support", "target" } },
  { "arm", 0, 1, { "armasmprinter", "arminfo", "armdesc", "armasmparser", "armcodegen", "armdisassembler" } },
  { "armasmparser", "libLLVMARMAsmParser.a", 1, { "armdesc", "arminfo", "mc", "mcparser", "support" } },
  { "armasmprinter", "libLLVMARMAsmPrinter.a", 1, { "mc", "support" } },
  { "armcodegen", "libLLVMARMCodeGen.a", 1, { "armasmprinter", "armdesc", "arminfo", "analysis", "asmprinter", "codegen", "core", "mc", "scalaropts", "selectiondag", "support", "target" } },
  { "armdesc", "libLLVMARMDesc.a", 1, { "armasmprinter", "arminfo", "mc", "support" } },
  { "armdisassembler", "libLLVMARMDisassembler.a", 1, { "armdesc", "arminfo", "mc", "support" } },
  { "arminfo", "libLLVMARMInfo.a", 1, { "support" } },
  { "asmparser", "libLLVMAsmParser.a", 1, { "core", "support" } },
  { "asmprinter", "libLLVMAsmPrinter.a", 1, { "analysis", "codegen", "core", "mc", "mcparser", "support", "target", "transformutils" } },
  { "bitreader", "libLLVMBitReader.a", 1, { "core", "support" } },
  { "bitwriter", "libLLVMBitWriter.a", 1, { "core", "support" } },
  { "codegen", "libLLVMCodeGen.a", 1, { "analysis", "core", "mc", "scalaropts", "support", "target", "transformutils" } },
  { "core", "libLLVMCore.a", 1, { "support" } },
  { "debuginfo", "libLLVMDebugInfo.a", 1, { "object", "support" } },
  { "engine", 0, 1, { "jit", "native" } },
  { "executionengine", "libLLVMExecutionEngine.a", 1, { "core", "mc", "support" } },
  { "gtest", "libgtest.a", 0, { "support" } },
  { "gtest_main", "libgtest_main.a", 0, { "gtest" } },
  { "instcombine", "libLLVMInstCombine.a", 1, { "analysis", "core", "support", "target", "transformutils" } },
  { "instrumentation", "libLLVMInstrumentation.a", 1, { "analysis", "core", "support", "target", "transformutils" } },
  { "interpreter", "libLLVMInterpreter.a", 1, { "codegen", "core", "executionengine", "support" } },
  { "ipa", "libLLVMipa.a", 1, { "analysis", "core", "support" } },
  { "ipo", "libLLVMipo.a", 1, { "analysis", "core", "ipa", "instcombine", "scalaropts", "support", "target", "transformutils", "vectorize" } },
  { "irreader", "libLLVMIRReader.a", 1, { "asmparser", "bitreader", "core", "support" } },
  { "jit", "libLLVMJIT.a", 1, { "codegen", "core", "executionengine", "support" } },
  { "lineeditor", "libLLVMLineEditor.a", 1, { "support" } },
  { "linker", "libLLVMLinker.a", 1, { "core", "support", "transformutils" } },
  { "lto", "libLLVMLTO.a", 1, { "bitreader", "bitwriter", "core", "ipa", "ipo", "instcombine", "linker", "mc", "mcparser", "objcarcopts", "scalaropts", "support", "target", "transformutils" } },
  { "mc", "libLLVMMC.a", 1, { "object", "support" } },
  { "mcdisassembler", "libLLVMMCDisassembler.a", 1, { "mc", "support" } },
  { "mcjit", "libLLVMMCJIT.a", 1, { "core", "executionengine", "object", "runtimedyld", "support", "target" } },
  { "mcparser", "libLLVMMCParser.a", 1, { "mc", "support" } },
  { "mips", 0, 1, { "mipsasmprinter", "mipsinfo", "mipsdesc", "mipsasmparser", "mipscodegen", "mipsdisassembler" } },
  { "mipsasmparser", "libLLVMMipsAsmParser.a", 1, { "mc", "mcparser", "mipsdesc", "mipsinfo", "support" } },
  { "mipsasmprinter", "libLLVMMipsAsmPrinter.a", 1, { "mc", "support" } },
  { "mipscodegen", "libLLVMMipsCodeGen.a", 1, { "analysis", "asmprinter", "codegen", "core", "mc", "mipsasmprinter", "mipsdesc", "mipsinfo", "scalaropts", "selectiondag", "support", "target" } },
  { "mipsdesc", "libLLVMMipsDesc.a", 1, { "mc", "mipsasmprinter", "mipsinfo", "support" } },
  { "mipsdisassembler", "libLLVMMipsDisassembler.a", 1, { "mc", "mipsinfo", "support" } },
  { "mipsinfo", "libLLVMMipsInfo.a", 1, { "support" } },
  { "native", 0, 1, { "x86" } },
  { "nativecodegen", 0, 1, { "x86codegen" } },
  { "objcarcopts", "libLLVMObjCARCOpts.a", 1, { "analysis", "core", "support", "transformutils" } },
  { "object", "libLLVMObject.a", 1, { "bitreader", "core", "support" } },
  { "option", "libLLVMOption.a", 1, { "support" } },
  { "profiledata", "libLLVMProfileData.a", 1, { "support" } },
  { "runtimedyld", "libLLVMRuntimeDyld.a", 1, { "object", "support" } },
  { "scalaropts", "libLLVMScalarOpts.a", 1, { "analysis", "core", "ipa", "instcombine", "support", "target", "transformutils" } },
  { "selectiondag", "libLLVMSelectionDAG.a", 1, { "analysis", "codegen", "core", "mc", "support", "target", "transformutils" } },
  { "support", "libLLVMSupport.a", 1, {  } },
  { "tablegen", "libLLVMTableGen.a", 1, { "support" } },
  { "target", "libLLVMTarget.a", 1, { "core", "mc", "support" } },
  { "transformutils", "libLLVMTransformUtils.a", 1, { "analysis", "core", "ipa", "support", "target" } },
  { "vectorize", "libLLVMVectorize.a", 1, { "analysis", "core", "support", "target", "transformutils" } },
  { "x86", 0, 1, { "x86utils", "x86asmprinter", "x86info", "x86desc", "x86codegen", "x86asmparser", "x86disassembler" } },
  { "x86asmparser", "libLLVMX86AsmParser.a", 1, { "mc", "mcparser", "support", "x86desc", "x86info" } },
  { "x86asmprinter", "libLLVMX86AsmPrinter.a", 1, { "mc", "support", "x86utils" } },
  { "x86codegen", "libLLVMX86CodeGen.a", 1, { "analysis", "asmprinter", "codegen", "core", "mc", "selectiondag", "support", "target", "x86asmprinter", "x86desc", "x86info", "x86utils" } },
  { "x86desc", "libLLVMX86Desc.a", 1, { "mc", "object", "support", "x86asmprinter", "x86info" } },
  { "x86disassembler", "libLLVMX86Disassembler.a", 1, { "mc", "support", "x86info" } },
  { "x86info", "libLLVMX86Info.a", 1, { "support" } },
  { "x86utils", "libLLVMX86Utils.a", 1, { "support" } },
};
