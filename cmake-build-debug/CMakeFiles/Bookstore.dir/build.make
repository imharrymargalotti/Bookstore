# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.8

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
CMAKE_COMMAND = /Applications/CLion.app/Contents/bin/cmake/bin/cmake

# The command to remove a file.
RM = /Applications/CLion.app/Contents/bin/cmake/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /Users/harrymargalotti/Desktop/Bookstore

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Users/harrymargalotti/Desktop/Bookstore/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/Bookstore.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/Bookstore.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/Bookstore.dir/flags.make

CMakeFiles/Bookstore.dir/PersonNode.cpp.o: CMakeFiles/Bookstore.dir/flags.make
CMakeFiles/Bookstore.dir/PersonNode.cpp.o: ../PersonNode.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/harrymargalotti/Desktop/Bookstore/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/Bookstore.dir/PersonNode.cpp.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/Bookstore.dir/PersonNode.cpp.o -c /Users/harrymargalotti/Desktop/Bookstore/PersonNode.cpp

CMakeFiles/Bookstore.dir/PersonNode.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Bookstore.dir/PersonNode.cpp.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/harrymargalotti/Desktop/Bookstore/PersonNode.cpp > CMakeFiles/Bookstore.dir/PersonNode.cpp.i

CMakeFiles/Bookstore.dir/PersonNode.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Bookstore.dir/PersonNode.cpp.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/harrymargalotti/Desktop/Bookstore/PersonNode.cpp -o CMakeFiles/Bookstore.dir/PersonNode.cpp.s

CMakeFiles/Bookstore.dir/PersonNode.cpp.o.requires:

.PHONY : CMakeFiles/Bookstore.dir/PersonNode.cpp.o.requires

CMakeFiles/Bookstore.dir/PersonNode.cpp.o.provides: CMakeFiles/Bookstore.dir/PersonNode.cpp.o.requires
	$(MAKE) -f CMakeFiles/Bookstore.dir/build.make CMakeFiles/Bookstore.dir/PersonNode.cpp.o.provides.build
.PHONY : CMakeFiles/Bookstore.dir/PersonNode.cpp.o.provides

CMakeFiles/Bookstore.dir/PersonNode.cpp.o.provides.build: CMakeFiles/Bookstore.dir/PersonNode.cpp.o


CMakeFiles/Bookstore.dir/book.cpp.o: CMakeFiles/Bookstore.dir/flags.make
CMakeFiles/Bookstore.dir/book.cpp.o: ../book.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/harrymargalotti/Desktop/Bookstore/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/Bookstore.dir/book.cpp.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/Bookstore.dir/book.cpp.o -c /Users/harrymargalotti/Desktop/Bookstore/book.cpp

CMakeFiles/Bookstore.dir/book.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Bookstore.dir/book.cpp.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/harrymargalotti/Desktop/Bookstore/book.cpp > CMakeFiles/Bookstore.dir/book.cpp.i

CMakeFiles/Bookstore.dir/book.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Bookstore.dir/book.cpp.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/harrymargalotti/Desktop/Bookstore/book.cpp -o CMakeFiles/Bookstore.dir/book.cpp.s

CMakeFiles/Bookstore.dir/book.cpp.o.requires:

.PHONY : CMakeFiles/Bookstore.dir/book.cpp.o.requires

CMakeFiles/Bookstore.dir/book.cpp.o.provides: CMakeFiles/Bookstore.dir/book.cpp.o.requires
	$(MAKE) -f CMakeFiles/Bookstore.dir/build.make CMakeFiles/Bookstore.dir/book.cpp.o.provides.build
.PHONY : CMakeFiles/Bookstore.dir/book.cpp.o.provides

CMakeFiles/Bookstore.dir/book.cpp.o.provides.build: CMakeFiles/Bookstore.dir/book.cpp.o


CMakeFiles/Bookstore.dir/inventory.cpp.o: CMakeFiles/Bookstore.dir/flags.make
CMakeFiles/Bookstore.dir/inventory.cpp.o: ../inventory.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/harrymargalotti/Desktop/Bookstore/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object CMakeFiles/Bookstore.dir/inventory.cpp.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/Bookstore.dir/inventory.cpp.o -c /Users/harrymargalotti/Desktop/Bookstore/inventory.cpp

CMakeFiles/Bookstore.dir/inventory.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Bookstore.dir/inventory.cpp.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/harrymargalotti/Desktop/Bookstore/inventory.cpp > CMakeFiles/Bookstore.dir/inventory.cpp.i

