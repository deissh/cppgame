# CMAKE generated file: DO NOT EDIT!
# Generated by "NMake Makefiles" Generator, CMake Version 3.15

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:


#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:


.SUFFIXES: .hpux_make_needs_suffix_list


# Suppress display of executed commands.
$(VERBOSE).SILENT:


# A target that is always out of date.
cmake_force:

.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

!IF "$(OS)" == "Windows_NT"
NULL=
!ELSE
NULL=nul
!ENDIF
SHELL = cmd.exe

# The CMake executable.
CMAKE_COMMAND = "C:\Program Files\JetBrains\CLion 2019.3.5\bin\cmake\win\bin\cmake.exe"

# The command to remove a file.
RM = "C:\Program Files\JetBrains\CLion 2019.3.5\bin\cmake\win\bin\cmake.exe" -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = C:\Work\cppgame

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = C:\Work\cppgame\cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles\cppgame.dir\depend.make

# Include the progress variables for this target.
include CMakeFiles\cppgame.dir\progress.make

# Include the compile flags for this target's objects.
include CMakeFiles\cppgame.dir\flags.make

CMakeFiles\cppgame.dir\Main.cpp.obj: CMakeFiles\cppgame.dir\flags.make
CMakeFiles\cppgame.dir\Main.cpp.obj: ..\Main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Work\cppgame\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/cppgame.dir/Main.cpp.obj"
	C:\PROGRA~2\MICROS~1\2019\COMMUN~1\VC\Tools\MSVC\1425~1.286\bin\Hostx86\x86\cl.exe @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) /FoCMakeFiles\cppgame.dir\Main.cpp.obj /FdCMakeFiles\cppgame.dir\ /FS -c C:\Work\cppgame\Main.cpp
<<

CMakeFiles\cppgame.dir\Main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/cppgame.dir/Main.cpp.i"
	C:\PROGRA~2\MICROS~1\2019\COMMUN~1\VC\Tools\MSVC\1425~1.286\bin\Hostx86\x86\cl.exe > CMakeFiles\cppgame.dir\Main.cpp.i @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Work\cppgame\Main.cpp
<<

CMakeFiles\cppgame.dir\Main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/cppgame.dir/Main.cpp.s"
	C:\PROGRA~2\MICROS~1\2019\COMMUN~1\VC\Tools\MSVC\1425~1.286\bin\Hostx86\x86\cl.exe @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) /FoNUL /FAs /FaCMakeFiles\cppgame.dir\Main.cpp.s /c C:\Work\cppgame\Main.cpp
<<

CMakeFiles\cppgame.dir\src\Core.cpp.obj: CMakeFiles\cppgame.dir\flags.make
CMakeFiles\cppgame.dir\src\Core.cpp.obj: ..\src\Core.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Work\cppgame\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/cppgame.dir/src/Core.cpp.obj"
	C:\PROGRA~2\MICROS~1\2019\COMMUN~1\VC\Tools\MSVC\1425~1.286\bin\Hostx86\x86\cl.exe @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) /FoCMakeFiles\cppgame.dir\src\Core.cpp.obj /FdCMakeFiles\cppgame.dir\ /FS -c C:\Work\cppgame\src\Core.cpp
<<

CMakeFiles\cppgame.dir\src\Core.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/cppgame.dir/src/Core.cpp.i"
	C:\PROGRA~2\MICROS~1\2019\COMMUN~1\VC\Tools\MSVC\1425~1.286\bin\Hostx86\x86\cl.exe > CMakeFiles\cppgame.dir\src\Core.cpp.i @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Work\cppgame\src\Core.cpp
<<

CMakeFiles\cppgame.dir\src\Core.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/cppgame.dir/src/Core.cpp.s"
	C:\PROGRA~2\MICROS~1\2019\COMMUN~1\VC\Tools\MSVC\1425~1.286\bin\Hostx86\x86\cl.exe @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) /FoNUL /FAs /FaCMakeFiles\cppgame.dir\src\Core.cpp.s /c C:\Work\cppgame\src\Core.cpp
<<

CMakeFiles\cppgame.dir\src\SceneManager.cpp.obj: CMakeFiles\cppgame.dir\flags.make
CMakeFiles\cppgame.dir\src\SceneManager.cpp.obj: ..\src\SceneManager.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Work\cppgame\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object CMakeFiles/cppgame.dir/src/SceneManager.cpp.obj"
	C:\PROGRA~2\MICROS~1\2019\COMMUN~1\VC\Tools\MSVC\1425~1.286\bin\Hostx86\x86\cl.exe @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) /FoCMakeFiles\cppgame.dir\src\SceneManager.cpp.obj /FdCMakeFiles\cppgame.dir\ /FS -c C:\Work\cppgame\src\SceneManager.cpp
<<

CMakeFiles\cppgame.dir\src\SceneManager.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/cppgame.dir/src/SceneManager.cpp.i"
	C:\PROGRA~2\MICROS~1\2019\COMMUN~1\VC\Tools\MSVC\1425~1.286\bin\Hostx86\x86\cl.exe > CMakeFiles\cppgame.dir\src\SceneManager.cpp.i @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Work\cppgame\src\SceneManager.cpp
