# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 3.15

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
CMAKE_COMMAND = C:\Users\aliss\AppData\Local\JetBrains\Toolbox\apps\CLion\ch-0\192.7142.39\bin\cmake\win\bin\cmake.exe

# The command to remove a file.
RM = C:\Users\aliss\AppData\Local\JetBrains\Toolbox\apps\CLion\ch-0\192.7142.39\bin\cmake\win\bin\cmake.exe -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = "F:\SoftwareProjects\CLionProjects\C++\Bibliography Management System"

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = "F:\SoftwareProjects\CLionProjects\C++\Bibliography Management System\cmake-build-debug"

# Include any dependencies generated for this target.
include CMakeFiles/Bibliography_Managment_System.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/Bibliography_Managment_System.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/Bibliography_Managment_System.dir/flags.make

CMakeFiles/Bibliography_Managment_System.dir/main.cpp.obj: CMakeFiles/Bibliography_Managment_System.dir/flags.make
CMakeFiles/Bibliography_Managment_System.dir/main.cpp.obj: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="F:\SoftwareProjects\CLionProjects\C++\Bibliography Management System\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/Bibliography_Managment_System.dir/main.cpp.obj"
	C:\PROGRA~1\MINGW-~1\X86_64~1.0-P\mingw64\bin\G__~1.EXE  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\Bibliography_Managment_System.dir\main.cpp.obj -c "F:\SoftwareProjects\CLionProjects\C++\Bibliography Management System\main.cpp"

CMakeFiles/Bibliography_Managment_System.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Bibliography_Managment_System.dir/main.cpp.i"
	C:\PROGRA~1\MINGW-~1\X86_64~1.0-P\mingw64\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "F:\SoftwareProjects\CLionProjects\C++\Bibliography Management System\main.cpp" > CMakeFiles\Bibliography_Managment_System.dir\main.cpp.i

CMakeFiles/Bibliography_Managment_System.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Bibliography_Managment_System.dir/main.cpp.s"
	C:\PROGRA~1\MINGW-~1\X86_64~1.0-P\mingw64\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "F:\SoftwareProjects\CLionProjects\C++\Bibliography Management System\main.cpp" -o CMakeFiles\Bibliography_Managment_System.dir\main.cpp.s

CMakeFiles/Bibliography_Managment_System.dir/Medium.cpp.obj: CMakeFiles/Bibliography_Managment_System.dir/flags.make
CMakeFiles/Bibliography_Managment_System.dir/Medium.cpp.obj: ../Medium.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="F:\SoftwareProjects\CLionProjects\C++\Bibliography Management System\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/Bibliography_Managment_System.dir/Medium.cpp.obj"
	C:\PROGRA~1\MINGW-~1\X86_64~1.0-P\mingw64\bin\G__~1.EXE  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\Bibliography_Managment_System.dir\Medium.cpp.obj -c "F:\SoftwareProjects\CLionProjects\C++\Bibliography Management System\Medium.cpp"

CMakeFiles/Bibliography_Managment_System.dir/Medium.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Bibliography_Managment_System.dir/Medium.cpp.i"
	C:\PROGRA~1\MINGW-~1\X86_64~1.0-P\mingw64\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "F:\SoftwareProjects\CLionProjects\C++\Bibliography Management System\Medium.cpp" > CMakeFiles\Bibliography_Managment_System.dir\Medium.cpp.i

CMakeFiles/Bibliography_Managment_System.dir/Medium.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Bibliography_Managment_System.dir/Medium.cpp.s"
	C:\PROGRA~1\MINGW-~1\X86_64~1.0-P\mingw64\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "F:\SoftwareProjects\CLionProjects\C++\Bibliography Management System\Medium.cpp" -o CMakeFiles\Bibliography_Managment_System.dir\Medium.cpp.s

# Object files for target Bibliography_Managment_System
Bibliography_Managment_System_OBJECTS = \
"CMakeFiles/Bibliography_Managment_System.dir/main.cpp.obj" \
"CMakeFiles/Bibliography_Managment_System.dir/Medium.cpp.obj"

# External object files for target Bibliography_Managment_System
Bibliography_Managment_System_EXTERNAL_OBJECTS =

Bibliography_Managment_System.exe: CMakeFiles/Bibliography_Managment_System.dir/main.cpp.obj
Bibliography_Managment_System.exe: CMakeFiles/Bibliography_Managment_System.dir/Medium.cpp.obj
Bibliography_Managment_System.exe: CMakeFiles/Bibliography_Managment_System.dir/build.make
Bibliography_Managment_System.exe: CMakeFiles/Bibliography_Managment_System.dir/linklibs.rsp
Bibliography_Managment_System.exe: CMakeFiles/Bibliography_Managment_System.dir/objects1.rsp
Bibliography_Managment_System.exe: CMakeFiles/Bibliography_Managment_System.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir="F:\SoftwareProjects\CLionProjects\C++\Bibliography Management System\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_3) "Linking CXX executable Bibliography_Managment_System.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\Bibliography_Managment_System.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/Bibliography_Managment_System.dir/build: Bibliography_Managment_System.exe

.PHONY : CMakeFiles/Bibliography_Managment_System.dir/build

CMakeFiles/Bibliography_Managment_System.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\Bibliography_Managment_System.dir\cmake_clean.cmake
.PHONY : CMakeFiles/Bibliography_Managment_System.dir/clean

CMakeFiles/Bibliography_Managment_System.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" "F:\SoftwareProjects\CLionProjects\C++\Bibliography Management System" "F:\SoftwareProjects\CLionProjects\C++\Bibliography Management System" "F:\SoftwareProjects\CLionProjects\C++\Bibliography Management System\cmake-build-debug" "F:\SoftwareProjects\CLionProjects\C++\Bibliography Management System\cmake-build-debug" "F:\SoftwareProjects\CLionProjects\C++\Bibliography Management System\cmake-build-debug\CMakeFiles\Bibliography_Managment_System.dir\DependInfo.cmake" --color=$(COLOR)
.PHONY : CMakeFiles/Bibliography_Managment_System.dir/depend
