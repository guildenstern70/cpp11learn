# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.7

# Default target executed when no arguments are given to make.
default_target: all

.PHONY : default_target

# Allow only one "make -f Makefile2" at a time, but pass parallelism.
.NOTPARALLEL:


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
CMAKE_COMMAND = /usr/local/bin/cmake

# The command to remove a file.
RM = /usr/local/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/alessio/Codice/C++/cpp11learn

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/alessio/Codice/C++/cpp11learn

#=============================================================================
# Targets provided globally by CMake.

# Special rule for the target edit_cache
edit_cache:
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --cyan "No interactive CMake dialog available..."
	/usr/local/bin/cmake -E echo No\ interactive\ CMake\ dialog\ available.
.PHONY : edit_cache

# Special rule for the target edit_cache
edit_cache/fast: edit_cache

.PHONY : edit_cache/fast

# Special rule for the target rebuild_cache
rebuild_cache:
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --cyan "Running CMake to regenerate build system..."
	/usr/local/bin/cmake -H$(CMAKE_SOURCE_DIR) -B$(CMAKE_BINARY_DIR)
.PHONY : rebuild_cache

# Special rule for the target rebuild_cache
rebuild_cache/fast: rebuild_cache

.PHONY : rebuild_cache/fast

# The main all target
all: cmake_check_build_system
	$(CMAKE_COMMAND) -E cmake_progress_start /home/alessio/Codice/C++/cpp11learn/CMakeFiles /home/alessio/Codice/C++/cpp11learn/CMakeFiles/progress.marks
	$(MAKE) -f CMakeFiles/Makefile2 all
	$(CMAKE_COMMAND) -E cmake_progress_start /home/alessio/Codice/C++/cpp11learn/CMakeFiles 0
.PHONY : all

# The main clean target
clean:
	$(MAKE) -f CMakeFiles/Makefile2 clean
.PHONY : clean

# The main clean target
clean/fast: clean

.PHONY : clean/fast

# Prepare targets for installation.
preinstall: all
	$(MAKE) -f CMakeFiles/Makefile2 preinstall
.PHONY : preinstall

# Prepare targets for installation.
preinstall/fast:
	$(MAKE) -f CMakeFiles/Makefile2 preinstall
.PHONY : preinstall/fast

# clear depends
depend:
	$(CMAKE_COMMAND) -H$(CMAKE_SOURCE_DIR) -B$(CMAKE_BINARY_DIR) --check-build-system CMakeFiles/Makefile.cmake 1
.PHONY : depend

#=============================================================================
# Target rules for targets named Cpp11Learn

# Build rule for target.
Cpp11Learn: cmake_check_build_system
	$(MAKE) -f CMakeFiles/Makefile2 Cpp11Learn
.PHONY : Cpp11Learn

# fast build rule for target.
Cpp11Learn/fast:
	$(MAKE) -f CMakeFiles/Cpp11Learn.dir/build.make CMakeFiles/Cpp11Learn.dir/build
.PHONY : Cpp11Learn/fast

src/ClassTemplateSpec.o: src/ClassTemplateSpec.cpp.o

.PHONY : src/ClassTemplateSpec.o

# target to build an object file
src/ClassTemplateSpec.cpp.o:
	$(MAKE) -f CMakeFiles/Cpp11Learn.dir/build.make CMakeFiles/Cpp11Learn.dir/src/ClassTemplateSpec.cpp.o
.PHONY : src/ClassTemplateSpec.cpp.o

src/ClassTemplateSpec.i: src/ClassTemplateSpec.cpp.i

.PHONY : src/ClassTemplateSpec.i

# target to preprocess a source file
src/ClassTemplateSpec.cpp.i:
	$(MAKE) -f CMakeFiles/Cpp11Learn.dir/build.make CMakeFiles/Cpp11Learn.dir/src/ClassTemplateSpec.cpp.i
.PHONY : src/ClassTemplateSpec.cpp.i

src/ClassTemplateSpec.s: src/ClassTemplateSpec.cpp.s

.PHONY : src/ClassTemplateSpec.s

# target to generate assembly for a file
src/ClassTemplateSpec.cpp.s:
	$(MAKE) -f CMakeFiles/Cpp11Learn.dir/build.make CMakeFiles/Cpp11Learn.dir/src/ClassTemplateSpec.cpp.s
.PHONY : src/ClassTemplateSpec.cpp.s

src/Containers.o: src/Containers.cpp.o

.PHONY : src/Containers.o

# target to build an object file
src/Containers.cpp.o:
	$(MAKE) -f CMakeFiles/Cpp11Learn.dir/build.make CMakeFiles/Cpp11Learn.dir/src/Containers.cpp.o
