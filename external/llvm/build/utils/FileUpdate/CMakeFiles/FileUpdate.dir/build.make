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
include utils/FileUpdate/CMakeFiles/FileUpdate.dir/depend.make

# Include the progress variables for this target.
include utils/FileUpdate/CMakeFiles/FileUpdate.dir/progress.make

# Include the compile flags for this target's objects.
include utils/FileUpdate/CMakeFiles/FileUpdate.dir/flags.make

utils/FileUpdate/CMakeFiles/FileUpdate.dir/FileUpdate.cpp.o: utils/FileUpdate/CMakeFiles/FileUpdate.dir/flags.make
utils/FileUpdate/CMakeFiles/FileUpdate.dir/FileUpdate.cpp.o: ../utils/FileUpdate/FileUpdate.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/m/dex2ir/external/llvm/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object utils/FileUpdate/CMakeFiles/FileUpdate.dir/FileUpdate.cpp.o"
	cd /home/m/dex2ir/external/llvm/build/utils/FileUpdate && /usr/bin/c++   $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/FileUpdate.dir/FileUpdate.cpp.o -c /home/m/dex2ir/external/llvm/utils/FileUpdate/FileUpdate.cpp

utils/FileUpdate/CMakeFiles/FileUpdate.dir/FileUpdate.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/FileUpdate.dir/FileUpdate.cpp.i"
	cd /home/m/dex2ir/external/llvm/build/utils/FileUpdate && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/m/dex2ir/external/llvm/utils/FileUpdate/FileUpdate.cpp > CMakeFiles/FileUpdate.dir/FileUpdate.cpp.i

utils/FileUpdate/CMakeFiles/FileUpdate.dir/FileUpdate.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/FileUpdate.dir/FileUpdate.cpp.s"
	cd /home/m/dex2ir/external/llvm/build/utils/FileUpdate && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/m/dex2ir/external/llvm/utils/FileUpdate/FileUpdate.cpp -o CMakeFiles/FileUpdate.dir/FileUpdate.cpp.s

utils/FileUpdate/CMakeFiles/FileUpdate.dir/FileUpdate.cpp.o.requires:

.PHONY : utils/FileUpdate/CMakeFiles/FileUpdate.dir/FileUpdate.cpp.o.requires

utils/FileUpdate/CMakeFiles/FileUpdate.dir/FileUpdate.cpp.o.provides: utils/FileUpdate/CMakeFiles/FileUpdate.dir/FileUpdate.cpp.o.requires
	$(MAKE) -f utils/FileUpdate/CMakeFiles/FileUpdate.dir/build.make utils/FileUpdate/CMakeFiles/FileUpdate.dir/FileUpdate.cpp.o.provides.build
.PHONY : utils/FileUpdate/CMakeFiles/FileUpdate.dir/FileUpdate.cpp.o.provides

utils/FileUpdate/CMakeFiles/FileUpdate.dir/FileUpdate.cpp.o.provides.build: utils/FileUpdate/CMakeFiles/FileUpdate.dir/FileUpdate.cpp.o


# Object files for target FileUpdate
FileUpdate_OBJECTS = \
"CMakeFiles/FileUpdate.dir/FileUpdate.cpp.o"

# External object files for target FileUpdate
FileUpdate_EXTERNAL_OBJECTS =

bin/FileUpdate: utils/FileUpdate/CMakeFiles/FileUpdate.dir/FileUpdate.cpp.o
bin/FileUpdate: utils/FileUpdate/CMakeFiles/FileUpdate.dir/build.make
bin/FileUpdate: lib/libLLVMSupport.a
bin/FileUpdate: utils/FileUpdate/CMakeFiles/FileUpdate.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/m/dex2ir/external/llvm/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable ../../bin/FileUpdate"
	cd /home/m/dex2ir/external/llvm/build/utils/FileUpdate && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/FileUpdate.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
utils/FileUpdate/CMakeFiles/FileUpdate.dir/build: bin/FileUpdate

.PHONY : utils/FileUpdate/CMakeFiles/FileUpdate.dir/build

utils/FileUpdate/CMakeFiles/FileUpdate.dir/requires: utils/FileUpdate/CMakeFiles/FileUpdate.dir/FileUpdate.cpp.o.requires

.PHONY : utils/FileUpdate/CMakeFiles/FileUpdate.dir/requires

utils/FileUpdate/CMakeFiles/FileUpdate.dir/clean:
	cd /home/m/dex2ir/external/llvm/build/utils/FileUpdate && $(CMAKE_COMMAND) -P CMakeFiles/FileUpdate.dir/cmake_clean.cmake
.PHONY : utils/FileUpdate/CMakeFiles/FileUpdate.dir/clean

utils/FileUpdate/CMakeFiles/FileUpdate.dir/depend:
	cd /home/m/dex2ir/external/llvm/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/m/dex2ir/external/llvm /home/m/dex2ir/external/llvm/utils/FileUpdate /home/m/dex2ir/external/llvm/build /home/m/dex2ir/external/llvm/build/utils/FileUpdate /home/m/dex2ir/external/llvm/build/utils/FileUpdate/CMakeFiles/FileUpdate.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : utils/FileUpdate/CMakeFiles/FileUpdate.dir/depend