CMakeFiles/Bookstore.dir/inventory.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Bookstore.dir/inventory.cpp.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/harrymargalotti/Desktop/Bookstore/inventory.cpp -o CMakeFiles/Bookstore.dir/inventory.cpp.s

CMakeFiles/Bookstore.dir/inventory.cpp.o.requires:

.PHONY : CMakeFiles/Bookstore.dir/inventory.cpp.o.requires

CMakeFiles/Bookstore.dir/inventory.cpp.o.provides: CMakeFiles/Bookstore.dir/inventory.cpp.o.requires
	$(MAKE) -f CMakeFiles/Bookstore.dir/build.make CMakeFiles/Bookstore.dir/inventory.cpp.o.provides.build
.PHONY : CMakeFiles/Bookstore.dir/inventory.cpp.o.provides

CMakeFiles/Bookstore.dir/inventory.cpp.o.provides.build: CMakeFiles/Bookstore.dir/inventory.cpp.o


CMakeFiles/Bookstore.dir/main.cpp.o: CMakeFiles/Bookstore.dir/flags.make
CMakeFiles/Bookstore.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/harrymargalotti/Desktop/Bookstore/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building CXX object CMakeFiles/Bookstore.dir/main.cpp.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/Bookstore.dir/main.cpp.o -c /Users/harrymargalotti/Desktop/Bookstore/main.cpp

CMakeFiles/Bookstore.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Bookstore.dir/main.cpp.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/harrymargalotti/Desktop/Bookstore/main.cpp > CMakeFiles/Bookstore.dir/main.cpp.i

CMakeFiles/Bookstore.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Bookstore.dir/main.cpp.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/harrymargalotti/Desktop/Bookstore/main.cpp -o CMakeFiles/Bookstore.dir/main.cpp.s

CMakeFiles/Bookstore.dir/main.cpp.o.requires:

.PHONY : CMakeFiles/Bookstore.dir/main.cpp.o.requires

CMakeFiles/Bookstore.dir/main.cpp.o.provides: CMakeFiles/Bookstore.dir/main.cpp.o.requires
	$(MAKE) -f CMakeFiles/Bookstore.dir/build.make CMakeFiles/Bookstore.dir/main.cpp.o.provides.build
.PHONY : CMakeFiles/Bookstore.dir/main.cpp.o.provides

CMakeFiles/Bookstore.dir/main.cpp.o.provides.build: CMakeFiles/Bookstore.dir/main.cpp.o


CMakeFiles/Bookstore.dir/bookList.cpp.o: CMakeFiles/Bookstore.dir/flags.make
CMakeFiles/Bookstore.dir/bookList.cpp.o: ../bookList.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/harrymargalotti/Desktop/Bookstore/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Building CXX object CMakeFiles/Bookstore.dir/bookList.cpp.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/Bookstore.dir/bookList.cpp.o -c /Users/harrymargalotti/Desktop/Bookstore/bookList.cpp

CMakeFiles/Bookstore.dir/bookList.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Bookstore.dir/bookList.cpp.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/harrymargalotti/Desktop/Bookstore/bookList.cpp > CMakeFiles/Bookstore.dir/bookList.cpp.i

CMakeFiles/Bookstore.dir/bookList.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Bookstore.dir/bookList.cpp.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/harrymargalotti/Desktop/Bookstore/bookList.cpp -o CMakeFiles/Bookstore.dir/bookList.cpp.s

CMakeFiles/Bookstore.dir/bookList.cpp.o.requires:

.PHONY : CMakeFiles/Bookstore.dir/bookList.cpp.o.requires

CMakeFiles/Bookstore.dir/bookList.cpp.o.provides: CMakeFiles/Bookstore.dir/bookList.cpp.o.requires
	$(MAKE) -f CMakeFiles/Bookstore.dir/build.make CMakeFiles/Bookstore.dir/bookList.cpp.o.provides.build
.PHONY : CMakeFiles/Bookstore.dir/bookList.cpp.o.provides

CMakeFiles/Bookstore.dir/bookList.cpp.o.provides.build: CMakeFiles/Bookstore.dir/bookList.cpp.o


