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
include tools/lto/CMakeFiles/LTO_static.dir/depend.make

# Include the progress variables for this target.
include tools/lto/CMakeFiles/LTO_static.dir/progress.make

# Include the compile flags for this target's objects.
include tools/lto/CMakeFiles/LTO_static.dir/flags.make

tools/lto/CMakeFiles/LTO_static.dir/LTOCodeGenerator.cpp.o: tools/lto/CMakeFiles/LTO_static.dir/flags.make
tools/lto/CMakeFiles/LTO_static.dir/LTOCodeGenerator.cpp.o: ../tools/lto/LTOCodeGenerator.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/m/dex2ir/external/llvm/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object tools/lto/CMakeFiles/LTO_static.dir/LTOCodeGenerator.cpp.o"
	cd /home/m/dex2ir/external/llvm/build/tools/lto && /usr/bin/c++   $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/LTO_static.dir/LTOCodeGenerator.cpp.o -c /home/m/dex2ir/external/llvm/tools/lto/LTOCodeGenerator.cpp

tools/lto/CMakeFiles/LTO_static.dir/LTOCodeGenerator.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/LTO_static.dir/LTOCodeGenerator.cpp.i"
	cd /home/m/dex2ir/external/llvm/build/tools/lto && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/m/dex2ir/external/llvm/tools/lto/LTOCodeGenerator.cpp > CMakeFiles/LTO_static.dir/LTOCodeGenerator.cpp.i

tools/lto/CMakeFiles/LTO_static.dir/LTOCodeGenerator.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/LTO_static.dir/LTOCodeGenerator.cpp.s"
	cd /home/m/dex2ir/external/llvm/build/tools/lto && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/m/dex2ir/external/llvm/tools/lto/LTOCodeGenerator.cpp -o CMakeFiles/LTO_static.dir/LTOCodeGenerator.cpp.s

tools/lto/CMakeFiles/LTO_static.dir/LTOCodeGenerator.cpp.o.requires:

.PHONY : tools/lto/CMakeFiles/LTO_static.dir/LTOCodeGenerator.cpp.o.requires

tools/lto/CMakeFiles/LTO_static.dir/LTOCodeGenerator.cpp.o.provides: tools/lto/CMakeFiles/LTO_static.dir/LTOCodeGenerator.cpp.o.requires
	$(MAKE) -f tools/lto/CMakeFiles/LTO_static.dir/build.make tools/lto/CMakeFiles/LTO_static.dir/LTOCodeGenerator.cpp.o.provides.build
.PHONY : tools/lto/CMakeFiles/LTO_static.dir/LTOCodeGenerator.cpp.o.provides

tools/lto/CMakeFiles/LTO_static.dir/LTOCodeGenerator.cpp.o.provides.build: tools/lto/CMakeFiles/LTO_static.dir/LTOCodeGenerator.cpp.o


tools/lto/CMakeFiles/LTO_static.dir/LTODisassembler.cpp.o: tools/lto/CMakeFiles/LTO_static.dir/flags.make
tools/lto/CMakeFiles/LTO_static.dir/LTODisassembler.cpp.o: ../tools/lto/LTODisassembler.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/m/dex2ir/external/llvm/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object tools/lto/CMakeFiles/LTO_static.dir/LTODisassembler.cpp.o"
	cd /home/m/dex2ir/external/llvm/build/tools/lto && /usr/bin/c++   $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/LTO_static.dir/LTODisassembler.cpp.o -c /home/m/dex2ir/external/llvm/tools/lto/LTODisassembler.cpp

tools/lto/CMakeFiles/LTO_static.dir/LTODisassembler.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/LTO_static.dir/LTODisassembler.cpp.i"
	cd /home/m/dex2ir/external/llvm/build/tools/lto && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/m/dex2ir/external/llvm/tools/lto/LTODisassembler.cpp > CMakeFiles/LTO_static.dir/LTODisassembler.cpp.i

tools/lto/CMakeFiles/LTO_static.dir/LTODisassembler.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/LTO_static.dir/LTODisassembler.cpp.s"
	cd /home/m/dex2ir/external/llvm/build/tools/lto && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/m/dex2ir/external/llvm/tools/lto/LTODisassembler.cpp -o CMakeFiles/LTO_static.dir/LTODisassembler.cpp.s

