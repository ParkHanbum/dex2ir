LOCAL_PATH:= $(call my-dir)

support_SRC_FILES := \
  Allocator.cpp \
  APFloat.cpp \
  APInt.cpp \
  APSInt.cpp \
  ARMBuildAttrs.cpp \
  ARMWinEH.cpp \
  Atomic.cpp \
  BlockFrequency.cpp \
  BranchProbability.cpp \
  CommandLine.cpp \
  Compression.cpp \
  ConvertUTF.c \
  ConvertUTFWrapper.cpp \
  CrashRecoveryContext.cpp \
  DAGDeltaAlgorithm.cpp \
  DataStream.cpp \
  DataExtractor.cpp \
  Debug.cpp \
  DeltaAlgorithm.cpp \
  Dwarf.cpp \
  DynamicLibrary.cpp \
  Errno.cpp \
  ErrorHandling.cpp \
  FileUtilities.cpp \
  FoldingSet.cpp \
  FormattedStream.cpp \
  GraphWriter.cpp \
  Hashing.cpp \
  Host.cpp \
  IntervalMap.cpp \
  IntEqClasses.cpp \
  IntrusiveRefCntPtr.cpp \
  IsInf.cpp \
  IsNAN.cpp \
  LEB128.cpp \
  LineIterator.cpp \
  Locale.cpp \
  LockFileManager.cpp \
  MD5.cpp \
  ManagedStatic.cpp \
  Memory.cpp \
  MemoryBuffer.cpp \
  MemoryObject.cpp \
  Mutex.cpp \
  Path.cpp \
  PluginLoader.cpp \
  PrettyStackTrace.cpp \
  Process.cpp \
  Program.cpp \
  RandomNumberGenerator.cpp \
  Regex.cpp \
  RWMutex.cpp \
  ScaledNumber.cpp \
  SearchForAddressOfSpecialSymbol.cpp \
  Signals.cpp \
  SmallPtrSet.cpp \
  SmallVector.cpp \
  SourceMgr.cpp \
  SpecialCaseList.cpp \
  Statistic.cpp \
  StreamableMemoryObject.cpp \
  StringExtras.cpp \
  StringMap.cpp \
  StringPool.cpp \
  StringRef.cpp \
  StringRefMemoryObject.cpp \
  SystemUtils.cpp \
  TargetRegistry.cpp \
  Threading.cpp \
  ThreadLocal.cpp \
  Timer.cpp \
  TimeValue.cpp \
  ToolOutputFile.cpp \
  Triple.cpp \
  Twine.cpp \
  Unicode.cpp \
  Valgrind.cpp \
  Watchdog.cpp \
  YAMLParser.cpp \
  YAMLTraits.cpp \
  circular_raw_ostream.cpp \
  raw_os_ostream.cpp \
  raw_ostream.cpp \
  regcomp.c \
  regerror.c \
  regexec.c \
  regfree.c \
  regstrlcpy.c


# For the host
# =====================================================
include $(CLEAR_VARS)

# FIXME: This only requires RTTI because tblgen uses it.  Fix that.
REQUIRES_RTTI := 1

LOCAL_SRC_FILES := $(support_SRC_FILES)

LOCAL_MODULE:= libLLVMSupport

LOCAL_CFLAGS := -D__android__

LOCAL_MODULE_TAGS := optional

include $(LLVM_HOST_BUILD_MK)
include $(BUILD_HOST_STATIC_LIBRARY)

# For the device
# =====================================================
ifneq (true,$(DISABLE_LLVM_DEVICE_BUILDS))
include $(CLEAR_VARS)

LOCAL_SRC_FILES := $(support_SRC_FILES)

LOCAL_MODULE:= libLLVMSupport

LOCAL_CFLAGS := -D__android__

LOCAL_MODULE_TAGS := optional

include $(LLVM_DEVICE_BUILD_MK)
include $(BUILD_STATIC_LIBRARY)
endif
