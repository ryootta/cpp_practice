# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.10

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
CMAKE_SOURCE_DIR = /home/ownet10/c++_test/sample_ws

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/ownet10/c++_test/sample_ws/build

# Include any dependencies generated for this target.
include CMakeFiles/main_share.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/main_share.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/main_share.dir/flags.make

CMakeFiles/main_share.dir/src/main.cpp.o: CMakeFiles/main_share.dir/flags.make
CMakeFiles/main_share.dir/src/main.cpp.o: ../src/main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/ownet10/c++_test/sample_ws/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/main_share.dir/src/main.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/main_share.dir/src/main.cpp.o -c /home/ownet10/c++_test/sample_ws/src/main.cpp

CMakeFiles/main_share.dir/src/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/main_share.dir/src/main.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/ownet10/c++_test/sample_ws/src/main.cpp > CMakeFiles/main_share.dir/src/main.cpp.i

CMakeFiles/main_share.dir/src/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/main_share.dir/src/main.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/ownet10/c++_test/sample_ws/src/main.cpp -o CMakeFiles/main_share.dir/src/main.cpp.s

CMakeFiles/main_share.dir/src/main.cpp.o.requires:

.PHONY : CMakeFiles/main_share.dir/src/main.cpp.o.requires

CMakeFiles/main_share.dir/src/main.cpp.o.provides: CMakeFiles/main_share.dir/src/main.cpp.o.requires
	$(MAKE) -f CMakeFiles/main_share.dir/build.make CMakeFiles/main_share.dir/src/main.cpp.o.provides.build
.PHONY : CMakeFiles/main_share.dir/src/main.cpp.o.provides

CMakeFiles/main_share.dir/src/main.cpp.o.provides.build: CMakeFiles/main_share.dir/src/main.cpp.o


# Object files for target main_share
main_share_OBJECTS = \
"CMakeFiles/main_share.dir/src/main.cpp.o"

# External object files for target main_share
main_share_EXTERNAL_OBJECTS =

main_share: CMakeFiles/main_share.dir/src/main.cpp.o
main_share: CMakeFiles/main_share.dir/build.make
main_share: libhello_share.so
main_share: CMakeFiles/main_share.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/ownet10/c++_test/sample_ws/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable main_share"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/main_share.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/main_share.dir/build: main_share

.PHONY : CMakeFiles/main_share.dir/build

CMakeFiles/main_share.dir/requires: CMakeFiles/main_share.dir/src/main.cpp.o.requires

.PHONY : CMakeFiles/main_share.dir/requires

CMakeFiles/main_share.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/main_share.dir/cmake_clean.cmake
.PHONY : CMakeFiles/main_share.dir/clean

CMakeFiles/main_share.dir/depend:
	cd /home/ownet10/c++_test/sample_ws/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/ownet10/c++_test/sample_ws /home/ownet10/c++_test/sample_ws /home/ownet10/c++_test/sample_ws/build /home/ownet10/c++_test/sample_ws/build /home/ownet10/c++_test/sample_ws/build/CMakeFiles/main_share.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/main_share.dir/depend

