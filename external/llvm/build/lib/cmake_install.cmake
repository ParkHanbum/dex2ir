# Install script for directory: /home/m/AOSP5/external/llvm/lib

# Set the install prefix
if(NOT DEFINED CMAKE_INSTALL_PREFIX)
  set(CMAKE_INSTALL_PREFIX "/usr/local")
endif()
string(REGEX REPLACE "/$" "" CMAKE_INSTALL_PREFIX "${CMAKE_INSTALL_PREFIX}")

# Set the install configuration name.
if(NOT DEFINED CMAKE_INSTALL_CONFIG_NAME)
  if(BUILD_TYPE)
    string(REGEX REPLACE "^[^A-Za-z0-9_]+" ""
           CMAKE_INSTALL_CONFIG_NAME "${BUILD_TYPE}")
  else()
    set(CMAKE_INSTALL_CONFIG_NAME "Debug")
  endif()
  message(STATUS "Install configuration: \"${CMAKE_INSTALL_CONFIG_NAME}\"")
endif()

# Set the component getting installed.
if(NOT CMAKE_INSTALL_COMPONENT)
  if(COMPONENT)
    message(STATUS "Install component: \"${COMPONENT}\"")
    set(CMAKE_INSTALL_COMPONENT "${COMPONENT}")
  else()
    set(CMAKE_INSTALL_COMPONENT)
  endif()
endif()

# Install shared libraries without execute permission?
if(NOT DEFINED CMAKE_INSTALL_SO_NO_EXE)
  set(CMAKE_INSTALL_SO_NO_EXE "1")
endif()

# Is this installation the result of a crosscompile?
if(NOT DEFINED CMAKE_CROSSCOMPILING)
  set(CMAKE_CROSSCOMPILING "FALSE")
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for each subdirectory.
  include("/home/m/AOSP5/external/llvm/build/lib/IR/cmake_install.cmake")
  include("/home/m/AOSP5/external/llvm/build/lib/IRReader/cmake_install.cmake")
  include("/home/m/AOSP5/external/llvm/build/lib/CodeGen/cmake_install.cmake")
  include("/home/m/AOSP5/external/llvm/build/lib/Bitcode/cmake_install.cmake")
  include("/home/m/AOSP5/external/llvm/build/lib/Transforms/cmake_install.cmake")
  include("/home/m/AOSP5/external/llvm/build/lib/Linker/cmake_install.cmake")
  include("/home/m/AOSP5/external/llvm/build/lib/Analysis/cmake_install.cmake")
  include("/home/m/AOSP5/external/llvm/build/lib/LTO/cmake_install.cmake")
  include("/home/m/AOSP5/external/llvm/build/lib/MC/cmake_install.cmake")
  include("/home/m/AOSP5/external/llvm/build/lib/Object/cmake_install.cmake")
  include("/home/m/AOSP5/external/llvm/build/lib/ObjectYAML/cmake_install.cmake")
  include("/home/m/AOSP5/external/llvm/build/lib/Option/cmake_install.cmake")
  include("/home/m/AOSP5/external/llvm/build/lib/DebugInfo/cmake_install.cmake")
  include("/home/m/AOSP5/external/llvm/build/lib/ExecutionEngine/cmake_install.cmake")
  include("/home/m/AOSP5/external/llvm/build/lib/Target/cmake_install.cmake")
  include("/home/m/AOSP5/external/llvm/build/lib/AsmParser/cmake_install.cmake")
  include("/home/m/AOSP5/external/llvm/build/lib/LineEditor/cmake_install.cmake")
  include("/home/m/AOSP5/external/llvm/build/lib/ProfileData/cmake_install.cmake")
  include("/home/m/AOSP5/external/llvm/build/lib/Fuzzer/cmake_install.cmake")
  include("/home/m/AOSP5/external/llvm/build/lib/Passes/cmake_install.cmake")
  include("/home/m/AOSP5/external/llvm/build/lib/LibDriver/cmake_install.cmake")

endif()

