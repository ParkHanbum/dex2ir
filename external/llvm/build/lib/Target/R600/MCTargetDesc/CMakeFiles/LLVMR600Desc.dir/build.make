# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.5

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:


#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:


# Remove some rules from gmake that .SUFFIXES does not remove.
SUFFIXES =

.SUFFIXES: .hpux_make_needs_suffix_list


# Suppress display of executed commands.
$(VERBOSE).SILENT:


# A target that is always out of date.
cmake_force:

.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

# The shell in which to execute make rules.
SHELL = /bin/sh

# The CMake executable.
CMAKE_COMMAND = /usr/bin/cmake

# The command to remove a file.
RM = /usr/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/m/dex2ir/external/llvm

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/m/dex2ir/external/llvm/build

# Include any dependencies generated for this target.
include lib/Target/R600/MCTargetDesc/CMakeFiles/LLVMR600Desc.dir/depend.make

# Include the progress variables for this target.
include lib/Target/R600/MCTargetDesc/CMakeFiles/LLVMR600Desc.dir/progress.make

# Include the compile flags for this target's objects.
include lib/Target/R600/MCTargetDesc/CMakeFiles/LLVMR600Desc.dir/flags.make

lib/Target/R600/MCTargetDesc/CMakeFiles/LLVMR600Desc.dir/AMDGPUAsmBackend.cpp.o: lib/Target/R600/MCTargetDesc/CMakeFiles/LLVMR600Desc.dir/flags.make
lib/Target/R600/MCTargetDesc/CMakeFiles/LLVMR600Desc.dir/AMDGPUAsmBackend.cpp.o: ../lib/Target/R600/MCTargetDesc/AMDGPUAsmBackend.cpp
lib/Target/R600/MCTargetDesc/CMakeFiles/LLVMR600Desc.dir/AMDGPUAsmBackend.cpp.o: lib/Target/R600/AMDGPUGenRegisterInfo.inc
lib/Target/R600/MCTargetDesc/CMakeFiles/LLVMR600Desc.dir/AMDGPUAsmBackend.cpp.o: lib/Target/R600/AMDGPUGenInstrInfo.inc
lib/Target/R600/MCTargetDesc/CMakeFiles/LLVMR600Desc.dir/AMDGPUAsmBackend.cpp.o: lib/Target/R600/AMDGPUGenDAGISel.inc
lib/Target/R600/MCTargetDesc/CMakeFiles/LLVMR600Desc.dir/AMDGPUAsmBackend.cpp.o: lib/Target/R600/AMDGPUGenCallingConv.inc
lib/Target/R600/MCTargetDesc/CMakeFiles/LLVMR600Desc.dir/AMDGPUAsmBackend.cpp.o: lib/Target/R600/AMDGPUGenSubtargetInfo.inc
lib/Target/R600/MCTargetDesc/CMakeFiles/LLVMR600Desc.dir/AMDGPUAsmBackend.cpp.o: lib/Target/R600/AMDGPUGenIntrinsics.inc
lib/Target/R600/MCTargetDesc/CMakeFiles/LLVMR600Desc.dir/AMDGPUAsmBackend.cpp.o: lib/Target/R600/AMDGPUGenMCCodeEmitter.inc
lib/Target/R600/MCTargetDesc/CMakeFiles/LLVMR600Desc.dir/AMDGPUAsmBackend.cpp.o: lib/Target/R600/AMDGPUGenDFAPacketizer.inc
lib/Target/R600/MCTargetDesc/CMakeFiles/LLVMR600Desc.dir/AMDGPUAsmBackend.cpp.o: lib/Target/R600/AMDGPUGenAsmWriter.inc
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/m/dex2ir/external/llvm/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object lib/Target/R600/MCTargetDesc/CMakeFiles/LLVMR600Desc.dir/AMDGPUAsmBackend.cpp.o"
	cd /home/m/dex2ir/external/llvm/build/lib/Target/R600/MCTargetDesc && /usr/bin/c++   $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/LLVMR600Desc.dir/AMDGPUAsmBackend.cpp.o -c /home/m/dex2ir/external/llvm/lib/Target/R600/MCTargetDesc/AMDGPUAsmBackend.cpp

lib/Target/R600/MCTargetDesc/CMakeFiles/LLVMR600Desc.dir/AMDGPUAsmBackend.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/LLVMR600Desc.dir/AMDGPUAsmBackend.cpp.i"
	cd /home/m/dex2ir/external/llvm/build/lib/Target/R600/MCTargetDesc && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/m/dex2ir/external/llvm/lib/Target/R600/MCTargetDesc/AMDGPUAsmBackend.cpp > CMakeFiles/LLVMR600Desc.dir/AMDGPUAsmBackend.cpp.i

lib/Target/R600/MCTargetDesc/CMakeFiles/LLVMR600Desc.dir/AMDGPUAsmBackend.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/LLVMR600Desc.dir/AMDGPUAsmBackend.cpp.s"
	cd /home/m/dex2ir/external/llvm/build/lib/Target/R600/MCTargetDesc && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/m/dex2ir/external/llvm/lib/Target/R600/MCTargetDesc/AMDGPUAsmBackend.cpp -o CMakeFiles/LLVMR600Desc.dir/AMDGPUAsmBackend.cpp.s

