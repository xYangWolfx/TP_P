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
CMAKE_COMMAND = /home/miguel/.local/share/JetBrains/Toolbox/apps/CLion/ch-0/211.7142.21/bin/cmake/linux/bin/cmake

# The command to remove a file.
RM = /home/miguel/.local/share/JetBrains/Toolbox/apps/CLion/ch-0/211.7142.21/bin/cmake/linux/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/miguel/CLionProjects/tpSemaforo

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/miguel/CLionProjects/tpSemaforo/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/semaforotp.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/semaforotp.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/semaforotp.dir/flags.make

CMakeFiles/semaforotp.dir/sources/main.c.o: CMakeFiles/semaforotp.dir/flags.make
CMakeFiles/semaforotp.dir/sources/main.c.o: ../sources/main.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/miguel/CLionProjects/tpSemaforo/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/semaforotp.dir/sources/main.c.o"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/semaforotp.dir/sources/main.c.o -c /home/miguel/CLionProjects/tpSemaforo/sources/main.c

CMakeFiles/semaforotp.dir/sources/main.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/semaforotp.dir/sources/main.c.i"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/miguel/CLionProjects/tpSemaforo/sources/main.c > CMakeFiles/semaforotp.dir/sources/main.c.i

CMakeFiles/semaforotp.dir/sources/main.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/semaforotp.dir/sources/main.c.s"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/miguel/CLionProjects/tpSemaforo/sources/main.c -o CMakeFiles/semaforotp.dir/sources/main.c.s

CMakeFiles/semaforotp.dir/sources/board.c.o: CMakeFiles/semaforotp.dir/flags.make
CMakeFiles/semaforotp.dir/sources/board.c.o: ../sources/board.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/miguel/CLionProjects/tpSemaforo/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building C object CMakeFiles/semaforotp.dir/sources/board.c.o"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/semaforotp.dir/sources/board.c.o -c /home/miguel/CLionProjects/tpSemaforo/sources/board.c

CMakeFiles/semaforotp.dir/sources/board.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/semaforotp.dir/sources/board.c.i"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/miguel/CLionProjects/tpSemaforo/sources/board.c > CMakeFiles/semaforotp.dir/sources/board.c.i

CMakeFiles/semaforotp.dir/sources/board.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/semaforotp.dir/sources/board.c.s"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/miguel/CLionProjects/tpSemaforo/sources/board.c -o CMakeFiles/semaforotp.dir/sources/board.c.s

CMakeFiles/semaforotp.dir/sources/boardAlloc.c.o: CMakeFiles/semaforotp.dir/flags.make
CMakeFiles/semaforotp.dir/sources/boardAlloc.c.o: ../sources/boardAlloc.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/miguel/CLionProjects/tpSemaforo/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building C object CMakeFiles/semaforotp.dir/sources/boardAlloc.c.o"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/semaforotp.dir/sources/boardAlloc.c.o -c /home/miguel/CLionProjects/tpSemaforo/sources/boardAlloc.c

CMakeFiles/semaforotp.dir/sources/boardAlloc.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/semaforotp.dir/sources/boardAlloc.c.i"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/miguel/CLionProjects/tpSemaforo/sources/boardAlloc.c > CMakeFiles/semaforotp.dir/sources/boardAlloc.c.i

CMakeFiles/semaforotp.dir/sources/boardAlloc.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/semaforotp.dir/sources/boardAlloc.c.s"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/miguel/CLionProjects/tpSemaforo/sources/boardAlloc.c -o CMakeFiles/semaforotp.dir/sources/boardAlloc.c.s

CMakeFiles/semaforotp.dir/sources/game.c.o: CMakeFiles/semaforotp.dir/flags.make
CMakeFiles/semaforotp.dir/sources/game.c.o: ../sources/game.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/miguel/CLionProjects/tpSemaforo/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building C object CMakeFiles/semaforotp.dir/sources/game.c.o"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/semaforotp.dir/sources/game.c.o -c /home/miguel/CLionProjects/tpSemaforo/sources/game.c

CMakeFiles/semaforotp.dir/sources/game.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/semaforotp.dir/sources/game.c.i"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/miguel/CLionProjects/tpSemaforo/sources/game.c > CMakeFiles/semaforotp.dir/sources/game.c.i

CMakeFiles/semaforotp.dir/sources/game.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/semaforotp.dir/sources/game.c.s"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/miguel/CLionProjects/tpSemaforo/sources/game.c -o CMakeFiles/semaforotp.dir/sources/game.c.s

CMakeFiles/semaforotp.dir/sources/play.c.o: CMakeFiles/semaforotp.dir/flags.make
CMakeFiles/semaforotp.dir/sources/play.c.o: ../sources/play.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/miguel/CLionProjects/tpSemaforo/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Building C object CMakeFiles/semaforotp.dir/sources/play.c.o"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/semaforotp.dir/sources/play.c.o -c /home/miguel/CLionProjects/tpSemaforo/sources/play.c

