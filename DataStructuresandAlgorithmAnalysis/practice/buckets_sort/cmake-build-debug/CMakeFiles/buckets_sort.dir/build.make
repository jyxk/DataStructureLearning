# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 3.9

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
CMAKE_COMMAND = "D:\Program Files\JetBrains\CLion 2017.2.3\bin\cmake\bin\cmake.exe"

# The command to remove a file.
RM = "D:\Program Files\JetBrains\CLion 2017.2.3\bin\cmake\bin\cmake.exe" -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = "D:\Code\DS&A\DataStructureLearning\DataStructuresandAlgorithmAnalysis\practice\buckets_sort"

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = "D:\Code\DS&A\DataStructureLearning\DataStructuresandAlgorithmAnalysis\practice\buckets_sort\cmake-build-debug"

# Include any dependencies generated for this target.
include CMakeFiles/buckets_sort.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/buckets_sort.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/buckets_sort.dir/flags.make

CMakeFiles/buckets_sort.dir/main.c.obj: CMakeFiles/buckets_sort.dir/flags.make
CMakeFiles/buckets_sort.dir/main.c.obj: ../main.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="D:\Code\DS&A\DataStructureLearning\DataStructuresandAlgorithmAnalysis\practice\buckets_sort\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/buckets_sort.dir/main.c.obj"
	C:\LLVM\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles\buckets_sort.dir\main.c.obj   -c "D:\Code\DS&A\DataStructureLearning\DataStructuresandAlgorithmAnalysis\practice\buckets_sort\main.c"

CMakeFiles/buckets_sort.dir/main.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/buckets_sort.dir/main.c.i"
	C:\LLVM\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E "D:\Code\DS&A\DataStructureLearning\DataStructuresandAlgorithmAnalysis\practice\buckets_sort\main.c" > CMakeFiles\buckets_sort.dir\main.c.i

CMakeFiles/buckets_sort.dir/main.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/buckets_sort.dir/main.c.s"
	C:\LLVM\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S "D:\Code\DS&A\DataStructureLearning\DataStructuresandAlgorithmAnalysis\practice\buckets_sort\main.c" -o CMakeFiles\buckets_sort.dir\main.c.s

CMakeFiles/buckets_sort.dir/main.c.obj.requires:

.PHONY : CMakeFiles/buckets_sort.dir/main.c.obj.requires

CMakeFiles/buckets_sort.dir/main.c.obj.provides: CMakeFiles/buckets_sort.dir/main.c.obj.requires
	$(MAKE) -f CMakeFiles\buckets_sort.dir\build.make CMakeFiles/buckets_sort.dir/main.c.obj.provides.build
.PHONY : CMakeFiles/buckets_sort.dir/main.c.obj.provides

CMakeFiles/buckets_sort.dir/main.c.obj.provides.build: CMakeFiles/buckets_sort.dir/main.c.obj


# Object files for target buckets_sort
buckets_sort_OBJECTS = \
"CMakeFiles/buckets_sort.dir/main.c.obj"

# External object files for target buckets_sort
buckets_sort_EXTERNAL_OBJECTS =

buckets_sort.exe: CMakeFiles/buckets_sort.dir/main.c.obj
buckets_sort.exe: CMakeFiles/buckets_sort.dir/build.make
buckets_sort.exe: CMakeFiles/buckets_sort.dir/linklibs.rsp
buckets_sort.exe: CMakeFiles/buckets_sort.dir/objects1.rsp
buckets_sort.exe: CMakeFiles/buckets_sort.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir="D:\Code\DS&A\DataStructureLearning\DataStructuresandAlgorithmAnalysis\practice\buckets_sort\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Linking C executable buckets_sort.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\buckets_sort.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/buckets_sort.dir/build: buckets_sort.exe

.PHONY : CMakeFiles/buckets_sort.dir/build

CMakeFiles/buckets_sort.dir/requires: CMakeFiles/buckets_sort.dir/main.c.obj.requires

.PHONY : CMakeFiles/buckets_sort.dir/requires

CMakeFiles/buckets_sort.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\buckets_sort.dir\cmake_clean.cmake
.PHONY : CMakeFiles/buckets_sort.dir/clean

CMakeFiles/buckets_sort.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" "D:\Code\DS&A\DataStructureLearning\DataStructuresandAlgorithmAnalysis\practice\buckets_sort" "D:\Code\DS&A\DataStructureLearning\DataStructuresandAlgorithmAnalysis\practice\buckets_sort" "D:\Code\DS&A\DataStructureLearning\DataStructuresandAlgorithmAnalysis\practice\buckets_sort\cmake-build-debug" "D:\Code\DS&A\DataStructureLearning\DataStructuresandAlgorithmAnalysis\practice\buckets_sort\cmake-build-debug" "D:\Code\DS&A\DataStructureLearning\DataStructuresandAlgorithmAnalysis\practice\buckets_sort\cmake-build-debug\CMakeFiles\buckets_sort.dir\DependInfo.cmake" --color=$(COLOR)
.PHONY : CMakeFiles/buckets_sort.dir/depend