lib/Target/R600/MCTargetDesc/CMakeFiles/LLVMR600Desc.dir/AMDGPUAsmBackend.cpp.o.requires:

.PHONY : lib/Target/R600/MCTargetDesc/CMakeFiles/LLVMR600Desc.dir/AMDGPUAsmBackend.cpp.o.requires

lib/Target/R600/MCTargetDesc/CMakeFiles/LLVMR600Desc.dir/AMDGPUAsmBackend.cpp.o.provides: lib/Target/R600/MCTargetDesc/CMakeFiles/LLVMR600Desc.dir/AMDGPUAsmBackend.cpp.o.requires
	$(MAKE) -f lib/Target/R600/MCTargetDesc/CMakeFiles/LLVMR600Desc.dir/build.make lib/Target/R600/MCTargetDesc/CMakeFiles/LLVMR600Desc.dir/AMDGPUAsmBackend.cpp.o.provides.build
.PHONY : lib/Target/R600/MCTargetDesc/CMakeFiles/LLVMR600Desc.dir/AMDGPUAsmBackend.cpp.o.provides

lib/Target/R600/MCTargetDesc/CMakeFiles/LLVMR600Desc.dir/AMDGPUAsmBackend.cpp.o.provides.build: lib/Target/R600/MCTargetDesc/CMakeFiles/LLVMR600Desc.dir/AMDGPUAsmBackend.cpp.o


lib/Target/R600/MCTargetDesc/CMakeFiles/LLVMR600Desc.dir/AMDGPUELFObjectWriter.cpp.o: lib/Target/R600/MCTargetDesc/CMakeFiles/LLVMR600Desc.dir/flags.make
lib/Target/R600/MCTargetDesc/CMakeFiles/LLVMR600Desc.dir/AMDGPUELFObjectWriter.cpp.o: ../lib/Target/R600/MCTargetDesc/AMDGPUELFObjectWriter.cpp
lib/Target/R600/MCTargetDesc/CMakeFiles/LLVMR600Desc.dir/AMDGPUELFObjectWriter.cpp.o: lib/Target/R600/AMDGPUGenRegisterInfo.inc
lib/Target/R600/MCTargetDesc/CMakeFiles/LLVMR600Desc.dir/AMDGPUELFObjectWriter.cpp.o: lib/Target/R600/AMDGPUGenInstrInfo.inc
lib/Target/R600/MCTargetDesc/CMakeFiles/LLVMR600Desc.dir/AMDGPUELFObjectWriter.cpp.o: lib/Target/R600/AMDGPUGenDAGISel.inc
lib/Target/R600/MCTargetDesc/CMakeFiles/LLVMR600Desc.dir/AMDGPUELFObjectWriter.cpp.o: lib/Target/R600/AMDGPUGenCallingConv.inc
lib/Target/R600/MCTargetDesc/CMakeFiles/LLVMR600Desc.dir/AMDGPUELFObjectWriter.cpp.o: lib/Target/R600/AMDGPUGenSubtargetInfo.inc
lib/Target/R600/MCTargetDesc/CMakeFiles/LLVMR600Desc.dir/AMDGPUELFObjectWriter.cpp.o: lib/Target/R600/AMDGPUGenIntrinsics.inc
lib/Target/R600/MCTargetDesc/CMakeFiles/LLVMR600Desc.dir/AMDGPUELFObjectWriter.cpp.o: lib/Target/R600/AMDGPUGenMCCodeEmitter.inc
lib/Target/R600/MCTargetDesc/CMakeFiles/LLVMR600Desc.dir/AMDGPUELFObjectWriter.cpp.o: lib/Target/R600/AMDGPUGenDFAPacketizer.inc
lib/Target/R600/MCTargetDesc/CMakeFiles/LLVMR600Desc.dir/AMDGPUELFObjectWriter.cpp.o: lib/Target/R600/AMDGPUGenAsmWriter.inc
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/m/dex2ir/external/llvm/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object lib/Target/R600/MCTargetDesc/CMakeFiles/LLVMR600Desc.dir/AMDGPUELFObjectWriter.cpp.o"
	cd /home/m/dex2ir/external/llvm/build/lib/Target/R600/MCTargetDesc && /usr/bin/c++   $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/LLVMR600Desc.dir/AMDGPUELFObjectWriter.cpp.o -c /home/m/dex2ir/external/llvm/lib/Target/R600/MCTargetDesc/AMDGPUELFObjectWriter.cpp

lib/Target/R600/MCTargetDesc/CMakeFiles/LLVMR600Desc.dir/AMDGPUELFObjectWriter.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/LLVMR600Desc.dir/AMDGPUELFObjectWriter.cpp.i"
	cd /home/m/dex2ir/external/llvm/build/lib/Target/R600/MCTargetDesc && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/m/dex2ir/external/llvm/lib/Target/R600/MCTargetDesc/AMDGPUELFObjectWriter.cpp > CMakeFiles/LLVMR600Desc.dir/AMDGPUELFObjectWriter.cpp.i