<<

CMakeFiles\cppgame.dir\src\SceneManager.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/cppgame.dir/src/SceneManager.cpp.s"
	C:\PROGRA~2\MICROS~1\2019\COMMUN~1\VC\Tools\MSVC\1425~1.286\bin\Hostx86\x86\cl.exe @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) /FoNUL /FAs /FaCMakeFiles\cppgame.dir\src\SceneManager.cpp.s /c C:\Work\cppgame\src\SceneManager.cpp
<<

CMakeFiles\cppgame.dir\src\Global.cpp.obj: CMakeFiles\cppgame.dir\flags.make
CMakeFiles\cppgame.dir\src\Global.cpp.obj: ..\src\Global.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Work\cppgame\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building CXX object CMakeFiles/cppgame.dir/src/Global.cpp.obj"
	C:\PROGRA~2\MICROS~1\2019\COMMUN~1\VC\Tools\MSVC\1425~1.286\bin\Hostx86\x86\cl.exe @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) /FoCMakeFiles\cppgame.dir\src\Global.cpp.obj /FdCMakeFiles\cppgame.dir\ /FS -c C:\Work\cppgame\src\Global.cpp
<<

CMakeFiles\cppgame.dir\src\Global.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/cppgame.dir/src/Global.cpp.i"
	C:\PROGRA~2\MICROS~1\2019\COMMUN~1\VC\Tools\MSVC\1425~1.286\bin\Hostx86\x86\cl.exe > CMakeFiles\cppgame.dir\src\Global.cpp.i @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Work\cppgame\src\Global.cpp
<<

CMakeFiles\cppgame.dir\src\Global.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/cppgame.dir/src/Global.cpp.s"
	C:\PROGRA~2\MICROS~1\2019\COMMUN~1\VC\Tools\MSVC\1425~1.286\bin\Hostx86\x86\cl.exe @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) /FoNUL /FAs /FaCMakeFiles\cppgame.dir\src\Global.cpp.s /c C:\Work\cppgame\src\Global.cpp
<<

# Object files for target cppgame
cppgame_OBJECTS = \
"CMakeFiles\cppgame.dir\Main.cpp.obj" \
"CMakeFiles\cppgame.dir\src\Core.cpp.obj" \
"CMakeFiles\cppgame.dir\src\SceneManager.cpp.obj" \
"CMakeFiles\cppgame.dir\src\Global.cpp.obj"

# External object files for target cppgame
cppgame_EXTERNAL_OBJECTS =

cppgame.exe: CMakeFiles\cppgame.dir\Main.cpp.obj
cppgame.exe: CMakeFiles\cppgame.dir\src\Core.cpp.obj
cppgame.exe: CMakeFiles\cppgame.dir\src\SceneManager.cpp.obj
cppgame.exe: CMakeFiles\cppgame.dir\src\Global.cpp.obj
cppgame.exe: CMakeFiles\cppgame.dir\build.make
cppgame.exe: ..\lib\x86\SDL2.lib
cppgame.exe: ..\lib\x86\SDL2main.lib
cppgame.exe: CMakeFiles\cppgame.dir\objects1.rsp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=C:\Work\cppgame\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Linking CXX executable cppgame.exe"
	"C:\Program Files\JetBrains\CLion 2019.3.5\bin\cmake\win\bin\cmake.exe" -E vs_link_exe --intdir=CMakeFiles\cppgame.dir --rc=C:\PROGRA~2\WI3CF2~1\10\bin\100183~1.0\x86\rc.exe --mt=C:\PROGRA~2\WI3CF2~1\10\bin\100183~1.0\x86\mt.exe --manifests  -- C:\PROGRA~2\MICROS~1\2019\COMMUN~1\VC\Tools\MSVC\1425~1.286\bin\Hostx86\x86\link.exe /nologo @CMakeFiles\cppgame.dir\objects1.rsp @<<
 /out:cppgame.exe /implib:cppgame.lib /pdb:C:\Work\cppgame\cmake-build-debug\cppgame.pdb /version:0.0  /machine:X86 /debug /INCREMENTAL /subsystem:console ..\lib\x86\SDL2.lib ..\lib\x86\SDL2main.lib kernel32.lib user32.lib gdi32.lib winspool.lib shell32.lib ole32.lib oleaut32.lib uuid.lib comdlg32.lib advapi32.lib 
<<

# Rule to build all files generated by this target.
CMakeFiles\cppgame.dir\build: cppgame.exe

.PHONY : CMakeFiles\cppgame.dir\build

CMakeFiles\cppgame.dir\clean:
	$(CMAKE_COMMAND) -P CMakeFiles\cppgame.dir\cmake_clean.cmake
.PHONY : CMakeFiles\cppgame.dir\clean

CMakeFiles\cppgame.dir\depend:
	$(CMAKE_COMMAND) -E cmake_depends "NMake Makefiles" C:\Work\cppgame C:\Work\cppgame C:\Work\cppgame\cmake-build-debug C:\Work\cppgame\cmake-build-debug C:\Work\cppgame\cmake-build-debug\CMakeFiles\cppgame.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles\cppgame.dir\depend