CMakeFiles/Bookstore.dir/tester.cpp.o: CMakeFiles/Bookstore.dir/flags.make
CMakeFiles/Bookstore.dir/tester.cpp.o: ../tester.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/harrymargalotti/Desktop/Bookstore/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_6) "Building CXX object CMakeFiles/Bookstore.dir/tester.cpp.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/Bookstore.dir/tester.cpp.o -c /Users/harrymargalotti/Desktop/Bookstore/tester.cpp

CMakeFiles/Bookstore.dir/tester.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Bookstore.dir/tester.cpp.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/harrymargalotti/Desktop/Bookstore/tester.cpp > CMakeFiles/Bookstore.dir/tester.cpp.i

CMakeFiles/Bookstore.dir/tester.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Bookstore.dir/tester.cpp.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/harrymargalotti/Desktop/Bookstore/tester.cpp -o CMakeFiles/Bookstore.dir/tester.cpp.s

CMakeFiles/Bookstore.dir/tester.cpp.o.requires:

.PHONY : CMakeFiles/Bookstore.dir/tester.cpp.o.requires

CMakeFiles/Bookstore.dir/tester.cpp.o.provides: CMakeFiles/Bookstore.dir/tester.cpp.o.requires
	$(MAKE) -f CMakeFiles/Bookstore.dir/build.make CMakeFiles/Bookstore.dir/tester.cpp.o.provides.build
.PHONY : CMakeFiles/Bookstore.dir/tester.cpp.o.provides

CMakeFiles/Bookstore.dir/tester.cpp.o.provides.build: CMakeFiles/Bookstore.dir/tester.cpp.o


# Object files for target Bookstore
Bookstore_OBJECTS = \
"CMakeFiles/Bookstore.dir/PersonNode.cpp.o" \
"CMakeFiles/Bookstore.dir/book.cpp.o" \
"CMakeFiles/Bookstore.dir/inventory.cpp.o" \
"CMakeFiles/Bookstore.dir/main.cpp.o" \
"CMakeFiles/Bookstore.dir/bookList.cpp.o" \
"CMakeFiles/Bookstore.dir/tester.cpp.o"

# External object files for target Bookstore
Bookstore_EXTERNAL_OBJECTS =

../Bookstore: CMakeFiles/Bookstore.dir/PersonNode.cpp.o
../Bookstore: CMakeFiles/Bookstore.dir/book.cpp.o
../Bookstore: CMakeFiles/Bookstore.dir/inventory.cpp.o
../Bookstore: CMakeFiles/Bookstore.dir/main.cpp.o
../Bookstore: CMakeFiles/Bookstore.dir/bookList.cpp.o
../Bookstore: CMakeFiles/Bookstore.dir/tester.cpp.o
../Bookstore: CMakeFiles/Bookstore.dir/build.make
../Bookstore: CMakeFiles/Bookstore.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/Users/harrymargalotti/Desktop/Bookstore/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_7) "Linking CXX executable ../Bookstore"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/Bookstore.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/Bookstore.dir/build: ../Bookstore

.PHONY : CMakeFiles/Bookstore.dir/build

CMakeFiles/Bookstore.dir/requires: CMakeFiles/Bookstore.dir/PersonNode.cpp.o.requires
CMakeFiles/Bookstore.dir/requires: CMakeFiles/Bookstore.dir/book.cpp.o.requires
CMakeFiles/Bookstore.dir/requires: CMakeFiles/Bookstore.dir/inventory.cpp.o.requires
CMakeFiles/Bookstore.dir/requires: CMakeFiles/Bookstore.dir/main.cpp.o.requires
CMakeFiles/Bookstore.dir/requires: CMakeFiles/Bookstore.dir/bookList.cpp.o.requires
CMakeFiles/Bookstore.dir/requires: CMakeFiles/Bookstore.dir/tester.cpp.o.requires

.PHONY : CMakeFiles/Bookstore.dir/requires

CMakeFiles/Bookstore.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/Bookstore.dir/cmake_clean.cmake
.PHONY : CMakeFiles/Bookstore.dir/clean

CMakeFiles/Bookstore.dir/depend:
	cd /Users/harrymargalotti/Desktop/Bookstore/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/harrymargalotti/Desktop/Bookstore /Users/harrymargalotti/Desktop/Bookstore /Users/harrymargalotti/Desktop/Bookstore/cmake-build-debug /Users/harrymargalotti/Desktop/Bookstore/cmake-build-debug /Users/harrymargalotti/Desktop/Bookstore/cmake-build-debug/CMakeFiles/Bookstore.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/Bookstore.dir/depend