lib/Target/R600/MCTargetDesc/CMakeFiles/LLVMR600Desc.dir/AMDGPUELFObjectWriter.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/LLVMR600Desc.dir/AMDGPUELFObjectWriter.cpp.s"
	cd /home/m/dex2ir/external/llvm/build/lib/Target/R600/MCTargetDesc && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/m/dex2ir/external/llvm/lib/Target/R600/MCTargetDesc/AMDGPUELFObjectWriter.cpp -o CMakeFiles/LLVMR600Desc.dir/AMDGPUELFObjectWriter.cpp.s

lib/Target/R600/MCTargetDesc/CMakeFiles/LLVMR600Desc.dir/AMDGPUELFObjectWriter.cpp.o.requires:

.PHONY : lib/Target/R600/MCTargetDesc/CMakeFiles/LLVMR600Desc.dir/AMDGPUELFObjectWriter.cpp.o.requires

lib/Target/R600/MCTargetDesc/CMakeFiles/LLVMR600Desc.dir/AMDGPUELFObjectWriter.cpp.o.provides: lib/Target/R600/MCTargetDesc/CMakeFiles/LLVMR600Desc.dir/AMDGPUELFObjectWriter.cpp.o.requires
	$(MAKE) -f lib/Target/R600/MCTargetDesc/CMakeFiles/LLVMR600Desc.dir/build.make lib/Target/R600/MCTargetDesc/CMakeFiles/LLVMR600Desc.dir/AMDGPUELFObjectWriter.cpp.o.provides.build
.PHONY : lib/Target/R600/MCTargetDesc/CMakeFiles/LLVMR600Desc.dir/AMDGPUELFObjectWriter.cpp.o.provides

lib/Target/R600/MCTargetDesc/CMakeFiles/LLVMR600Desc.dir/AMDGPUELFObjectWriter.cpp.o.provides.build: lib/Target/R600/MCTargetDesc/CMakeFiles/LLVMR600Desc.dir/AMDGPUELFObjectWriter.cpp.o


lib/Target/R600/MCTargetDesc/CMakeFiles/LLVMR600Desc.dir/AMDGPUMCTargetDesc.cpp.o: lib/Target/R600/MCTargetDesc/CMakeFiles/LLVMR600Desc.dir/flags.make
lib/Target/R600/MCTargetDesc/CMakeFiles/LLVMR600Desc.dir/AMDGPUMCTargetDesc.cpp.o: ../lib/Target/R600/MCTargetDesc/AMDGPUMCTargetDesc.cpp
lib/Target/R600/MCTargetDesc/CMakeFiles/LLVMR600Desc.dir/AMDGPUMCTargetDesc.cpp.o: lib/Target/R600/AMDGPUGenRegisterInfo.inc
lib/Target/R600/MCTargetDesc/CMakeFiles/LLVMR600Desc.dir/AMDGPUMCTargetDesc.cpp.o: lib/Target/R600/AMDGPUGenInstrInfo.inc
lib/Target/R600/MCTargetDesc/CMakeFiles/LLVMR600Desc.dir/AMDGPUMCTargetDesc.cpp.o: lib/Target/R600/AMDGPUGenDAGISel.inc
lib/Target/R600/MCTargetDesc/CMakeFiles/LLVMR600Desc.dir/AMDGPUMCTargetDesc.cpp.o: lib/Target/R600/AMDGPUGenCallingConv.inc
lib/Target/R600/MCTargetDesc/CMakeFiles/LLVMR600Desc.dir/AMDGPUMCTargetDesc.cpp.o: lib/Target/R600/AMDGPUGenSubtargetInfo.inc
lib/Target/R600/MCTargetDesc/CMakeFiles/LLVMR600Desc.dir/AMDGPUMCTargetDesc.cpp.o: lib/Target/R600/AMDGPUGenIntrinsics.inc
lib/Target/R600/MCTargetDesc/CMakeFiles/LLVMR600Desc.dir/AMDGPUMCTargetDesc.cpp.o: lib/Target/R600/AMDGPUGenMCCodeEmitter.inc
lib/Target/R600/MCTargetDesc/CMakeFiles/LLVMR600Desc.dir/AMDGPUMCTargetDesc.cpp.o: lib/Target/R600/AMDGPUGenDFAPacketizer.inc
lib/Target/R600/MCTargetDesc/CMakeFiles/LLVMR600Desc.dir/AMDGPUMCTargetDesc.cpp.o: lib/Target/R600/AMDGPUGenAsmWriter.inc
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/m/dex2ir/external/llvm/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object lib/Target/R600/MCTargetDesc/CMakeFiles/LLVMR600Desc.dir/AMDGPUMCTargetDesc.cpp.o"
	cd /home/m/dex2ir/external/llvm/build/lib/Target/R600/MCTargetDesc && /usr/bin/c++   $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/LLVMR600Desc.dir/AMDGPUMCTargetDesc.cpp.o -c /home/m/dex2ir/external/llvm/lib/Target/R600/MCTargetDesc/AMDGPUMCTargetDesc.cpp