CMakeFiles/semaforotp.dir/sources/play.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/semaforotp.dir/sources/play.c.i"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/miguel/CLionProjects/tpSemaforo/sources/play.c > CMakeFiles/semaforotp.dir/sources/play.c.i

CMakeFiles/semaforotp.dir/sources/play.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/semaforotp.dir/sources/play.c.s"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/miguel/CLionProjects/tpSemaforo/sources/play.c -o CMakeFiles/semaforotp.dir/sources/play.c.s

CMakeFiles/semaforotp.dir/sources/playMenu.c.o: CMakeFiles/semaforotp.dir/flags.make
CMakeFiles/semaforotp.dir/sources/playMenu.c.o: ../sources/playMenu.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/miguel/CLionProjects/tpSemaforo/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_6) "Building C object CMakeFiles/semaforotp.dir/sources/playMenu.c.o"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/semaforotp.dir/sources/playMenu.c.o -c /home/miguel/CLionProjects/tpSemaforo/sources/playMenu.c

CMakeFiles/semaforotp.dir/sources/playMenu.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/semaforotp.dir/sources/playMenu.c.i"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/miguel/CLionProjects/tpSemaforo/sources/playMenu.c > CMakeFiles/semaforotp.dir/sources/playMenu.c.i

CMakeFiles/semaforotp.dir/sources/playMenu.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/semaforotp.dir/sources/playMenu.c.s"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/miguel/CLionProjects/tpSemaforo/sources/playMenu.c -o CMakeFiles/semaforotp.dir/sources/playMenu.c.s

CMakeFiles/semaforotp.dir/sources/selectMenu.c.o: CMakeFiles/semaforotp.dir/flags.make
CMakeFiles/semaforotp.dir/sources/selectMenu.c.o: ../sources/selectMenu.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/miguel/CLionProjects/tpSemaforo/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_7) "Building C object CMakeFiles/semaforotp.dir/sources/selectMenu.c.o"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/semaforotp.dir/sources/selectMenu.c.o -c /home/miguel/CLionProjects/tpSemaforo/sources/selectMenu.c

CMakeFiles/semaforotp.dir/sources/selectMenu.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/semaforotp.dir/sources/selectMenu.c.i"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/miguel/CLionProjects/tpSemaforo/sources/selectMenu.c > CMakeFiles/semaforotp.dir/sources/selectMenu.c.i

CMakeFiles/semaforotp.dir/sources/selectMenu.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/semaforotp.dir/sources/selectMenu.c.s"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/miguel/CLionProjects/tpSemaforo/sources/selectMenu.c -o CMakeFiles/semaforotp.dir/sources/selectMenu.c.s

CMakeFiles/semaforotp.dir/sources/utils.c.o: CMakeFiles/semaforotp.dir/flags.make
CMakeFiles/semaforotp.dir/sources/utils.c.o: ../sources/utils.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/miguel/CLionProjects/tpSemaforo/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_8) "Building C object CMakeFiles/semaforotp.dir/sources/utils.c.o"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/semaforotp.dir/sources/utils.c.o -c /home/miguel/CLionProjects/tpSemaforo/sources/utils.c

CMakeFiles/semaforotp.dir/sources/utils.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/semaforotp.dir/sources/utils.c.i"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/miguel/CLionProjects/tpSemaforo/sources/utils.c > CMakeFiles/semaforotp.dir/sources/utils.c.i

CMakeFiles/semaforotp.dir/sources/utils.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/semaforotp.dir/sources/utils.c.s"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/miguel/CLionProjects/tpSemaforo/sources/utils.c -o CMakeFiles/semaforotp.dir/sources/utils.c.s

CMakeFiles/semaforotp.dir/sources/files.c.o: CMakeFiles/semaforotp.dir/flags.make
CMakeFiles/semaforotp.dir/sources/files.c.o: ../sources/files.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/miguel/CLionProjects/tpSemaforo/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_9) "Building C object CMakeFiles/semaforotp.dir/sources/files.c.o"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/semaforotp.dir/sources/files.c.o -c /home/miguel/CLionProjects/tpSemaforo/sources/files.c

CMakeFiles/semaforotp.dir/sources/files.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/semaforotp.dir/sources/files.c.i"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/miguel/CLionProjects/tpSemaforo/sources/files.c > CMakeFiles/semaforotp.dir/sources/files.c.i

CMakeFiles/semaforotp.dir/sources/files.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/semaforotp.dir/sources/files.c.s"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/miguel/CLionProjects/tpSemaforo/sources/files.c -o CMakeFiles/semaforotp.dir/sources/files.c.s

CMakeFiles/semaforotp.dir/sources/autoBotMenu.c.o: CMakeFiles/semaforotp.dir/flags.make
CMakeFiles/semaforotp.dir/sources/autoBotMenu.c.o: ../sources/autoBotMenu.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/miguel/CLionProjects/tpSemaforo/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_10) "Building C object CMakeFiles/semaforotp.dir/sources/autoBotMenu.c.o"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/semaforotp.dir/sources/autoBotMenu.c.o -c /home/miguel/CLionProjects/tpSemaforo/sources/autoBotMenu.c

