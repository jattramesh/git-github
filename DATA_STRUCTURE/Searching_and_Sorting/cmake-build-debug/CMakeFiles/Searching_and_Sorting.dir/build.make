# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.14

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
CMAKE_COMMAND = /opt/clion-2019.1.4/bin/cmake/linux/bin/cmake

# The command to remove a file.
RM = /opt/clion-2019.1.4/bin/cmake/linux/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/rahul/CLionProject/Searching_and_Sorting

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/rahul/CLionProject/Searching_and_Sorting/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/Searching_and_Sorting.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/Searching_and_Sorting.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/Searching_and_Sorting.dir/flags.make

CMakeFiles/Searching_and_Sorting.dir/jump_search.c.o: CMakeFiles/Searching_and_Sorting.dir/flags.make
CMakeFiles/Searching_and_Sorting.dir/jump_search.c.o: ../jump_search.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/rahul/CLionProject/Searching_and_Sorting/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/Searching_and_Sorting.dir/jump_search.c.o"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/Searching_and_Sorting.dir/jump_search.c.o   -c /home/rahul/CLionProject/Searching_and_Sorting/jump_search.c

CMakeFiles/Searching_and_Sorting.dir/jump_search.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/Searching_and_Sorting.dir/jump_search.c.i"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/rahul/CLionProject/Searching_and_Sorting/jump_search.c > CMakeFiles/Searching_and_Sorting.dir/jump_search.c.i

CMakeFiles/Searching_and_Sorting.dir/jump_search.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/Searching_and_Sorting.dir/jump_search.c.s"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/rahul/CLionProject/Searching_and_Sorting/jump_search.c -o CMakeFiles/Searching_and_Sorting.dir/jump_search.c.s

# Object files for target Searching_and_Sorting
Searching_and_Sorting_OBJECTS = \
"CMakeFiles/Searching_and_Sorting.dir/jump_search.c.o"

# External object files for target Searching_and_Sorting
Searching_and_Sorting_EXTERNAL_OBJECTS =

Searching_and_Sorting: CMakeFiles/Searching_and_Sorting.dir/jump_search.c.o
Searching_and_Sorting: CMakeFiles/Searching_and_Sorting.dir/build.make
Searching_and_Sorting: CMakeFiles/Searching_and_Sorting.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/rahul/CLionProject/Searching_and_Sorting/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking C executable Searching_and_Sorting"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/Searching_and_Sorting.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/Searching_and_Sorting.dir/build: Searching_and_Sorting

.PHONY : CMakeFiles/Searching_and_Sorting.dir/build

CMakeFiles/Searching_and_Sorting.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/Searching_and_Sorting.dir/cmake_clean.cmake
.PHONY : CMakeFiles/Searching_and_Sorting.dir/clean

CMakeFiles/Searching_and_Sorting.dir/depend:
	cd /home/rahul/CLionProject/Searching_and_Sorting/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/rahul/CLionProject/Searching_and_Sorting /home/rahul/CLionProject/Searching_and_Sorting /home/rahul/CLionProject/Searching_and_Sorting/cmake-build-debug /home/rahul/CLionProject/Searching_and_Sorting/cmake-build-debug /home/rahul/CLionProject/Searching_and_Sorting/cmake-build-debug/CMakeFiles/Searching_and_Sorting.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/Searching_and_Sorting.dir/depend