lib/Target/R600/MCTargetDesc/CMakeFiles/LLVMR600Desc.dir/AMDGPUMCTargetDesc.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/LLVMR600Desc.dir/AMDGPUMCTargetDesc.cpp.i"
	cd /home/m/dex2ir/external/llvm/build/lib/Target/R600/MCTargetDesc && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/m/dex2ir/external/llvm/lib/Target/R600/MCTargetDesc/AMDGPUMCTargetDesc.cpp > CMakeFiles/LLVMR600Desc.dir/AMDGPUMCTargetDesc.cpp.i

lib/Target/R600/MCTargetDesc/CMakeFiles/LLVMR600Desc.dir/AMDGPUMCTargetDesc.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/LLVMR600Desc.dir/AMDGPUMCTargetDesc.cpp.s"
	cd /home/m/dex2ir/external/llvm/build/lib/Target/R600/MCTargetDesc && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/m/dex2ir/external/llvm/lib/Target/R600/MCTargetDesc/AMDGPUMCTargetDesc.cpp -o CMakeFiles/LLVMR600Desc.dir/AMDGPUMCTargetDesc.cpp.s

lib/Target/R600/MCTargetDesc/CMakeFiles/LLVMR600Desc.dir/AMDGPUMCTargetDesc.cpp.o.requires:

.PHONY : lib/Target/R600/MCTargetDesc/CMakeFiles/LLVMR600Desc.dir/AMDGPUMCTargetDesc.cpp.o.requires

lib/Target/R600/MCTargetDesc/CMakeFiles/LLVMR600Desc.dir/AMDGPUMCTargetDesc.cpp.o.provides: lib/Target/R600/MCTargetDesc/CMakeFiles/LLVMR600Desc.dir/AMDGPUMCTargetDesc.cpp.o.requires
	$(MAKE) -f lib/Target/R600/MCTargetDesc/CMakeFiles/LLVMR600Desc.dir/build.make lib/Target/R600/MCTargetDesc/CMakeFiles/LLVMR600Desc.dir/AMDGPUMCTargetDesc.cpp.o.provides.build
.PHONY : lib/Target/R600/MCTargetDesc/CMakeFiles/LLVMR600Desc.dir/AMDGPUMCTargetDesc.cpp.o.provides

lib/Target/R600/MCTargetDesc/CMakeFiles/LLVMR600Desc.dir/AMDGPUMCTargetDesc.cpp.o.provides.build: lib/Target/R600/MCTargetDesc/CMakeFiles/LLVMR600Desc.dir/AMDGPUMCTargetDesc.cpp.o


lib/Target/R600/MCTargetDesc/CMakeFiles/LLVMR600Desc.dir/AMDGPUMCAsmInfo.cpp.o: lib/Target/R600/MCTargetDesc/CMakeFiles/LLVMR600Desc.dir/flags.make
lib/Target/R600/MCTargetDesc/CMakeFiles/LLVMR600Desc.dir/AMDGPUMCAsmInfo.cpp.o: ../lib/Target/R600/MCTargetDesc/AMDGPUMCAsmInfo.cpp
lib/Target/R600/MCTargetDesc/CMakeFiles/LLVMR600Desc.dir/AMDGPUMCAsmInfo.cpp.o: lib/Target/R600/AMDGPUGenRegisterInfo.inc
lib/Target/R600/MCTargetDesc/CMakeFiles/LLVMR600Desc.dir/AMDGPUMCAsmInfo.cpp.o: lib/Target/R600/AMDGPUGenInstrInfo.inc
lib/Target/R600/MCTargetDesc/CMakeFiles/LLVMR600Desc.dir/AMDGPUMCAsmInfo.cpp.o: lib/Target/R600/AMDGPUGenDAGISel.inc
lib/Target/R600/MCTargetDesc/CMakeFiles/LLVMR600Desc.dir/AMDGPUMCAsmInfo.cpp.o: lib/Target/R600/AMDGPUGenCallingConv.inc
lib/Target/R600/MCTargetDesc/CMakeFiles/LLVMR600Desc.dir/AMDGPUMCAsmInfo.cpp.o: lib/Target/R600/AMDGPUGenSubtargetInfo.inc
lib/Target/R600/MCTargetDesc/CMakeFiles/LLVMR600Desc.dir/AMDGPUMCAsmInfo.cpp.o: lib/Target/R600/AMDGPUGenIntrinsics.inc
lib/Target/R600/MCTargetDesc/CMakeFiles/LLVMR600Desc.dir/AMDGPUMCAsmInfo.cpp.o: lib/Target/R600/AMDGPUGenMCCodeEmitter.inc
lib/Target/R600/MCTargetDesc/CMakeFiles/LLVMR600Desc.dir/AMDGPUMCAsmInfo.cpp.o: lib/Target/R600/AMDGPUGenDFAPacketizer.inc
lib/Target/R600/MCTargetDesc/CMakeFiles/LLVMR600Desc.dir/AMDGPUMCAsmInfo.cpp.o: lib/Target/R600/AMDGPUGenAsmWriter.inc
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/m/dex2ir/external/llvm/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building CXX object lib/Target/R600/MCTargetDesc/CMakeFiles/LLVMR600Desc.dir/AMDGPUMCAsmInfo.cpp.o"
	cd /home/m/dex2ir/external/llvm/build/lib/Target/R600/MCTargetDesc && /usr/bin/c++   $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/LLVMR600Desc.dir/AMDGPUMCAsmInfo.cpp.o -c /home/m/dex2ir/external/llvm/lib/Target/R600/MCTargetDesc/AMDGPUMCAsmInfo.cpp