CMakeFiles/semaforotp.dir/sources/autoBotMenu.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/semaforotp.dir/sources/autoBotMenu.c.i"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/miguel/CLionProjects/tpSemaforo/sources/autoBotMenu.c > CMakeFiles/semaforotp.dir/sources/autoBotMenu.c.i

CMakeFiles/semaforotp.dir/sources/autoBotMenu.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/semaforotp.dir/sources/autoBotMenu.c.s"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/miguel/CLionProjects/tpSemaforo/sources/autoBotMenu.c -o CMakeFiles/semaforotp.dir/sources/autoBotMenu.c.s

CMakeFiles/semaforotp.dir/sources/autoBotPlay.c.o: CMakeFiles/semaforotp.dir/flags.make
CMakeFiles/semaforotp.dir/sources/autoBotPlay.c.o: ../sources/autoBotPlay.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/miguel/CLionProjects/tpSemaforo/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_11) "Building C object CMakeFiles/semaforotp.dir/sources/autoBotPlay.c.o"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/semaforotp.dir/sources/autoBotPlay.c.o -c /home/miguel/CLionProjects/tpSemaforo/sources/autoBotPlay.c

CMakeFiles/semaforotp.dir/sources/autoBotPlay.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/semaforotp.dir/sources/autoBotPlay.c.i"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/miguel/CLionProjects/tpSemaforo/sources/autoBotPlay.c > CMakeFiles/semaforotp.dir/sources/autoBotPlay.c.i

CMakeFiles/semaforotp.dir/sources/autoBotPlay.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/semaforotp.dir/sources/autoBotPlay.c.s"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/miguel/CLionProjects/tpSemaforo/sources/autoBotPlay.c -o CMakeFiles/semaforotp.dir/sources/autoBotPlay.c.s

# Object files for target semaforotp
semaforotp_OBJECTS = \
"CMakeFiles/semaforotp.dir/sources/main.c.o" \
"CMakeFiles/semaforotp.dir/sources/board.c.o" \
"CMakeFiles/semaforotp.dir/sources/boardAlloc.c.o" \
"CMakeFiles/semaforotp.dir/sources/game.c.o" \
"CMakeFiles/semaforotp.dir/sources/play.c.o" \
"CMakeFiles/semaforotp.dir/sources/playMenu.c.o" \
"CMakeFiles/semaforotp.dir/sources/selectMenu.c.o" \
"CMakeFiles/semaforotp.dir/sources/utils.c.o" \
"CMakeFiles/semaforotp.dir/sources/files.c.o" \
"CMakeFiles/semaforotp.dir/sources/autoBotMenu.c.o" \
"CMakeFiles/semaforotp.dir/sources/autoBotPlay.c.o"

# External object files for target semaforotp
semaforotp_EXTERNAL_OBJECTS =

semaforotp: CMakeFiles/semaforotp.dir/sources/main.c.o
semaforotp: CMakeFiles/semaforotp.dir/sources/board.c.o
semaforotp: CMakeFiles/semaforotp.dir/sources/boardAlloc.c.o
semaforotp: CMakeFiles/semaforotp.dir/sources/game.c.o
semaforotp: CMakeFiles/semaforotp.dir/sources/play.c.o
semaforotp: CMakeFiles/semaforotp.dir/sources/playMenu.c.o
semaforotp: CMakeFiles/semaforotp.dir/sources/selectMenu.c.o
semaforotp: CMakeFiles/semaforotp.dir/sources/utils.c.o
semaforotp: CMakeFiles/semaforotp.dir/sources/files.c.o
semaforotp: CMakeFiles/semaforotp.dir/sources/autoBotMenu.c.o
semaforotp: CMakeFiles/semaforotp.dir/sources/autoBotPlay.c.o
semaforotp: CMakeFiles/semaforotp.dir/build.make
semaforotp: CMakeFiles/semaforotp.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/miguel/CLionProjects/tpSemaforo/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_12) "Linking C executable semaforotp"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/semaforotp.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/semaforotp.dir/build: semaforotp

.PHONY : CMakeFiles/semaforotp.dir/build

CMakeFiles/semaforotp.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/semaforotp.dir/cmake_clean.cmake
.PHONY : CMakeFiles/semaforotp.dir/clean

CMakeFiles/semaforotp.dir/depend:
	cd /home/miguel/CLionProjects/tpSemaforo/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/miguel/CLionProjects/tpSemaforo /home/miguel/CLionProjects/tpSemaforo /home/miguel/CLionProjects/tpSemaforo/cmake-build-debug /home/miguel/CLionProjects/tpSemaforo/cmake-build-debug /home/miguel/CLionProjects/tpSemaforo/cmake-build-debug/CMakeFiles/semaforotp.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/semaforotp.dir/depend

