# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.15

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
CMAKE_COMMAND = /Applications/CLion.app/Contents/bin/cmake/mac/bin/cmake

# The command to remove a file.
RM = /Applications/CLion.app/Contents/bin/cmake/mac/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = "/Users/nuwanda/Documents/Courses/Graduate/CENG 509 - Vision Based Tracking and Modeling/find-me"

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = "/Users/nuwanda/Documents/Courses/Graduate/CENG 509 - Vision Based Tracking and Modeling/find-me/cmake-build-debug"

# Include any dependencies generated for this target.
include CMakeFiles/GraphWithAdjacency.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/GraphWithAdjacency.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/GraphWithAdjacency.dir/flags.make

CMakeFiles/GraphWithAdjacency.dir/GraphWithAdjacency.cpp.o: CMakeFiles/GraphWithAdjacency.dir/flags.make
CMakeFiles/GraphWithAdjacency.dir/GraphWithAdjacency.cpp.o: ../GraphWithAdjacency.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="/Users/nuwanda/Documents/Courses/Graduate/CENG 509 - Vision Based Tracking and Modeling/find-me/cmake-build-debug/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/GraphWithAdjacency.dir/GraphWithAdjacency.cpp.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/GraphWithAdjacency.dir/GraphWithAdjacency.cpp.o -c "/Users/nuwanda/Documents/Courses/Graduate/CENG 509 - Vision Based Tracking and Modeling/find-me/GraphWithAdjacency.cpp"

CMakeFiles/GraphWithAdjacency.dir/GraphWithAdjacency.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/GraphWithAdjacency.dir/GraphWithAdjacency.cpp.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "/Users/nuwanda/Documents/Courses/Graduate/CENG 509 - Vision Based Tracking and Modeling/find-me/GraphWithAdjacency.cpp" > CMakeFiles/GraphWithAdjacency.dir/GraphWithAdjacency.cpp.i

CMakeFiles/GraphWithAdjacency.dir/GraphWithAdjacency.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/GraphWithAdjacency.dir/GraphWithAdjacency.cpp.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "/Users/nuwanda/Documents/Courses/Graduate/CENG 509 - Vision Based Tracking and Modeling/find-me/GraphWithAdjacency.cpp" -o CMakeFiles/GraphWithAdjacency.dir/GraphWithAdjacency.cpp.s

# Object files for target GraphWithAdjacency
GraphWithAdjacency_OBJECTS = \
"CMakeFiles/GraphWithAdjacency.dir/GraphWithAdjacency.cpp.o"

# External object files for target GraphWithAdjacency
GraphWithAdjacency_EXTERNAL_OBJECTS =