.PHONY : src/Containers.cpp.o

src/Containers.i: src/Containers.cpp.i

.PHONY : src/Containers.i

# target to preprocess a source file
src/Containers.cpp.i:
	$(MAKE) -f CMakeFiles/Cpp11Learn.dir/build.make CMakeFiles/Cpp11Learn.dir/src/Containers.cpp.i
.PHONY : src/Containers.cpp.i

src/Containers.s: src/Containers.cpp.s

.PHONY : src/Containers.s

# target to generate assembly for a file
src/Containers.cpp.s:
	$(MAKE) -f CMakeFiles/Cpp11Learn.dir/build.make CMakeFiles/Cpp11Learn.dir/src/Containers.cpp.s
.PHONY : src/Containers.cpp.s

src/DefaultClass.o: src/DefaultClass.cpp.o

.PHONY : src/DefaultClass.o

# target to build an object file
src/DefaultClass.cpp.o:
	$(MAKE) -f CMakeFiles/Cpp11Learn.dir/build.make CMakeFiles/Cpp11Learn.dir/src/DefaultClass.cpp.o
.PHONY : src/DefaultClass.cpp.o

src/DefaultClass.i: src/DefaultClass.cpp.i

.PHONY : src/DefaultClass.i

# target to preprocess a source file
src/DefaultClass.cpp.i:
	$(MAKE) -f CMakeFiles/Cpp11Learn.dir/build.make CMakeFiles/Cpp11Learn.dir/src/DefaultClass.cpp.i
.PHONY : src/DefaultClass.cpp.i

src/DefaultClass.s: src/DefaultClass.cpp.s

.PHONY : src/DefaultClass.s

# target to generate assembly for a file
src/DefaultClass.cpp.s:
	$(MAKE) -f CMakeFiles/Cpp11Learn.dir/build.make CMakeFiles/Cpp11Learn.dir/src/DefaultClass.cpp.s
.PHONY : src/DefaultClass.cpp.s

src/Inheritance.o: src/Inheritance.cpp.o

.PHONY : src/Inheritance.o

# target to build an object file
src/Inheritance.cpp.o:
	$(MAKE) -f CMakeFiles/Cpp11Learn.dir/build.make CMakeFiles/Cpp11Learn.dir/src/Inheritance.cpp.o
.PHONY : src/Inheritance.cpp.o

src/Inheritance.i: src/Inheritance.cpp.i

.PHONY : src/Inheritance.i

# target to preprocess a source file
src/Inheritance.cpp.i:
	$(MAKE) -f CMakeFiles/Cpp11Learn.dir/build.make CMakeFiles/Cpp11Learn.dir/src/Inheritance.cpp.i
.PHONY : src/Inheritance.cpp.i

src/Inheritance.s: src/Inheritance.cpp.s

.PHONY : src/Inheritance.s

# target to generate assembly for a file
src/Inheritance.cpp.s:
	$(MAKE) -f CMakeFiles/Cpp11Learn.dir/build.make CMakeFiles/Cpp11Learn.dir/src/Inheritance.cpp.s
.PHONY : src/Inheritance.cpp.s

src/InitializerList.o: src/InitializerList.cpp.o

.PHONY : src/InitializerList.o

# target to build an object file
src/InitializerList.cpp.o:
	$(MAKE) -f CMakeFiles/Cpp11Learn.dir/build.make CMakeFiles/Cpp11Learn.dir/src/InitializerList.cpp.o
.PHONY : src/InitializerList.cpp.o

src/InitializerList.i: src/InitializerList.cpp.i

.PHONY : src/InitializerList.i

# target to preprocess a source file
src/InitializerList.cpp.i:
	$(MAKE) -f CMakeFiles/Cpp11Learn.dir/build.make CMakeFiles/Cpp11Learn.dir/src/InitializerList.cpp.i
.PHONY : src/InitializerList.cpp.i

src/InitializerList.s: src/InitializerList.cpp.s

.PHONY : src/InitializerList.s

# target to generate assembly for a file
src/InitializerList.cpp.s:
	$(MAKE) -f CMakeFiles/Cpp11Learn.dir/build.make CMakeFiles/Cpp11Learn.dir/src/InitializerList.cpp.s
.PHONY : src/InitializerList.cpp.s

src/OperatorOverloading.o: src/OperatorOverloading.cpp.o

.PHONY : src/OperatorOverloading.o

# target to build an object file
src/OperatorOverloading.cpp.o:
	$(MAKE) -f CMakeFiles/Cpp11Learn.dir/build.make CMakeFiles/Cpp11Learn.dir/src/OperatorOverloading.cpp.o
.PHONY : src/OperatorOverloading.cpp.o

src/OperatorOverloading.i: src/OperatorOverloading.cpp.i