lib/Target/R600/MCTargetDesc/CMakeFiles/LLVMR600Desc.dir/AMDGPUMCAsmInfo.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/LLVMR600Desc.dir/AMDGPUMCAsmInfo.cpp.i"
	cd /home/m/dex2ir/external/llvm/build/lib/Target/R600/MCTargetDesc && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/m/dex2ir/external/llvm/lib/Target/R600/MCTargetDesc/AMDGPUMCAsmInfo.cpp > CMakeFiles/LLVMR600Desc.dir/AMDGPUMCAsmInfo.cpp.i

lib/Target/R600/MCTargetDesc/CMakeFiles/LLVMR600Desc.dir/AMDGPUMCAsmInfo.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/LLVMR600Desc.dir/AMDGPUMCAsmInfo.cpp.s"
	cd /home/m/dex2ir/external/llvm/build/lib/Target/R600/MCTargetDesc && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/m/dex2ir/external/llvm/lib/Target/R600/MCTargetDesc/AMDGPUMCAsmInfo.cpp -o CMakeFiles/LLVMR600Desc.dir/AMDGPUMCAsmInfo.cpp.s

lib/Target/R600/MCTargetDesc/CMakeFiles/LLVMR600Desc.dir/AMDGPUMCAsmInfo.cpp.o.requires:

.PHONY : lib/Target/R600/MCTargetDesc/CMakeFiles/LLVMR600Desc.dir/AMDGPUMCAsmInfo.cpp.o.requires

lib/Target/R600/MCTargetDesc/CMakeFiles/LLVMR600Desc.dir/AMDGPUMCAsmInfo.cpp.o.provides: lib/Target/R600/MCTargetDesc/CMakeFiles/LLVMR600Desc.dir/AMDGPUMCAsmInfo.cpp.o.requires
	$(MAKE) -f lib/Target/R600/MCTargetDesc/CMakeFiles/LLVMR600Desc.dir/build.make lib/Target/R600/MCTargetDesc/CMakeFiles/LLVMR600Desc.dir/AMDGPUMCAsmInfo.cpp.o.provides.build
.PHONY : lib/Target/R600/MCTargetDesc/CMakeFiles/LLVMR600Desc.dir/AMDGPUMCAsmInfo.cpp.o.provides

lib/Target/R600/MCTargetDesc/CMakeFiles/LLVMR600Desc.dir/AMDGPUMCAsmInfo.cpp.o.provides.build: lib/Target/R600/MCTargetDesc/CMakeFiles/LLVMR600Desc.dir/AMDGPUMCAsmInfo.cpp.o


lib/Target/R600/MCTargetDesc/CMakeFiles/LLVMR600Desc.dir/R600MCCodeEmitter.cpp.o: lib/Target/R600/MCTargetDesc/CMakeFiles/LLVMR600Desc.dir/flags.make
lib/Target/R600/MCTargetDesc/CMakeFiles/LLVMR600Desc.dir/R600MCCodeEmitter.cpp.o: ../lib/Target/R600/MCTargetDesc/R600MCCodeEmitter.cpp
lib/Target/R600/MCTargetDesc/CMakeFiles/LLVMR600Desc.dir/R600MCCodeEmitter.cpp.o: lib/Target/R600/AMDGPUGenRegisterInfo.inc
lib/Target/R600/MCTargetDesc/CMakeFiles/LLVMR600Desc.dir/R600MCCodeEmitter.cpp.o: lib/Target/R600/AMDGPUGenInstrInfo.inc
lib/Target/R600/MCTargetDesc/CMakeFiles/LLVMR600Desc.dir/R600MCCodeEmitter.cpp.o: lib/Target/R600/AMDGPUGenDAGISel.inc
lib/Target/R600/MCTargetDesc/CMakeFiles/LLVMR600Desc.dir/R600MCCodeEmitter.cpp.o: lib/Target/R600/AMDGPUGenCallingConv.inc
lib/Target/R600/MCTargetDesc/CMakeFiles/LLVMR600Desc.dir/R600MCCodeEmitter.cpp.o: lib/Target/R600/AMDGPUGenSubtargetInfo.inc
lib/Target/R600/MCTargetDesc/CMakeFiles/LLVMR600Desc.dir/R600MCCodeEmitter.cpp.o: lib/Target/R600/AMDGPUGenIntrinsics.inc
lib/Target/R600/MCTargetDesc/CMakeFiles/LLVMR600Desc.dir/R600MCCodeEmitter.cpp.o: lib/Target/R600/AMDGPUGenMCCodeEmitter.inc
lib/Target/R600/MCTargetDesc/CMakeFiles/LLVMR600Desc.dir/R600MCCodeEmitter.cpp.o: lib/Target/R600/AMDGPUGenDFAPacketizer.inc
lib/Target/R600/MCTargetDesc/CMakeFiles/LLVMR600Desc.dir/R600MCCodeEmitter.cpp.o: lib/Target/R600/AMDGPUGenAsmWriter.inc
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/m/dex2ir/external/llvm/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Building CXX object lib/Target/R600/MCTargetDesc/CMakeFiles/LLVMR600Desc.dir/R600MCCodeEmitter.cpp.o"
	cd /home/m/dex2ir/external/llvm/build/lib/Target/R600/MCTargetDesc && /usr/bin/c++   $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/LLVMR600Desc.dir/R600MCCodeEmitter.cpp.o -c /home/m/dex2ir/external/llvm/lib/Target/R600/MCTargetDesc/R600MCCodeEmitter.cpp

