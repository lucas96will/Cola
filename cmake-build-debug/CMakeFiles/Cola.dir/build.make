# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.19

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
CMAKE_COMMAND = /opt/clion-2021.1/bin/cmake/linux/bin/cmake

# The command to remove a file.
RM = /opt/clion-2021.1/bin/cmake/linux/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/lucas/CLionProjects/Cola

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/lucas/CLionProjects/Cola/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/Cola.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/Cola.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/Cola.dir/flags.make

CMakeFiles/Cola.dir/testing.c.o: CMakeFiles/Cola.dir/flags.make
CMakeFiles/Cola.dir/testing.c.o: ../testing.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/lucas/CLionProjects/Cola/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/Cola.dir/testing.c.o"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/Cola.dir/testing.c.o -c /home/lucas/CLionProjects/Cola/testing.c

CMakeFiles/Cola.dir/testing.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/Cola.dir/testing.c.i"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/lucas/CLionProjects/Cola/testing.c > CMakeFiles/Cola.dir/testing.c.i

CMakeFiles/Cola.dir/testing.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/Cola.dir/testing.c.s"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/lucas/CLionProjects/Cola/testing.c -o CMakeFiles/Cola.dir/testing.c.s

CMakeFiles/Cola.dir/cola.c.o: CMakeFiles/Cola.dir/flags.make
CMakeFiles/Cola.dir/cola.c.o: ../cola.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/lucas/CLionProjects/Cola/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building C object CMakeFiles/Cola.dir/cola.c.o"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/Cola.dir/cola.c.o -c /home/lucas/CLionProjects/Cola/cola.c

CMakeFiles/Cola.dir/cola.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/Cola.dir/cola.c.i"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/lucas/CLionProjects/Cola/cola.c > CMakeFiles/Cola.dir/cola.c.i

CMakeFiles/Cola.dir/cola.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/Cola.dir/cola.c.s"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/lucas/CLionProjects/Cola/cola.c -o CMakeFiles/Cola.dir/cola.c.s

CMakeFiles/Cola.dir/pruebas_cola.c.o: CMakeFiles/Cola.dir/flags.make
CMakeFiles/Cola.dir/pruebas_cola.c.o: ../pruebas_cola.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/lucas/CLionProjects/Cola/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building C object CMakeFiles/Cola.dir/pruebas_cola.c.o"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/Cola.dir/pruebas_cola.c.o -c /home/lucas/CLionProjects/Cola/pruebas_cola.c

CMakeFiles/Cola.dir/pruebas_cola.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/Cola.dir/pruebas_cola.c.i"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/lucas/CLionProjects/Cola/pruebas_cola.c > CMakeFiles/Cola.dir/pruebas_cola.c.i

CMakeFiles/Cola.dir/pruebas_cola.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/Cola.dir/pruebas_cola.c.s"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/lucas/CLionProjects/Cola/pruebas_cola.c -o CMakeFiles/Cola.dir/pruebas_cola.c.s

CMakeFiles/Cola.dir/nodo.c.o: CMakeFiles/Cola.dir/flags.make
CMakeFiles/Cola.dir/nodo.c.o: ../nodo.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/lucas/CLionProjects/Cola/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building C object CMakeFiles/Cola.dir/nodo.c.o"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/Cola.dir/nodo.c.o -c /home/lucas/CLionProjects/Cola/nodo.c

CMakeFiles/Cola.dir/nodo.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/Cola.dir/nodo.c.i"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/lucas/CLionProjects/Cola/nodo.c > CMakeFiles/Cola.dir/nodo.c.i

CMakeFiles/Cola.dir/nodo.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/Cola.dir/nodo.c.s"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/lucas/CLionProjects/Cola/nodo.c -o CMakeFiles/Cola.dir/nodo.c.s

# Object files for target Cola
Cola_OBJECTS = \
"CMakeFiles/Cola.dir/testing.c.o" \
"CMakeFiles/Cola.dir/cola.c.o" \
"CMakeFiles/Cola.dir/pruebas_cola.c.o" \
"CMakeFiles/Cola.dir/nodo.c.o"

# External object files for target Cola
Cola_EXTERNAL_OBJECTS =

Cola: CMakeFiles/Cola.dir/testing.c.o
Cola: CMakeFiles/Cola.dir/cola.c.o
Cola: CMakeFiles/Cola.dir/pruebas_cola.c.o
Cola: CMakeFiles/Cola.dir/nodo.c.o
Cola: CMakeFiles/Cola.dir/build.make
Cola: CMakeFiles/Cola.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/lucas/CLionProjects/Cola/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Linking C executable Cola"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/Cola.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/Cola.dir/build: Cola

.PHONY : CMakeFiles/Cola.dir/build

CMakeFiles/Cola.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/Cola.dir/cmake_clean.cmake
.PHONY : CMakeFiles/Cola.dir/clean

CMakeFiles/Cola.dir/depend:
	cd /home/lucas/CLionProjects/Cola/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/lucas/CLionProjects/Cola /home/lucas/CLionProjects/Cola /home/lucas/CLionProjects/Cola/cmake-build-debug /home/lucas/CLionProjects/Cola/cmake-build-debug /home/lucas/CLionProjects/Cola/cmake-build-debug/CMakeFiles/Cola.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/Cola.dir/depend