GraphWithAdjacency: CMakeFiles/GraphWithAdjacency.dir/GraphWithAdjacency.cpp.o
GraphWithAdjacency: CMakeFiles/GraphWithAdjacency.dir/build.make
GraphWithAdjacency: /usr/local/lib/libopencv_calib3d.a
GraphWithAdjacency: /usr/local/lib/libopencv_core.a
GraphWithAdjacency: /usr/local/lib/libopencv_dnn.a
GraphWithAdjacency: /usr/local/lib/libopencv_features2d.a
GraphWithAdjacency: /usr/local/lib/libopencv_flann.a
GraphWithAdjacency: /usr/local/lib/libopencv_highgui.a
GraphWithAdjacency: /usr/local/lib/libopencv_imgcodecs.a
GraphWithAdjacency: /usr/local/lib/libopencv_imgproc.a
GraphWithAdjacency: /usr/local/lib/libopencv_ml.a
GraphWithAdjacency: /usr/local/lib/libopencv_objdetect.a
GraphWithAdjacency: /usr/local/lib/libopencv_photo.a
GraphWithAdjacency: /usr/local/lib/libopencv_shape.a
GraphWithAdjacency: /usr/local/lib/libopencv_stitching.a
GraphWithAdjacency: /usr/local/lib/libopencv_superres.a
GraphWithAdjacency: /usr/local/lib/libopencv_video.a
GraphWithAdjacency: /usr/local/lib/libopencv_videoio.a
GraphWithAdjacency: /usr/local/lib/libopencv_videostab.a
GraphWithAdjacency: /usr/local/share/OpenCV/3rdparty/lib/liblibprotobuf.a
GraphWithAdjacency: /usr/local/share/OpenCV/3rdparty/lib/libquirc.a
GraphWithAdjacency: /usr/local/lib/libopencv_calib3d.a
GraphWithAdjacency: /usr/local/lib/libopencv_features2d.a
GraphWithAdjacency: /usr/local/lib/libopencv_flann.a
GraphWithAdjacency: /usr/local/lib/libopencv_highgui.a
GraphWithAdjacency: /usr/local/lib/libopencv_photo.a
GraphWithAdjacency: /usr/local/lib/libopencv_video.a
GraphWithAdjacency: /usr/local/lib/libopencv_videoio.a
GraphWithAdjacency: /usr/local/lib/libopencv_imgcodecs.a
GraphWithAdjacency: /usr/local/share/OpenCV/3rdparty/lib/liblibjpeg-turbo.a
GraphWithAdjacency: /usr/local/share/OpenCV/3rdparty/lib/liblibwebp.a
GraphWithAdjacency: /usr/local/share/OpenCV/3rdparty/lib/liblibpng.a
GraphWithAdjacency: /usr/local/share/OpenCV/3rdparty/lib/liblibtiff.a
GraphWithAdjacency: /usr/local/share/OpenCV/3rdparty/lib/liblibjasper.a
GraphWithAdjacency: /usr/local/share/OpenCV/3rdparty/lib/libIlmImf.a
GraphWithAdjacency: /usr/local/lib/libopencv_imgproc.a
GraphWithAdjacency: /usr/local/lib/libopencv_core.a
GraphWithAdjacency: /usr/local/share/OpenCV/3rdparty/lib/libittnotify.a
GraphWithAdjacency: /usr/local/share/OpenCV/3rdparty/lib/libzlib.a
GraphWithAdjacency: /usr/local/share/OpenCV/3rdparty/lib/libippiw.a
GraphWithAdjacency: /usr/local/share/OpenCV/3rdparty/lib/libippicv.a
GraphWithAdjacency: CMakeFiles/GraphWithAdjacency.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir="/Users/nuwanda/Documents/Courses/Graduate/CENG 509 - Vision Based Tracking and Modeling/find-me/cmake-build-debug/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable GraphWithAdjacency"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/GraphWithAdjacency.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/GraphWithAdjacency.dir/build: GraphWithAdjacency

.PHONY : CMakeFiles/GraphWithAdjacency.dir/build

CMakeFiles/GraphWithAdjacency.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/GraphWithAdjacency.dir/cmake_clean.cmake
.PHONY : CMakeFiles/GraphWithAdjacency.dir/clean

CMakeFiles/GraphWithAdjacency.dir/depend:
	cd "/Users/nuwanda/Documents/Courses/Graduate/CENG 509 - Vision Based Tracking and Modeling/find-me/cmake-build-debug" && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" "/Users/nuwanda/Documents/Courses/Graduate/CENG 509 - Vision Based Tracking and Modeling/find-me" "/Users/nuwanda/Documents/Courses/Graduate/CENG 509 - Vision Based Tracking and Modeling/find-me" "/Users/nuwanda/Documents/Courses/Graduate/CENG 509 - Vision Based Tracking and Modeling/find-me/cmake-build-debug" "/Users/nuwanda/Documents/Courses/Graduate/CENG 509 - Vision Based Tracking and Modeling/find-me/cmake-build-debug" "/Users/nuwanda/Documents/Courses/Graduate/CENG 509 - Vision Based Tracking and Modeling/find-me/cmake-build-debug/CMakeFiles/GraphWithAdjacency.dir/DependInfo.cmake" --color=$(COLOR)
.PHONY : CMakeFiles/GraphWithAdjacency.dir/depend

