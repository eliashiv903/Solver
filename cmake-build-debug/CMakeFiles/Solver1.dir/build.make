# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.16

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
CMAKE_COMMAND = /snap/clion/121/bin/cmake/linux/bin/cmake

# The command to remove a file.
RM = /snap/clion/121/bin/cmake/linux/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/eli/CLionProjects/Solver1

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/eli/CLionProjects/Solver1/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/Solver1.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/Solver1.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/Solver1.dir/flags.make

CMakeFiles/Solver1.dir/main.cpp.o: CMakeFiles/Solver1.dir/flags.make
CMakeFiles/Solver1.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/eli/CLionProjects/Solver1/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/Solver1.dir/main.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/Solver1.dir/main.cpp.o -c /home/eli/CLionProjects/Solver1/main.cpp

CMakeFiles/Solver1.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Solver1.dir/main.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/eli/CLionProjects/Solver1/main.cpp > CMakeFiles/Solver1.dir/main.cpp.i

CMakeFiles/Solver1.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Solver1.dir/main.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/eli/CLionProjects/Solver1/main.cpp -o CMakeFiles/Solver1.dir/main.cpp.s

# Object files for target Solver1
Solver1_OBJECTS = \
"CMakeFiles/Solver1.dir/main.cpp.o"

# External object files for target Solver1
Solver1_EXTERNAL_OBJECTS =

Solver1: CMakeFiles/Solver1.dir/main.cpp.o
Solver1: CMakeFiles/Solver1.dir/build.make
Solver1: CMakeFiles/Solver1.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/eli/CLionProjects/Solver1/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable Solver1"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/Solver1.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/Solver1.dir/build: Solver1

.PHONY : CMakeFiles/Solver1.dir/build

CMakeFiles/Solver1.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/Solver1.dir/cmake_clean.cmake
.PHONY : CMakeFiles/Solver1.dir/clean

CMakeFiles/Solver1.dir/depend:
	cd /home/eli/CLionProjects/Solver1/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/eli/CLionProjects/Solver1 /home/eli/CLionProjects/Solver1 /home/eli/CLionProjects/Solver1/cmake-build-debug /home/eli/CLionProjects/Solver1/cmake-build-debug /home/eli/CLionProjects/Solver1/cmake-build-debug/CMakeFiles/Solver1.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/Solver1.dir/depend

