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
include CMakeFiles/FeatureMatchingHelper.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/FeatureMatchingHelper.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/FeatureMatchingHelper.dir/flags.make

CMakeFiles/FeatureMatchingHelper.dir/FeatureMatchingHelper.cpp.o: CMakeFiles/FeatureMatchingHelper.dir/flags.make
CMakeFiles/FeatureMatchingHelper.dir/FeatureMatchingHelper.cpp.o: ../FeatureMatchingHelper.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="/Users/nuwanda/Documents/Courses/Graduate/CENG 509 - Vision Based Tracking and Modeling/find-me/cmake-build-debug/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/FeatureMatchingHelper.dir/FeatureMatchingHelper.cpp.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/FeatureMatchingHelper.dir/FeatureMatchingHelper.cpp.o -c "/Users/nuwanda/Documents/Courses/Graduate/CENG 509 - Vision Based Tracking and Modeling/find-me/FeatureMatchingHelper.cpp"

CMakeFiles/FeatureMatchingHelper.dir/FeatureMatchingHelper.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/FeatureMatchingHelper.dir/FeatureMatchingHelper.cpp.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "/Users/nuwanda/Documents/Courses/Graduate/CENG 509 - Vision Based Tracking and Modeling/find-me/FeatureMatchingHelper.cpp" > CMakeFiles/FeatureMatchingHelper.dir/FeatureMatchingHelper.cpp.i

CMakeFiles/FeatureMatchingHelper.dir/FeatureMatchingHelper.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/FeatureMatchingHelper.dir/FeatureMatchingHelper.cpp.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "/Users/nuwanda/Documents/Courses/Graduate/CENG 509 - Vision Based Tracking and Modeling/find-me/FeatureMatchingHelper.cpp" -o CMakeFiles/FeatureMatchingHelper.dir/FeatureMatchingHelper.cpp.s

# Object files for target FeatureMatchingHelper
FeatureMatchingHelper_OBJECTS = \
"CMakeFiles/FeatureMatchingHelper.dir/FeatureMatchingHelper.cpp.o"

# External object files for target FeatureMatchingHelper
FeatureMatchingHelper_EXTERNAL_OBJECTS =

FeatureMatchingHelper: CMakeFiles/FeatureMatchingHelper.dir/FeatureMatchingHelper.cpp.o
FeatureMatchingHelper: CMakeFiles/FeatureMatchingHelper.dir/build.make
FeatureMatchingHelper: /usr/local/lib/libopencv_calib3d.a
FeatureMatchingHelper: /usr/local/lib/libopencv_core.a
FeatureMatchingHelper: /usr/local/lib/libopencv_dnn.a
FeatureMatchingHelper: /usr/local/lib/libopencv_features2d.a
FeatureMatchingHelper: /usr/local/lib/libopencv_flann.a
FeatureMatchingHelper: /usr/local/lib/libopencv_highgui.a
FeatureMatchingHelper: /usr/local/lib/libopencv_imgcodecs.a
FeatureMatchingHelper: /usr/local/lib/libopencv_imgproc.a
FeatureMatchingHelper: /usr/local/lib/libopencv_ml.a
FeatureMatchingHelper: /usr/local/lib/libopencv_objdetect.a
FeatureMatchingHelper: /usr/local/lib/libopencv_photo.a
FeatureMatchingHelper: /usr/local/lib/libopencv_shape.a
FeatureMatchingHelper: /usr/local/lib/libopencv_stitching.a
FeatureMatchingHelper: /usr/local/lib/libopencv_superres.a
FeatureMatchingHelper: /usr/local/lib/libopencv_video.a
FeatureMatchingHelper: /usr/local/lib/libopencv_videoio.a
FeatureMatchingHelper: /usr/local/lib/libopencv_videostab.a
FeatureMatchingHelper: /usr/local/share/OpenCV/3rdparty/lib/liblibprotobuf.a
FeatureMatchingHelper: /usr/local/share/OpenCV/3rdparty/lib/libquirc.a
FeatureMatchingHelper: /usr/local/lib/libopencv_calib3d.a
FeatureMatchingHelper: /usr/local/lib/libopencv_features2d.a
FeatureMatchingHelper: /usr/local/lib/libopencv_flann.a
FeatureMatchingHelper: /usr/local/lib/libopencv_highgui.a
FeatureMatchingHelper: /usr/local/lib/libopencv_photo.a
FeatureMatchingHelper: /usr/local/lib/libopencv_video.a
FeatureMatchingHelper: /usr/local/lib/libopencv_videoio.a
FeatureMatchingHelper: /usr/local/lib/libopencv_imgcodecs.a
FeatureMatchingHelper: /usr/local/share/OpenCV/3rdparty/lib/liblibjpeg-turbo.a
FeatureMatchingHelper: /usr/local/share/OpenCV/3rdparty/lib/liblibwebp.a
FeatureMatchingHelper: /usr/local/share/OpenCV/3rdparty/lib/liblibpng.a
FeatureMatchingHelper: /usr/local/share/OpenCV/3rdparty/lib/liblibtiff.a
FeatureMatchingHelper: /usr/local/share/OpenCV/3rdparty/lib/liblibjasper.a
FeatureMatchingHelper: /usr/local/share/OpenCV/3rdparty/lib/libIlmImf.a
FeatureMatchingHelper: /usr/local/lib/libopencv_imgproc.a
FeatureMatchingHelper: /usr/local/lib/libopencv_core.a
FeatureMatchingHelper: /usr/local/share/OpenCV/3rdparty/lib/libittnotify.a
FeatureMatchingHelper: /usr/local/share/OpenCV/3rdparty/lib/libzlib.a
FeatureMatchingHelper: /usr/local/share/OpenCV/3rdparty/lib/libippiw.a
FeatureMatchingHelper: /usr/local/share/OpenCV/3rdparty/lib/libippicv.a
FeatureMatchingHelper: CMakeFiles/FeatureMatchingHelper.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir="/Users/nuwanda/Documents/Courses/Graduate/CENG 509 - Vision Based Tracking and Modeling/find-me/cmake-build-debug/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable FeatureMatchingHelper"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/FeatureMatchingHelper.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/FeatureMatchingHelper.dir/build: FeatureMatchingHelper

.PHONY : CMakeFiles/FeatureMatchingHelper.dir/build

CMakeFiles/FeatureMatchingHelper.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/FeatureMatchingHelper.dir/cmake_clean.cmake
.PHONY : CMakeFiles/FeatureMatchingHelper.dir/clean

CMakeFiles/FeatureMatchingHelper.dir/depend:
	cd "/Users/nuwanda/Documents/Courses/Graduate/CENG 509 - Vision Based Tracking and Modeling/find-me/cmake-build-debug" && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" "/Users/nuwanda/Documents/Courses/Graduate/CENG 509 - Vision Based Tracking and Modeling/find-me" "/Users/nuwanda/Documents/Courses/Graduate/CENG 509 - Vision Based Tracking and Modeling/find-me" "/Users/nuwanda/Documents/Courses/Graduate/CENG 509 - Vision Based Tracking and Modeling/find-me/cmake-build-debug" "/Users/nuwanda/Documents/Courses/Graduate/CENG 509 - Vision Based Tracking and Modeling/find-me/cmake-build-debug" "/Users/nuwanda/Documents/Courses/Graduate/CENG 509 - Vision Based Tracking and Modeling/find-me/cmake-build-debug/CMakeFiles/FeatureMatchingHelper.dir/DependInfo.cmake" --color=$(COLOR)
.PHONY : CMakeFiles/FeatureMatchingHelper.dir/depend
