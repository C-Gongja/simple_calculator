# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.29

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:

#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:

# Disable VCS-based implicit rules.
% : %,v

# Disable VCS-based implicit rules.
% : RCS/%

# Disable VCS-based implicit rules.
% : RCS/%,v

# Disable VCS-based implicit rules.
% : SCCS/s.%

# Disable VCS-based implicit rules.
% : s.%

.SUFFIXES: .hpux_make_needs_suffix_list

# Command-line flag to silence nested $(MAKE).
$(VERBOSE)MAKESILENT = -s

#Suppress display of executed commands.
$(VERBOSE).SILENT:

# A target that is always out of date.
cmake_force:
.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

# The shell in which to execute make rules.
SHELL = /bin/sh

# The CMake executable.
CMAKE_COMMAND = /usr/local/Cellar/cmake/3.29.2/bin/cmake

# The command to remove a file.
RM = /usr/local/Cellar/cmake/3.29.2/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /Users/yoon/Desktop/School/UCD/ECS_153_security/ecs153-sq-hw0-main/src

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Users/yoon/Desktop/School/UCD/ECS_153_security/ecs153-sq-hw0-main/src/build

# Include any dependencies generated for this target.
include CMakeFiles/Calculator.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/Calculator.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/Calculator.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/Calculator.dir/flags.make

CMakeFiles/Calculator.dir/lib/calculator.c.o: CMakeFiles/Calculator.dir/flags.make
CMakeFiles/Calculator.dir/lib/calculator.c.o: /Users/yoon/Desktop/School/UCD/ECS_153_security/ecs153-sq-hw0-main/src/lib/calculator.c
CMakeFiles/Calculator.dir/lib/calculator.c.o: CMakeFiles/Calculator.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/Users/yoon/Desktop/School/UCD/ECS_153_security/ecs153-sq-hw0-main/src/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/Calculator.dir/lib/calculator.c.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -MD -MT CMakeFiles/Calculator.dir/lib/calculator.c.o -MF CMakeFiles/Calculator.dir/lib/calculator.c.o.d -o CMakeFiles/Calculator.dir/lib/calculator.c.o -c /Users/yoon/Desktop/School/UCD/ECS_153_security/ecs153-sq-hw0-main/src/lib/calculator.c

CMakeFiles/Calculator.dir/lib/calculator.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing C source to CMakeFiles/Calculator.dir/lib/calculator.c.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /Users/yoon/Desktop/School/UCD/ECS_153_security/ecs153-sq-hw0-main/src/lib/calculator.c > CMakeFiles/Calculator.dir/lib/calculator.c.i

CMakeFiles/Calculator.dir/lib/calculator.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling C source to assembly CMakeFiles/Calculator.dir/lib/calculator.c.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /Users/yoon/Desktop/School/UCD/ECS_153_security/ecs153-sq-hw0-main/src/lib/calculator.c -o CMakeFiles/Calculator.dir/lib/calculator.c.s

CMakeFiles/Calculator.dir/lib/basic.c.o: CMakeFiles/Calculator.dir/flags.make
CMakeFiles/Calculator.dir/lib/basic.c.o: /Users/yoon/Desktop/School/UCD/ECS_153_security/ecs153-sq-hw0-main/src/lib/basic.c
CMakeFiles/Calculator.dir/lib/basic.c.o: CMakeFiles/Calculator.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/Users/yoon/Desktop/School/UCD/ECS_153_security/ecs153-sq-hw0-main/src/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building C object CMakeFiles/Calculator.dir/lib/basic.c.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -MD -MT CMakeFiles/Calculator.dir/lib/basic.c.o -MF CMakeFiles/Calculator.dir/lib/basic.c.o.d -o CMakeFiles/Calculator.dir/lib/basic.c.o -c /Users/yoon/Desktop/School/UCD/ECS_153_security/ecs153-sq-hw0-main/src/lib/basic.c

CMakeFiles/Calculator.dir/lib/basic.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing C source to CMakeFiles/Calculator.dir/lib/basic.c.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /Users/yoon/Desktop/School/UCD/ECS_153_security/ecs153-sq-hw0-main/src/lib/basic.c > CMakeFiles/Calculator.dir/lib/basic.c.i

CMakeFiles/Calculator.dir/lib/basic.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling C source to assembly CMakeFiles/Calculator.dir/lib/basic.c.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /Users/yoon/Desktop/School/UCD/ECS_153_security/ecs153-sq-hw0-main/src/lib/basic.c -o CMakeFiles/Calculator.dir/lib/basic.c.s

CMakeFiles/Calculator.dir/lib/fun.c.o: CMakeFiles/Calculator.dir/flags.make
CMakeFiles/Calculator.dir/lib/fun.c.o: /Users/yoon/Desktop/School/UCD/ECS_153_security/ecs153-sq-hw0-main/src/lib/fun.c
CMakeFiles/Calculator.dir/lib/fun.c.o: CMakeFiles/Calculator.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/Users/yoon/Desktop/School/UCD/ECS_153_security/ecs153-sq-hw0-main/src/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building C object CMakeFiles/Calculator.dir/lib/fun.c.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -MD -MT CMakeFiles/Calculator.dir/lib/fun.c.o -MF CMakeFiles/Calculator.dir/lib/fun.c.o.d -o CMakeFiles/Calculator.dir/lib/fun.c.o -c /Users/yoon/Desktop/School/UCD/ECS_153_security/ecs153-sq-hw0-main/src/lib/fun.c