.PHONY : src/OperatorOverloading.i

# target to preprocess a source file
src/OperatorOverloading.cpp.i:
	$(MAKE) -f CMakeFiles/Cpp11Learn.dir/build.make CMakeFiles/Cpp11Learn.dir/src/OperatorOverloading.cpp.i
.PHONY : src/OperatorOverloading.cpp.i

src/OperatorOverloading.s: src/OperatorOverloading.cpp.s

.PHONY : src/OperatorOverloading.s

# target to generate assembly for a file
src/OperatorOverloading.cpp.s:
	$(MAKE) -f CMakeFiles/Cpp11Learn.dir/build.make CMakeFiles/Cpp11Learn.dir/src/OperatorOverloading.cpp.s
.PHONY : src/OperatorOverloading.cpp.s

src/TextFile.o: src/TextFile.cpp.o

.PHONY : src/TextFile.o

# target to build an object file
src/TextFile.cpp.o:
	$(MAKE) -f CMakeFiles/Cpp11Learn.dir/build.make CMakeFiles/Cpp11Learn.dir/src/TextFile.cpp.o
.PHONY : src/TextFile.cpp.o

src/TextFile.i: src/TextFile.cpp.i

.PHONY : src/TextFile.i

# target to preprocess a source file
src/TextFile.cpp.i:
	$(MAKE) -f CMakeFiles/Cpp11Learn.dir/build.make CMakeFiles/Cpp11Learn.dir/src/TextFile.cpp.i
.PHONY : src/TextFile.cpp.i

src/TextFile.s: src/TextFile.cpp.s

.PHONY : src/TextFile.s

# target to generate assembly for a file
src/TextFile.cpp.s:
	$(MAKE) -f CMakeFiles/Cpp11Learn.dir/build.make CMakeFiles/Cpp11Learn.dir/src/TextFile.cpp.s
.PHONY : src/TextFile.cpp.s

src/main.o: src/main.cpp.o

.PHONY : src/main.o

# target to build an object file
src/main.cpp.o:
	$(MAKE) -f CMakeFiles/Cpp11Learn.dir/build.make CMakeFiles/Cpp11Learn.dir/src/main.cpp.o
.PHONY : src/main.cpp.o

src/main.i: src/main.cpp.i

.PHONY : src/main.i

# target to preprocess a source file
src/main.cpp.i:
	$(MAKE) -f CMakeFiles/Cpp11Learn.dir/build.make CMakeFiles/Cpp11Learn.dir/src/main.cpp.i
.PHONY : src/main.cpp.i

src/main.s: src/main.cpp.s

.PHONY : src/main.s

# target to generate assembly for a file
src/main.cpp.s:
	$(MAKE) -f CMakeFiles/Cpp11Learn.dir/build.make CMakeFiles/Cpp11Learn.dir/src/main.cpp.s
.PHONY : src/main.cpp.s

# Help Target
help:
	@echo "The following are some of the valid targets for this Makefile:"
	@echo "... all (the default if no target is provided)"
	@echo "... clean"
	@echo "... depend"
	@echo "... edit_cache"
	@echo "... rebuild_cache"
	@echo "... Cpp11Learn"
	@echo "... src/ClassTemplateSpec.o"
	@echo "... src/ClassTemplateSpec.i"
	@echo "... src/ClassTemplateSpec.s"
	@echo "... src/Containers.o"
	@echo "... src/Containers.i"
	@echo "... src/Containers.s"
	@echo "... src/DefaultClass.o"
	@echo "... src/DefaultClass.i"
	@echo "... src/DefaultClass.s"
	@echo "... src/Inheritance.o"
	@echo "... src/Inheritance.i"
	@echo "... src/Inheritance.s"
	@echo "... src/InitializerList.o"
	@echo "... src/InitializerList.i"
	@echo "... src/InitializerList.s"
	@echo "... src/OperatorOverloading.o"
	@echo "... src/OperatorOverloading.i"
	@echo "... src/OperatorOverloading.s"
	@echo "... src/TextFile.o"
	@echo "... src/TextFile.i"
	@echo "... src/TextFile.s"
	@echo "... src/main.o"
	@echo "... src/main.i"
	@echo "... src/main.s"
.PHONY : help



#=============================================================================
# Special targets to cleanup operation of make.

# Special rule to run CMake to check the build system integrity.
# No rule that depends on this can have commands that come from listfiles
# because they might be regenerated.
cmake_check_build_system:
	$(CMAKE_COMMAND) -H$(CMAKE_SOURCE_DIR) -B$(CMAKE_BINARY_DIR) --check-build-system CMakeFiles/Makefile.cmake 0
.PHONY : cmake_check_build_system

