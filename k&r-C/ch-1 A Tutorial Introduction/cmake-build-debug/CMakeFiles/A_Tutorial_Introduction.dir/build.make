# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 3.14

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

SHELL = cmd.exe

# The CMake executable.
CMAKE_COMMAND = "C:\Program Files\JetBrains\CLion 2019.1.4\bin\cmake\win\bin\cmake.exe"

# The command to remove a file.
RM = "C:\Program Files\JetBrains\CLion 2019.1.4\bin\cmake\win\bin\cmake.exe" -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = C:\Users\Rahul\CLionProjects\A_Tutorial_Introduction

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = C:\Users\Rahul\CLionProjects\A_Tutorial_Introduction\cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/A_Tutorial_Introduction.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/A_Tutorial_Introduction.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/A_Tutorial_Introduction.dir/flags.make

CMakeFiles/A_Tutorial_Introduction.dir/exercise1-15tempreture_conversion_by_function.c.obj: CMakeFiles/A_Tutorial_Introduction.dir/flags.make
CMakeFiles/A_Tutorial_Introduction.dir/exercise1-15tempreture_conversion_by_function.c.obj: ../exercise1-15tempreture_conversion_by_function.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\Rahul\CLionProjects\A_Tutorial_Introduction\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/A_Tutorial_Introduction.dir/exercise1-15tempreture_conversion_by_function.c.obj"
	C:\PROGRA~1\MINGW-~1\X86_64~1.0-P\mingw64\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles\A_Tutorial_Introduction.dir\exercise1-15tempreture_conversion_by_function.c.obj   -c C:\Users\Rahul\CLionProjects\A_Tutorial_Introduction\exercise1-15tempreture_conversion_by_function.c

CMakeFiles/A_Tutorial_Introduction.dir/exercise1-15tempreture_conversion_by_function.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/A_Tutorial_Introduction.dir/exercise1-15tempreture_conversion_by_function.c.i"
	C:\PROGRA~1\MINGW-~1\X86_64~1.0-P\mingw64\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E C:\Users\Rahul\CLionProjects\A_Tutorial_Introduction\exercise1-15tempreture_conversion_by_function.c > CMakeFiles\A_Tutorial_Introduction.dir\exercise1-15tempreture_conversion_by_function.c.i

CMakeFiles/A_Tutorial_Introduction.dir/exercise1-15tempreture_conversion_by_function.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/A_Tutorial_Introduction.dir/exercise1-15tempreture_conversion_by_function.c.s"
	C:\PROGRA~1\MINGW-~1\X86_64~1.0-P\mingw64\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S C:\Users\Rahul\CLionProjects\A_Tutorial_Introduction\exercise1-15tempreture_conversion_by_function.c -o CMakeFiles\A_Tutorial_Introduction.dir\exercise1-15tempreture_conversion_by_function.c.s

# Object files for target A_Tutorial_Introduction
A_Tutorial_Introduction_OBJECTS = \
"CMakeFiles/A_Tutorial_Introduction.dir/exercise1-15tempreture_conversion_by_function.c.obj"

# External object files for target A_Tutorial_Introduction
A_Tutorial_Introduction_EXTERNAL_OBJECTS =

A_Tutorial_Introduction.exe: CMakeFiles/A_Tutorial_Introduction.dir/exercise1-15tempreture_conversion_by_function.c.obj
A_Tutorial_Introduction.exe: CMakeFiles/A_Tutorial_Introduction.dir/build.make
A_Tutorial_Introduction.exe: CMakeFiles/A_Tutorial_Introduction.dir/linklibs.rsp
A_Tutorial_Introduction.exe: CMakeFiles/A_Tutorial_Introduction.dir/objects1.rsp
A_Tutorial_Introduction.exe: CMakeFiles/A_Tutorial_Introduction.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=C:\Users\Rahul\CLionProjects\A_Tutorial_Introduction\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking C executable A_Tutorial_Introduction.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\A_Tutorial_Introduction.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/A_Tutorial_Introduction.dir/build: A_Tutorial_Introduction.exe

.PHONY : CMakeFiles/A_Tutorial_Introduction.dir/build

CMakeFiles/A_Tutorial_Introduction.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\A_Tutorial_Introduction.dir\cmake_clean.cmake
.PHONY : CMakeFiles/A_Tutorial_Introduction.dir/clean

CMakeFiles/A_Tutorial_Introduction.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" C:\Users\Rahul\CLionProjects\A_Tutorial_Introduction C:\Users\Rahul\CLionProjects\A_Tutorial_Introduction C:\Users\Rahul\CLionProjects\A_Tutorial_Introduction\cmake-build-debug C:\Users\Rahul\CLionProjects\A_Tutorial_Introduction\cmake-build-debug C:\Users\Rahul\CLionProjects\A_Tutorial_Introduction\cmake-build-debug\CMakeFiles\A_Tutorial_Introduction.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/A_Tutorial_Introduction.dir/depend