lib/Target/R600/MCTargetDesc/CMakeFiles/LLVMR600Desc.dir/R600MCCodeEmitter.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/LLVMR600Desc.dir/R600MCCodeEmitter.cpp.i"
	cd /home/m/dex2ir/external/llvm/build/lib/Target/R600/MCTargetDesc && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/m/dex2ir/external/llvm/lib/Target/R600/MCTargetDesc/R600MCCodeEmitter.cpp > CMakeFiles/LLVMR600Desc.dir/R600MCCodeEmitter.cpp.i

lib/Target/R600/MCTargetDesc/CMakeFiles/LLVMR600Desc.dir/R600MCCodeEmitter.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/LLVMR600Desc.dir/R600MCCodeEmitter.cpp.s"
	cd /home/m/dex2ir/external/llvm/build/lib/Target/R600/MCTargetDesc && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/m/dex2ir/external/llvm/lib/Target/R600/MCTargetDesc/R600MCCodeEmitter.cpp -o CMakeFiles/LLVMR600Desc.dir/R600MCCodeEmitter.cpp.s

lib/Target/R600/MCTargetDesc/CMakeFiles/LLVMR600Desc.dir/R600MCCodeEmitter.cpp.o.requires:

.PHONY : lib/Target/R600/MCTargetDesc/CMakeFiles/LLVMR600Desc.dir/R600MCCodeEmitter.cpp.o.requires

lib/Target/R600/MCTargetDesc/CMakeFiles/LLVMR600Desc.dir/R600MCCodeEmitter.cpp.o.provides: lib/Target/R600/MCTargetDesc/CMakeFiles/LLVMR600Desc.dir/R600MCCodeEmitter.cpp.o.requires
	$(MAKE) -f lib/Target/R600/MCTargetDesc/CMakeFiles/LLVMR600Desc.dir/build.make lib/Target/R600/MCTargetDesc/CMakeFiles/LLVMR600Desc.dir/R600MCCodeEmitter.cpp.o.provides.build
.PHONY : lib/Target/R600/MCTargetDesc/CMakeFiles/LLVMR600Desc.dir/R600MCCodeEmitter.cpp.o.provides

lib/Target/R600/MCTargetDesc/CMakeFiles/LLVMR600Desc.dir/R600MCCodeEmitter.cpp.o.provides.build: lib/Target/R600/MCTargetDesc/CMakeFiles/LLVMR600Desc.dir/R600MCCodeEmitter.cpp.o