tools/lto/CMakeFiles/LTO_static.dir/LTODisassembler.cpp.o.requires:

.PHONY : tools/lto/CMakeFiles/LTO_static.dir/LTODisassembler.cpp.o.requires

tools/lto/CMakeFiles/LTO_static.dir/LTODisassembler.cpp.o.provides: tools/lto/CMakeFiles/LTO_static.dir/LTODisassembler.cpp.o.requires
	$(MAKE) -f tools/lto/CMakeFiles/LTO_static.dir/build.make tools/lto/CMakeFiles/LTO_static.dir/LTODisassembler.cpp.o.provides.build
.PHONY : tools/lto/CMakeFiles/LTO_static.dir/LTODisassembler.cpp.o.provides

tools/lto/CMakeFiles/LTO_static.dir/LTODisassembler.cpp.o.provides.build: tools/lto/CMakeFiles/LTO_static.dir/LTODisassembler.cpp.o


tools/lto/CMakeFiles/LTO_static.dir/lto.cpp.o: tools/lto/CMakeFiles/LTO_static.dir/flags.make
tools/lto/CMakeFiles/LTO_static.dir/lto.cpp.o: ../tools/lto/lto.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/m/dex2ir/external/llvm/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object tools/lto/CMakeFiles/LTO_static.dir/lto.cpp.o"
	cd /home/m/dex2ir/external/llvm/build/tools/lto && /usr/bin/c++   $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/LTO_static.dir/lto.cpp.o -c /home/m/dex2ir/external/llvm/tools/lto/lto.cpp

tools/lto/CMakeFiles/LTO_static.dir/lto.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/LTO_static.dir/lto.cpp.i"
	cd /home/m/dex2ir/external/llvm/build/tools/lto && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/m/dex2ir/external/llvm/tools/lto/lto.cpp > CMakeFiles/LTO_static.dir/lto.cpp.i

tools/lto/CMakeFiles/LTO_static.dir/lto.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/LTO_static.dir/lto.cpp.s"
	cd /home/m/dex2ir/external/llvm/build/tools/lto && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/m/dex2ir/external/llvm/tools/lto/lto.cpp -o CMakeFiles/LTO_static.dir/lto.cpp.s

tools/lto/CMakeFiles/LTO_static.dir/lto.cpp.o.requires:

.PHONY : tools/lto/CMakeFiles/LTO_static.dir/lto.cpp.o.requires

tools/lto/CMakeFiles/LTO_static.dir/lto.cpp.o.provides: tools/lto/CMakeFiles/LTO_static.dir/lto.cpp.o.requires
	$(MAKE) -f tools/lto/CMakeFiles/LTO_static.dir/build.make tools/lto/CMakeFiles/LTO_static.dir/lto.cpp.o.provides.build
.PHONY : tools/lto/CMakeFiles/LTO_static.dir/lto.cpp.o.provides

tools/lto/CMakeFiles/LTO_static.dir/lto.cpp.o.provides.build: tools/lto/CMakeFiles/LTO_static.dir/lto.cpp.o


tools/lto/CMakeFiles/LTO_static.dir/LTOModule.cpp.o: tools/lto/CMakeFiles/LTO_static.dir/flags.make
tools/lto/CMakeFiles/LTO_static.dir/LTOModule.cpp.o: ../tools/lto/LTOModule.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/m/dex2ir/external/llvm/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building CXX object tools/lto/CMakeFiles/LTO_static.dir/LTOModule.cpp.o"
	cd /home/m/dex2ir/external/llvm/build/tools/lto && /usr/bin/c++   $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/LTO_static.dir/LTOModule.cpp.o -c /home/m/dex2ir/external/llvm/tools/lto/LTOModule.cpp

tools/lto/CMakeFiles/LTO_static.dir/LTOModule.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/LTO_static.dir/LTOModule.cpp.i"
	cd /home/m/dex2ir/external/llvm/build/tools/lto && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/m/dex2ir/external/llvm/tools/lto/LTOModule.cpp > CMakeFiles/LTO_static.dir/LTOModule.cpp.i

tools/lto/CMakeFiles/LTO_static.dir/LTOModule.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/LTO_static.dir/LTOModule.cpp.s"
	cd /home/m/dex2ir/external/llvm/build/tools/lto && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/m/dex2ir/external/llvm/tools/lto/LTOModule.cpp -o CMakeFiles/LTO_static.dir/LTOModule.cpp.s