CMakeFiles/Calculator.dir/lib/fun.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing C source to CMakeFiles/Calculator.dir/lib/fun.c.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /Users/yoon/Desktop/School/UCD/ECS_153_security/ecs153-sq-hw0-main/src/lib/fun.c > CMakeFiles/Calculator.dir/lib/fun.c.i

CMakeFiles/Calculator.dir/lib/fun.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling C source to assembly CMakeFiles/Calculator.dir/lib/fun.c.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /Users/yoon/Desktop/School/UCD/ECS_153_security/ecs153-sq-hw0-main/src/lib/fun.c -o CMakeFiles/Calculator.dir/lib/fun.c.s

CMakeFiles/Calculator.dir/lib/scientific.c.o: CMakeFiles/Calculator.dir/flags.make
CMakeFiles/Calculator.dir/lib/scientific.c.o: /Users/yoon/Desktop/School/UCD/ECS_153_security/ecs153-sq-hw0-main/src/lib/scientific.c
CMakeFiles/Calculator.dir/lib/scientific.c.o: CMakeFiles/Calculator.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/Users/yoon/Desktop/School/UCD/ECS_153_security/ecs153-sq-hw0-main/src/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building C object CMakeFiles/Calculator.dir/lib/scientific.c.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -MD -MT CMakeFiles/Calculator.dir/lib/scientific.c.o -MF CMakeFiles/Calculator.dir/lib/scientific.c.o.d -o CMakeFiles/Calculator.dir/lib/scientific.c.o -c /Users/yoon/Desktop/School/UCD/ECS_153_security/ecs153-sq-hw0-main/src/lib/scientific.c

CMakeFiles/Calculator.dir/lib/scientific.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing C source to CMakeFiles/Calculator.dir/lib/scientific.c.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /Users/yoon/Desktop/School/UCD/ECS_153_security/ecs153-sq-hw0-main/src/lib/scientific.c > CMakeFiles/Calculator.dir/lib/scientific.c.i

CMakeFiles/Calculator.dir/lib/scientific.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling C source to assembly CMakeFiles/Calculator.dir/lib/scientific.c.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /Users/yoon/Desktop/School/UCD/ECS_153_security/ecs153-sq-hw0-main/src/lib/scientific.c -o CMakeFiles/Calculator.dir/lib/scientific.c.s

# Object files for target Calculator
Calculator_OBJECTS = \
"CMakeFiles/Calculator.dir/lib/calculator.c.o" \
"CMakeFiles/Calculator.dir/lib/basic.c.o" \
"CMakeFiles/Calculator.dir/lib/fun.c.o" \
"CMakeFiles/Calculator.dir/lib/scientific.c.o"

# External object files for target Calculator
Calculator_EXTERNAL_OBJECTS =

libCalculator.dylib: CMakeFiles/Calculator.dir/lib/calculator.c.o
libCalculator.dylib: CMakeFiles/Calculator.dir/lib/basic.c.o
libCalculator.dylib: CMakeFiles/Calculator.dir/lib/fun.c.o
libCalculator.dylib: CMakeFiles/Calculator.dir/lib/scientific.c.o
libCalculator.dylib: CMakeFiles/Calculator.dir/build.make
libCalculator.dylib: CMakeFiles/Calculator.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --bold --progress-dir=/Users/yoon/Desktop/School/UCD/ECS_153_security/ecs153-sq-hw0-main/src/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Linking C shared library libCalculator.dylib"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/Calculator.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/Calculator.dir/build: libCalculator.dylib
.PHONY : CMakeFiles/Calculator.dir/build

CMakeFiles/Calculator.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/Calculator.dir/cmake_clean.cmake
.PHONY : CMakeFiles/Calculator.dir/clean

CMakeFiles/Calculator.dir/depend:
	cd /Users/yoon/Desktop/School/UCD/ECS_153_security/ecs153-sq-hw0-main/src/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/yoon/Desktop/School/UCD/ECS_153_security/ecs153-sq-hw0-main/src /Users/yoon/Desktop/School/UCD/ECS_153_security/ecs153-sq-hw0-main/src /Users/yoon/Desktop/School/UCD/ECS_153_security/ecs153-sq-hw0-main/src/build /Users/yoon/Desktop/School/UCD/ECS_153_security/ecs153-sq-hw0-main/src/build /Users/yoon/Desktop/School/UCD/ECS_153_security/ecs153-sq-hw0-main/src/build/CMakeFiles/Calculator.dir/DependInfo.cmake "--color=$(COLOR)"
.PHONY : CMakeFiles/Calculator.dir/depend