lib/Target/R600/MCTargetDesc/CMakeFiles/LLVMR600Desc.dir/SIMCCodeEmitter.cpp.o: lib/Target/R600/MCTargetDesc/CMakeFiles/LLVMR600Desc.dir/flags.make
lib/Target/R600/MCTargetDesc/CMakeFiles/LLVMR600Desc.dir/SIMCCodeEmitter.cpp.o: ../lib/Target/R600/MCTargetDesc/SIMCCodeEmitter.cpp
lib/Target/R600/MCTargetDesc/CMakeFiles/LLVMR600Desc.dir/SIMCCodeEmitter.cpp.o: lib/Target/R600/AMDGPUGenRegisterInfo.inc
lib/Target/R600/MCTargetDesc/CMakeFiles/LLVMR600Desc.dir/SIMCCodeEmitter.cpp.o: lib/Target/R600/AMDGPUGenInstrInfo.inc
lib/Target/R600/MCTargetDesc/CMakeFiles/LLVMR600Desc.dir/SIMCCodeEmitter.cpp.o: lib/Target/R600/AMDGPUGenDAGISel.inc
lib/Target/R600/MCTargetDesc/CMakeFiles/LLVMR600Desc.dir/SIMCCodeEmitter.cpp.o: lib/Target/R600/AMDGPUGenCallingConv.inc
lib/Target/R600/MCTargetDesc/CMakeFiles/LLVMR600Desc.dir/SIMCCodeEmitter.cpp.o: lib/Target/R600/AMDGPUGenSubtargetInfo.inc
lib/Target/R600/MCTargetDesc/CMakeFiles/LLVMR600Desc.dir/SIMCCodeEmitter.cpp.o: lib/Target/R600/AMDGPUGenIntrinsics.inc
lib/Target/R600/MCTargetDesc/CMakeFiles/LLVMR600Desc.dir/SIMCCodeEmitter.cpp.o: lib/Target/R600/AMDGPUGenMCCodeEmitter.inc
lib/Target/R600/MCTargetDesc/CMakeFiles/LLVMR600Desc.dir/SIMCCodeEmitter.cpp.o: lib/Target/R600/AMDGPUGenDFAPacketizer.inc
lib/Target/R600/MCTargetDesc/CMakeFiles/LLVMR600Desc.dir/SIMCCodeEmitter.cpp.o: lib/Target/R600/AMDGPUGenAsmWriter.inc
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/m/dex2ir/external/llvm/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_6) "Building CXX object lib/Target/R600/MCTargetDesc/CMakeFiles/LLVMR600Desc.dir/SIMCCodeEmitter.cpp.o"
	cd /home/m/dex2ir/external/llvm/build/lib/Target/R600/MCTargetDesc && /usr/bin/c++   $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/LLVMR600Desc.dir/SIMCCodeEmitter.cpp.o -c /home/m/dex2ir/external/llvm/lib/Target/R600/MCTargetDesc/SIMCCodeEmitter.cpp

lib/Target/R600/MCTargetDesc/CMakeFiles/LLVMR600Desc.dir/SIMCCodeEmitter.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/LLVMR600Desc.dir/SIMCCodeEmitter.cpp.i"
	cd /home/m/dex2ir/external/llvm/build/lib/Target/R600/MCTargetDesc && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/m/dex2ir/external/llvm/lib/Target/R600/MCTargetDesc/SIMCCodeEmitter.cpp > CMakeFiles/LLVMR600Desc.dir/SIMCCodeEmitter.cpp.i

lib/Target/R600/MCTargetDesc/CMakeFiles/LLVMR600Desc.dir/SIMCCodeEmitter.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/LLVMR600Desc.dir/SIMCCodeEmitter.cpp.s"
	cd /home/m/dex2ir/external/llvm/build/lib/Target/R600/MCTargetDesc && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/m/dex2ir/external/llvm/lib/Target/R600/MCTargetDesc/SIMCCodeEmitter.cpp -o CMakeFiles/LLVMR600Desc.dir/SIMCCodeEmitter.cpp.s

lib/Target/R600/MCTargetDesc/CMakeFiles/LLVMR600Desc.dir/SIMCCodeEmitter.cpp.o.requires:

.PHONY : lib/Target/R600/MCTargetDesc/CMakeFiles/LLVMR600Desc.dir/SIMCCodeEmitter.cpp.o.requires

lib/Target/R600/MCTargetDesc/CMakeFiles/LLVMR600Desc.dir/SIMCCodeEmitter.cpp.o.provides: lib/Target/R600/MCTargetDesc/CMakeFiles/LLVMR600Desc.dir/SIMCCodeEmitter.cpp.o.requires
	$(MAKE) -f lib/Target/R600/MCTargetDesc/CMakeFiles/LLVMR600Desc.dir/build.make lib/Target/R600/MCTargetDesc/CMakeFiles/LLVMR600Desc.dir/SIMCCodeEmitter.cpp.o.provides.build
.PHONY : lib/Target/R600/MCTargetDesc/CMakeFiles/LLVMR600Desc.dir/SIMCCodeEmitter.cpp.o.provides

lib/Target/R600/MCTargetDesc/CMakeFiles/LLVMR600Desc.dir/SIMCCodeEmitter.cpp.o.provides.build: lib/Target/R600/MCTargetDesc/CMakeFiles/LLVMR600Desc.dir/SIMCCodeEmitter.cpp.o


# Object files for target LLVMR600Desc
LLVMR600Desc_OBJECTS = \
"CMakeFiles/LLVMR600Desc.dir/AMDGPUAsmBackend.cpp.o" \
"CMakeFiles/LLVMR600Desc.dir/AMDGPUELFObjectWriter.cpp.o" \
"CMakeFiles/LLVMR600Desc.dir/AMDGPUMCTargetDesc.cpp.o" \
"CMakeFiles/LLVMR600Desc.dir/AMDGPUMCAsmInfo.cpp.o" \
"CMakeFiles/LLVMR600Desc.dir/R600MCCodeEmitter.cpp.o" \
"CMakeFiles/LLVMR600Desc.dir/SIMCCodeEmitter.cpp.o"