tools/lto/CMakeFiles/LTO_static.dir/LTOModule.cpp.o.requires:

.PHONY : tools/lto/CMakeFiles/LTO_static.dir/LTOModule.cpp.o.requires

tools/lto/CMakeFiles/LTO_static.dir/LTOModule.cpp.o.provides: tools/lto/CMakeFiles/LTO_static.dir/LTOModule.cpp.o.requires
	$(MAKE) -f tools/lto/CMakeFiles/LTO_static.dir/build.make tools/lto/CMakeFiles/LTO_static.dir/LTOModule.cpp.o.provides.build
.PHONY : tools/lto/CMakeFiles/LTO_static.dir/LTOModule.cpp.o.provides

tools/lto/CMakeFiles/LTO_static.dir/LTOModule.cpp.o.provides.build: tools/lto/CMakeFiles/LTO_static.dir/LTOModule.cpp.o


# Object files for target LTO_static
LTO_static_OBJECTS = \
"CMakeFiles/LTO_static.dir/LTOCodeGenerator.cpp.o" \
"CMakeFiles/LTO_static.dir/LTODisassembler.cpp.o" \
"CMakeFiles/LTO_static.dir/lto.cpp.o" \
"CMakeFiles/LTO_static.dir/LTOModule.cpp.o"

# External object files for target LTO_static
LTO_static_EXTERNAL_OBJECTS =

lib/libLTO.a: tools/lto/CMakeFiles/LTO_static.dir/LTOCodeGenerator.cpp.o
lib/libLTO.a: tools/lto/CMakeFiles/LTO_static.dir/LTODisassembler.cpp.o
lib/libLTO.a: tools/lto/CMakeFiles/LTO_static.dir/lto.cpp.o
lib/libLTO.a: tools/lto/CMakeFiles/LTO_static.dir/LTOModule.cpp.o
lib/libLTO.a: tools/lto/CMakeFiles/LTO_static.dir/build.make
lib/libLTO.a: tools/lto/CMakeFiles/LTO_static.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/m/dex2ir/external/llvm/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Linking CXX static library ../../lib/libLTO.a"
	cd /home/m/dex2ir/external/llvm/build/tools/lto && $(CMAKE_COMMAND) -P CMakeFiles/LTO_static.dir/cmake_clean_target.cmake
	cd /home/m/dex2ir/external/llvm/build/tools/lto && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/LTO_static.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
tools/lto/CMakeFiles/LTO_static.dir/build: lib/libLTO.a

.PHONY : tools/lto/CMakeFiles/LTO_static.dir/build

tools/lto/CMakeFiles/LTO_static.dir/requires: tools/lto/CMakeFiles/LTO_static.dir/LTOCodeGenerator.cpp.o.requires
tools/lto/CMakeFiles/LTO_static.dir/requires: tools/lto/CMakeFiles/LTO_static.dir/LTODisassembler.cpp.o.requires
tools/lto/CMakeFiles/LTO_static.dir/requires: tools/lto/CMakeFiles/LTO_static.dir/lto.cpp.o.requires
tools/lto/CMakeFiles/LTO_static.dir/requires: tools/lto/CMakeFiles/LTO_static.dir/LTOModule.cpp.o.requires

.PHONY : tools/lto/CMakeFiles/LTO_static.dir/requires

tools/lto/CMakeFiles/LTO_static.dir/clean:
	cd /home/m/dex2ir/external/llvm/build/tools/lto && $(CMAKE_COMMAND) -P CMakeFiles/LTO_static.dir/cmake_clean.cmake
.PHONY : tools/lto/CMakeFiles/LTO_static.dir/clean

tools/lto/CMakeFiles/LTO_static.dir/depend:
	cd /home/m/dex2ir/external/llvm/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/m/dex2ir/external/llvm /home/m/dex2ir/external/llvm/tools/lto /home/m/dex2ir/external/llvm/build /home/m/dex2ir/external/llvm/build/tools/lto /home/m/dex2ir/external/llvm/build/tools/lto/CMakeFiles/LTO_static.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : tools/lto/CMakeFiles/LTO_static.dir/depend