# External object files for target LLVMR600Desc
LLVMR600Desc_EXTERNAL_OBJECTS =

lib/libLLVMR600Desc.a: lib/Target/R600/MCTargetDesc/CMakeFiles/LLVMR600Desc.dir/AMDGPUAsmBackend.cpp.o
lib/libLLVMR600Desc.a: lib/Target/R600/MCTargetDesc/CMakeFiles/LLVMR600Desc.dir/AMDGPUELFObjectWriter.cpp.o
lib/libLLVMR600Desc.a: lib/Target/R600/MCTargetDesc/CMakeFiles/LLVMR600Desc.dir/AMDGPUMCTargetDesc.cpp.o
lib/libLLVMR600Desc.a: lib/Target/R600/MCTargetDesc/CMakeFiles/LLVMR600Desc.dir/AMDGPUMCAsmInfo.cpp.o
lib/libLLVMR600Desc.a: lib/Target/R600/MCTargetDesc/CMakeFiles/LLVMR600Desc.dir/R600MCCodeEmitter.cpp.o
lib/libLLVMR600Desc.a: lib/Target/R600/MCTargetDesc/CMakeFiles/LLVMR600Desc.dir/SIMCCodeEmitter.cpp.o
lib/libLLVMR600Desc.a: lib/Target/R600/MCTargetDesc/CMakeFiles/LLVMR600Desc.dir/build.make
lib/libLLVMR600Desc.a: lib/Target/R600/MCTargetDesc/CMakeFiles/LLVMR600Desc.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/m/dex2ir/external/llvm/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_7) "Linking CXX static library ../../../libLLVMR600Desc.a"
	cd /home/m/dex2ir/external/llvm/build/lib/Target/R600/MCTargetDesc && $(CMAKE_COMMAND) -P CMakeFiles/LLVMR600Desc.dir/cmake_clean_target.cmake
	cd /home/m/dex2ir/external/llvm/build/lib/Target/R600/MCTargetDesc && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/LLVMR600Desc.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
lib/Target/R600/MCTargetDesc/CMakeFiles/LLVMR600Desc.dir/build: lib/libLLVMR600Desc.a

.PHONY : lib/Target/R600/MCTargetDesc/CMakeFiles/LLVMR600Desc.dir/build

lib/Target/R600/MCTargetDesc/CMakeFiles/LLVMR600Desc.dir/requires: lib/Target/R600/MCTargetDesc/CMakeFiles/LLVMR600Desc.dir/AMDGPUAsmBackend.cpp.o.requires
lib/Target/R600/MCTargetDesc/CMakeFiles/LLVMR600Desc.dir/requires: lib/Target/R600/MCTargetDesc/CMakeFiles/LLVMR600Desc.dir/AMDGPUELFObjectWriter.cpp.o.requires
lib/Target/R600/MCTargetDesc/CMakeFiles/LLVMR600Desc.dir/requires: lib/Target/R600/MCTargetDesc/CMakeFiles/LLVMR600Desc.dir/AMDGPUMCTargetDesc.cpp.o.requires
lib/Target/R600/MCTargetDesc/CMakeFiles/LLVMR600Desc.dir/requires: lib/Target/R600/MCTargetDesc/CMakeFiles/LLVMR600Desc.dir/AMDGPUMCAsmInfo.cpp.o.requires
lib/Target/R600/MCTargetDesc/CMakeFiles/LLVMR600Desc.dir/requires: lib/Target/R600/MCTargetDesc/CMakeFiles/LLVMR600Desc.dir/R600MCCodeEmitter.cpp.o.requires
lib/Target/R600/MCTargetDesc/CMakeFiles/LLVMR600Desc.dir/requires: lib/Target/R600/MCTargetDesc/CMakeFiles/LLVMR600Desc.dir/SIMCCodeEmitter.cpp.o.requires

.PHONY : lib/Target/R600/MCTargetDesc/CMakeFiles/LLVMR600Desc.dir/requires

lib/Target/R600/MCTargetDesc/CMakeFiles/LLVMR600Desc.dir/clean:
	cd /home/m/dex2ir/external/llvm/build/lib/Target/R600/MCTargetDesc && $(CMAKE_COMMAND) -P CMakeFiles/LLVMR600Desc.dir/cmake_clean.cmake
.PHONY : lib/Target/R600/MCTargetDesc/CMakeFiles/LLVMR600Desc.dir/clean

lib/Target/R600/MCTargetDesc/CMakeFiles/LLVMR600Desc.dir/depend:
	cd /home/m/dex2ir/external/llvm/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/m/dex2ir/external/llvm /home/m/dex2ir/external/llvm/lib/Target/R600/MCTargetDesc /home/m/dex2ir/external/llvm/build /home/m/dex2ir/external/llvm/build/lib/Target/R600/MCTargetDesc /home/m/dex2ir/external/llvm/build/lib/Target/R600/MCTargetDesc/CMakeFiles/LLVMR600Desc.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : lib/Target/R600/MCTargetDesc/CMakeFiles/LLVMR600Desc.dir/depend

