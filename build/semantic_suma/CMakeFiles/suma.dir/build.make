# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.16

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
CMAKE_COMMAND = /usr/bin/cmake

# The command to remove a file.
RM = /usr/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /catkin_ws/src/semantic_suma

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /catkin_ws/build/semantic_suma

# Include any dependencies generated for this target.
include CMakeFiles/suma.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/suma.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/suma.dir/flags.make

computation_shaders.cpp: /catkin_ws/src/semantic_suma/src/shader/color.glsl
computation_shaders.cpp: /catkin_ws/src/semantic_suma/src/shader/color_map.glsl
computation_shaders.cpp: /catkin_ws/src/semantic_suma/src/shader/empty.vert
computation_shaders.cpp: /catkin_ws/src/semantic_suma/src/shader/empty.frag
computation_shaders.cpp: /catkin_ws/src/semantic_suma/src/shader/quad.geom
computation_shaders.cpp: /catkin_ws/src/semantic_suma/src/shader/quad_inverse.geom
computation_shaders.cpp: /catkin_ws/src/semantic_suma/src/shader/passthrough.frag
computation_shaders.cpp: /catkin_ws/src/semantic_suma/src/shader/Frame2Model_jacobians.frag
computation_shaders.cpp: /catkin_ws/src/semantic_suma/src/shader/Frame2Model_jacobians.geom
computation_shaders.cpp: /catkin_ws/src/semantic_suma/src/shader/Frame2Model_jacobians.vert
computation_shaders.cpp: /catkin_ws/src/semantic_suma/src/shader/render_surfels.frag
computation_shaders.cpp: /catkin_ws/src/semantic_suma/src/shader/render_surfels.geom
computation_shaders.cpp: /catkin_ws/src/semantic_suma/src/shader/render_surfels.vert
computation_shaders.cpp: /catkin_ws/src/semantic_suma/src/shader/render_compose.frag
computation_shaders.cpp: /catkin_ws/src/semantic_suma/src/shader/update_surfels.vert
computation_shaders.cpp: /catkin_ws/src/semantic_suma/src/shader/update_surfels.geom
computation_shaders.cpp: /catkin_ws/src/semantic_suma/src/shader/update_surfels.frag
computation_shaders.cpp: /catkin_ws/src/semantic_suma/src/shader/extract_surfels.vert
computation_shaders.cpp: /catkin_ws/src/semantic_suma/src/shader/init_radiusConf.vert
computation_shaders.cpp: /catkin_ws/src/semantic_suma/src/shader/init_radiusConf.frag
computation_shaders.cpp: /catkin_ws/src/semantic_suma/src/shader/copy_surfels.vert
computation_shaders.cpp: /catkin_ws/src/semantic_suma/src/shader/copy_surfels.geom
computation_shaders.cpp: /catkin_ws/src/semantic_suma/src/shader/gen_surfels.frag
computation_shaders.cpp: /catkin_ws/src/semantic_suma/src/shader/gen_surfels.geom
computation_shaders.cpp: /catkin_ws/src/semantic_suma/src/shader/gen_surfels.vert
computation_shaders.cpp: /catkin_ws/src/semantic_suma/src/shader/init_depthimg.frag
computation_shaders.cpp: /catkin_ws/src/semantic_suma/src/shader/avg_vertexmap.frag
computation_shaders.cpp: /catkin_ws/src/semantic_suma/src/shader/gen_depthimg.vert
computation_shaders.cpp: /catkin_ws/src/semantic_suma/src/shader/gen_depthimg.frag
computation_shaders.cpp: /catkin_ws/src/semantic_suma/src/shader/gen_normalmap.frag
computation_shaders.cpp: /catkin_ws/src/semantic_suma/src/shader/gen_indexmap.vert
computation_shaders.cpp: /catkin_ws/src/semantic_suma/src/shader/gen_indexmap.frag
computation_shaders.cpp: /catkin_ws/src/semantic_suma/src/shader/bilateral_filter.frag
computation_shaders.cpp: /catkin_ws/src/semantic_suma/src/shader/gen_vertexmap.vert
computation_shaders.cpp: /catkin_ws/src/semantic_suma/src/shader/gen_vertexmap.frag
computation_shaders.cpp: /catkin_ws/src/semantic_suma/src/shader/gen_semanticmap.frag
computation_shaders.cpp: /catkin_ws/src/semantic_suma/src/shader/floodfill.frag
computation_shaders.cpp: /catkin_ws/src/semantic_suma/src/shader/draw_surfels.frag
computation_shaders.cpp: /catkin_ws/src/semantic_suma/src/shader/draw_surfels.geom
computation_shaders.cpp: /catkin_ws/src/semantic_suma/src/shader/draw_surfels.vert
computation_shaders.cpp: /catkin_ws/src/semantic_suma/src/shader/draw_surfelPoints.vert
computation_shaders.cpp: /catkin_ws/src/semantic_suma/src/shader/draw_submaps.vert
computation_shaders.cpp: /catkin_ws/src/semantic_suma/src/shader/draw_submaps.geom
computation_shaders.cpp: /catkin_ws/src/semantic_suma/src/shader/coloredvertices.frag
computation_shaders.cpp: /catkin_ws/src/semantic_suma/src/shader/coloredvertices.vert
computation_shaders.cpp: /catkin_ws/src/glow/cmake/GenCppFile.cmake
computation_shaders.cpp: /catkin_ws/src/glow/cmake/GlowShaderCompilation.cmake
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=/catkin_ws/build/semantic_suma/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Generating computation_shaders.cpp"
	/usr/bin/cmake -DGLOW_CACHE_CPP_FILENAME:INTERNAL=/catkin_ws/build/semantic_suma/computation_shaders.cpp "-DGLOW_CACHE_SHADER_FILENAMES:INTERNAL=/catkin_ws/src/semantic_suma/src/shader/color.glsl;/catkin_ws/src/semantic_suma/src/shader/color_map.glsl;/catkin_ws/src/semantic_suma/src/shader/empty.vert;/catkin_ws/src/semantic_suma/src/shader/empty.frag;/catkin_ws/src/semantic_suma/src/shader/quad.geom;/catkin_ws/src/semantic_suma/src/shader/quad_inverse.geom;/catkin_ws/src/semantic_suma/src/shader/passthrough.frag;/catkin_ws/src/semantic_suma/src/shader/Frame2Model_jacobians.frag;/catkin_ws/src/semantic_suma/src/shader/Frame2Model_jacobians.geom;/catkin_ws/src/semantic_suma/src/shader/Frame2Model_jacobians.vert;/catkin_ws/src/semantic_suma/src/shader/render_surfels.frag;/catkin_ws/src/semantic_suma/src/shader/render_surfels.geom;/catkin_ws/src/semantic_suma/src/shader/render_surfels.vert;/catkin_ws/src/semantic_suma/src/shader/render_compose.frag;/catkin_ws/src/semantic_suma/src/shader/update_surfels.vert;/catkin_ws/src/semantic_suma/src/shader/update_surfels.geom;/catkin_ws/src/semantic_suma/src/shader/update_surfels.frag;/catkin_ws/src/semantic_suma/src/shader/extract_surfels.vert;/catkin_ws/src/semantic_suma/src/shader/init_radiusConf.vert;/catkin_ws/src/semantic_suma/src/shader/init_radiusConf.frag;/catkin_ws/src/semantic_suma/src/shader/copy_surfels.vert;/catkin_ws/src/semantic_suma/src/shader/copy_surfels.geom;/catkin_ws/src/semantic_suma/src/shader/gen_surfels.frag;/catkin_ws/src/semantic_suma/src/shader/gen_surfels.geom;/catkin_ws/src/semantic_suma/src/shader/gen_surfels.vert;/catkin_ws/src/semantic_suma/src/shader/init_depthimg.frag;/catkin_ws/src/semantic_suma/src/shader/avg_vertexmap.frag;/catkin_ws/src/semantic_suma/src/shader/gen_depthimg.vert;/catkin_ws/src/semantic_suma/src/shader/gen_depthimg.frag;/catkin_ws/src/semantic_suma/src/shader/gen_normalmap.frag;/catkin_ws/src/semantic_suma/src/shader/gen_indexmap.vert;/catkin_ws/src/semantic_suma/src/shader/gen_indexmap.frag;/catkin_ws/src/semantic_suma/src/shader/bilateral_filter.frag;/catkin_ws/src/semantic_suma/src/shader/gen_vertexmap.vert;/catkin_ws/src/semantic_suma/src/shader/gen_vertexmap.frag;/catkin_ws/src/semantic_suma/src/shader/gen_semanticmap.frag;/catkin_ws/src/semantic_suma/src/shader/floodfill.frag;/catkin_ws/src/semantic_suma/src/shader/draw_surfels.frag;/catkin_ws/src/semantic_suma/src/shader/draw_surfels.geom;/catkin_ws/src/semantic_suma/src/shader/draw_surfels.vert;/catkin_ws/src/semantic_suma/src/shader/draw_surfelPoints.vert;/catkin_ws/src/semantic_suma/src/shader/draw_submaps.vert;/catkin_ws/src/semantic_suma/src/shader/draw_submaps.geom;/catkin_ws/src/semantic_suma/src/shader/coloredvertices.frag;/catkin_ws/src/semantic_suma/src/shader/coloredvertices.vert" -P /catkin_ws/src/glow/cmake/GenCppFile.cmake

CMakeFiles/suma.dir/suma_autogen/mocs_compilation.cpp.o: CMakeFiles/suma.dir/flags.make
CMakeFiles/suma.dir/suma_autogen/mocs_compilation.cpp.o: suma_autogen/mocs_compilation.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/catkin_ws/build/semantic_suma/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/suma.dir/suma_autogen/mocs_compilation.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/suma.dir/suma_autogen/mocs_compilation.cpp.o -c /catkin_ws/build/semantic_suma/suma_autogen/mocs_compilation.cpp

CMakeFiles/suma.dir/suma_autogen/mocs_compilation.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/suma.dir/suma_autogen/mocs_compilation.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /catkin_ws/build/semantic_suma/suma_autogen/mocs_compilation.cpp > CMakeFiles/suma.dir/suma_autogen/mocs_compilation.cpp.i

CMakeFiles/suma.dir/suma_autogen/mocs_compilation.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/suma.dir/suma_autogen/mocs_compilation.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /catkin_ws/build/semantic_suma/suma_autogen/mocs_compilation.cpp -o CMakeFiles/suma.dir/suma_autogen/mocs_compilation.cpp.s

CMakeFiles/suma.dir/src/core/SurfelMapping.cpp.o: CMakeFiles/suma.dir/flags.make
CMakeFiles/suma.dir/src/core/SurfelMapping.cpp.o: /catkin_ws/src/semantic_suma/src/core/SurfelMapping.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/catkin_ws/build/semantic_suma/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object CMakeFiles/suma.dir/src/core/SurfelMapping.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/suma.dir/src/core/SurfelMapping.cpp.o -c /catkin_ws/src/semantic_suma/src/core/SurfelMapping.cpp

CMakeFiles/suma.dir/src/core/SurfelMapping.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/suma.dir/src/core/SurfelMapping.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /catkin_ws/src/semantic_suma/src/core/SurfelMapping.cpp > CMakeFiles/suma.dir/src/core/SurfelMapping.cpp.i

CMakeFiles/suma.dir/src/core/SurfelMapping.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/suma.dir/src/core/SurfelMapping.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /catkin_ws/src/semantic_suma/src/core/SurfelMapping.cpp -o CMakeFiles/suma.dir/src/core/SurfelMapping.cpp.s

CMakeFiles/suma.dir/src/core/Preprocessing.cpp.o: CMakeFiles/suma.dir/flags.make
CMakeFiles/suma.dir/src/core/Preprocessing.cpp.o: /catkin_ws/src/semantic_suma/src/core/Preprocessing.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/catkin_ws/build/semantic_suma/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building CXX object CMakeFiles/suma.dir/src/core/Preprocessing.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/suma.dir/src/core/Preprocessing.cpp.o -c /catkin_ws/src/semantic_suma/src/core/Preprocessing.cpp

CMakeFiles/suma.dir/src/core/Preprocessing.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/suma.dir/src/core/Preprocessing.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /catkin_ws/src/semantic_suma/src/core/Preprocessing.cpp > CMakeFiles/suma.dir/src/core/Preprocessing.cpp.i

CMakeFiles/suma.dir/src/core/Preprocessing.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/suma.dir/src/core/Preprocessing.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /catkin_ws/src/semantic_suma/src/core/Preprocessing.cpp -o CMakeFiles/suma.dir/src/core/Preprocessing.cpp.s

CMakeFiles/suma.dir/src/core/Frame2Model.cpp.o: CMakeFiles/suma.dir/flags.make
CMakeFiles/suma.dir/src/core/Frame2Model.cpp.o: /catkin_ws/src/semantic_suma/src/core/Frame2Model.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/catkin_ws/build/semantic_suma/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Building CXX object CMakeFiles/suma.dir/src/core/Frame2Model.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/suma.dir/src/core/Frame2Model.cpp.o -c /catkin_ws/src/semantic_suma/src/core/Frame2Model.cpp

CMakeFiles/suma.dir/src/core/Frame2Model.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/suma.dir/src/core/Frame2Model.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /catkin_ws/src/semantic_suma/src/core/Frame2Model.cpp > CMakeFiles/suma.dir/src/core/Frame2Model.cpp.i

CMakeFiles/suma.dir/src/core/Frame2Model.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/suma.dir/src/core/Frame2Model.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /catkin_ws/src/semantic_suma/src/core/Frame2Model.cpp -o CMakeFiles/suma.dir/src/core/Frame2Model.cpp.s

CMakeFiles/suma.dir/src/core/SurfelMap.cpp.o: CMakeFiles/suma.dir/flags.make
CMakeFiles/suma.dir/src/core/SurfelMap.cpp.o: /catkin_ws/src/semantic_suma/src/core/SurfelMap.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/catkin_ws/build/semantic_suma/CMakeFiles --progress-num=$(CMAKE_PROGRESS_6) "Building CXX object CMakeFiles/suma.dir/src/core/SurfelMap.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/suma.dir/src/core/SurfelMap.cpp.o -c /catkin_ws/src/semantic_suma/src/core/SurfelMap.cpp

CMakeFiles/suma.dir/src/core/SurfelMap.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/suma.dir/src/core/SurfelMap.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /catkin_ws/src/semantic_suma/src/core/SurfelMap.cpp > CMakeFiles/suma.dir/src/core/SurfelMap.cpp.i

CMakeFiles/suma.dir/src/core/SurfelMap.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/suma.dir/src/core/SurfelMap.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /catkin_ws/src/semantic_suma/src/core/SurfelMap.cpp -o CMakeFiles/suma.dir/src/core/SurfelMap.cpp.s

CMakeFiles/suma.dir/src/core/lie_algebra.cpp.o: CMakeFiles/suma.dir/flags.make
CMakeFiles/suma.dir/src/core/lie_algebra.cpp.o: /catkin_ws/src/semantic_suma/src/core/lie_algebra.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/catkin_ws/build/semantic_suma/CMakeFiles --progress-num=$(CMAKE_PROGRESS_7) "Building CXX object CMakeFiles/suma.dir/src/core/lie_algebra.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/suma.dir/src/core/lie_algebra.cpp.o -c /catkin_ws/src/semantic_suma/src/core/lie_algebra.cpp

CMakeFiles/suma.dir/src/core/lie_algebra.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/suma.dir/src/core/lie_algebra.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /catkin_ws/src/semantic_suma/src/core/lie_algebra.cpp > CMakeFiles/suma.dir/src/core/lie_algebra.cpp.i

CMakeFiles/suma.dir/src/core/lie_algebra.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/suma.dir/src/core/lie_algebra.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /catkin_ws/src/semantic_suma/src/core/lie_algebra.cpp -o CMakeFiles/suma.dir/src/core/lie_algebra.cpp.s

CMakeFiles/suma.dir/src/core/LieGaussNewton.cpp.o: CMakeFiles/suma.dir/flags.make
CMakeFiles/suma.dir/src/core/LieGaussNewton.cpp.o: /catkin_ws/src/semantic_suma/src/core/LieGaussNewton.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/catkin_ws/build/semantic_suma/CMakeFiles --progress-num=$(CMAKE_PROGRESS_8) "Building CXX object CMakeFiles/suma.dir/src/core/LieGaussNewton.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/suma.dir/src/core/LieGaussNewton.cpp.o -c /catkin_ws/src/semantic_suma/src/core/LieGaussNewton.cpp

CMakeFiles/suma.dir/src/core/LieGaussNewton.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/suma.dir/src/core/LieGaussNewton.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /catkin_ws/src/semantic_suma/src/core/LieGaussNewton.cpp > CMakeFiles/suma.dir/src/core/LieGaussNewton.cpp.i

CMakeFiles/suma.dir/src/core/LieGaussNewton.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/suma.dir/src/core/LieGaussNewton.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /catkin_ws/src/semantic_suma/src/core/LieGaussNewton.cpp -o CMakeFiles/suma.dir/src/core/LieGaussNewton.cpp.s

CMakeFiles/suma.dir/src/core/Posegraph.cpp.o: CMakeFiles/suma.dir/flags.make
CMakeFiles/suma.dir/src/core/Posegraph.cpp.o: /catkin_ws/src/semantic_suma/src/core/Posegraph.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/catkin_ws/build/semantic_suma/CMakeFiles --progress-num=$(CMAKE_PROGRESS_9) "Building CXX object CMakeFiles/suma.dir/src/core/Posegraph.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/suma.dir/src/core/Posegraph.cpp.o -c /catkin_ws/src/semantic_suma/src/core/Posegraph.cpp

CMakeFiles/suma.dir/src/core/Posegraph.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/suma.dir/src/core/Posegraph.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /catkin_ws/src/semantic_suma/src/core/Posegraph.cpp > CMakeFiles/suma.dir/src/core/Posegraph.cpp.i

CMakeFiles/suma.dir/src/core/Posegraph.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/suma.dir/src/core/Posegraph.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /catkin_ws/src/semantic_suma/src/core/Posegraph.cpp -o CMakeFiles/suma.dir/src/core/Posegraph.cpp.s

CMakeFiles/suma.dir/src/core/ImagePyramidGenerator.cpp.o: CMakeFiles/suma.dir/flags.make
CMakeFiles/suma.dir/src/core/ImagePyramidGenerator.cpp.o: /catkin_ws/src/semantic_suma/src/core/ImagePyramidGenerator.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/catkin_ws/build/semantic_suma/CMakeFiles --progress-num=$(CMAKE_PROGRESS_10) "Building CXX object CMakeFiles/suma.dir/src/core/ImagePyramidGenerator.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/suma.dir/src/core/ImagePyramidGenerator.cpp.o -c /catkin_ws/src/semantic_suma/src/core/ImagePyramidGenerator.cpp

CMakeFiles/suma.dir/src/core/ImagePyramidGenerator.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/suma.dir/src/core/ImagePyramidGenerator.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /catkin_ws/src/semantic_suma/src/core/ImagePyramidGenerator.cpp > CMakeFiles/suma.dir/src/core/ImagePyramidGenerator.cpp.i

CMakeFiles/suma.dir/src/core/ImagePyramidGenerator.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/suma.dir/src/core/ImagePyramidGenerator.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /catkin_ws/src/semantic_suma/src/core/ImagePyramidGenerator.cpp -o CMakeFiles/suma.dir/src/core/ImagePyramidGenerator.cpp.s

CMakeFiles/suma.dir/computation_shaders.cpp.o: CMakeFiles/suma.dir/flags.make
CMakeFiles/suma.dir/computation_shaders.cpp.o: computation_shaders.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/catkin_ws/build/semantic_suma/CMakeFiles --progress-num=$(CMAKE_PROGRESS_11) "Building CXX object CMakeFiles/suma.dir/computation_shaders.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/suma.dir/computation_shaders.cpp.o -c /catkin_ws/build/semantic_suma/computation_shaders.cpp

CMakeFiles/suma.dir/computation_shaders.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/suma.dir/computation_shaders.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /catkin_ws/build/semantic_suma/computation_shaders.cpp > CMakeFiles/suma.dir/computation_shaders.cpp.i

CMakeFiles/suma.dir/computation_shaders.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/suma.dir/computation_shaders.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /catkin_ws/build/semantic_suma/computation_shaders.cpp -o CMakeFiles/suma.dir/computation_shaders.cpp.s

# Object files for target suma
suma_OBJECTS = \
"CMakeFiles/suma.dir/suma_autogen/mocs_compilation.cpp.o" \
"CMakeFiles/suma.dir/src/core/SurfelMapping.cpp.o" \
"CMakeFiles/suma.dir/src/core/Preprocessing.cpp.o" \
"CMakeFiles/suma.dir/src/core/Frame2Model.cpp.o" \
"CMakeFiles/suma.dir/src/core/SurfelMap.cpp.o" \
"CMakeFiles/suma.dir/src/core/lie_algebra.cpp.o" \
"CMakeFiles/suma.dir/src/core/LieGaussNewton.cpp.o" \
"CMakeFiles/suma.dir/src/core/Posegraph.cpp.o" \
"CMakeFiles/suma.dir/src/core/ImagePyramidGenerator.cpp.o" \
"CMakeFiles/suma.dir/computation_shaders.cpp.o"

# External object files for target suma
suma_EXTERNAL_OBJECTS =

/catkin_ws/devel/.private/semantic_suma/lib/libsuma.so: CMakeFiles/suma.dir/suma_autogen/mocs_compilation.cpp.o
/catkin_ws/devel/.private/semantic_suma/lib/libsuma.so: CMakeFiles/suma.dir/src/core/SurfelMapping.cpp.o
/catkin_ws/devel/.private/semantic_suma/lib/libsuma.so: CMakeFiles/suma.dir/src/core/Preprocessing.cpp.o
/catkin_ws/devel/.private/semantic_suma/lib/libsuma.so: CMakeFiles/suma.dir/src/core/Frame2Model.cpp.o
/catkin_ws/devel/.private/semantic_suma/lib/libsuma.so: CMakeFiles/suma.dir/src/core/SurfelMap.cpp.o
/catkin_ws/devel/.private/semantic_suma/lib/libsuma.so: CMakeFiles/suma.dir/src/core/lie_algebra.cpp.o
/catkin_ws/devel/.private/semantic_suma/lib/libsuma.so: CMakeFiles/suma.dir/src/core/LieGaussNewton.cpp.o
/catkin_ws/devel/.private/semantic_suma/lib/libsuma.so: CMakeFiles/suma.dir/src/core/Posegraph.cpp.o
/catkin_ws/devel/.private/semantic_suma/lib/libsuma.so: CMakeFiles/suma.dir/src/core/ImagePyramidGenerator.cpp.o
/catkin_ws/devel/.private/semantic_suma/lib/libsuma.so: CMakeFiles/suma.dir/computation_shaders.cpp.o
/catkin_ws/devel/.private/semantic_suma/lib/libsuma.so: CMakeFiles/suma.dir/build.make
/catkin_ws/devel/.private/semantic_suma/lib/libsuma.so: /catkin_ws/devel/.private/glow/lib/libglow.so
/catkin_ws/devel/.private/semantic_suma/lib/libsuma.so: /catkin_ws/devel/.private/glow/lib/libglow_util.so
/catkin_ws/devel/.private/semantic_suma/lib/libsuma.so: /catkin_ws/devel/.private/rangenet_lib/lib/librangenet_external.so
/catkin_ws/devel/.private/semantic_suma/lib/libsuma.so: /catkin_ws/devel/.private/rangenet_lib/lib/librangenet_lib.so
/catkin_ws/devel/.private/semantic_suma/lib/libsuma.so: /usr/lib/x86_64-linux-gnu/libyaml-cpp.so.0.6.2
/catkin_ws/devel/.private/semantic_suma/lib/libsuma.so: /usr/lib/x86_64-linux-gnu/libboost_filesystem.so.1.71.0
/catkin_ws/devel/.private/semantic_suma/lib/libsuma.so: /usr/lib/x86_64-linux-gnu/libboost_system.so.1.71.0
/catkin_ws/devel/.private/semantic_suma/lib/libsuma.so: /usr/lib/x86_64-linux-gnu/libboost_serialization.so.1.71.0
/catkin_ws/devel/.private/semantic_suma/lib/libsuma.so: /usr/lib/x86_64-linux-gnu/libboost_thread.so.1.71.0
/catkin_ws/devel/.private/semantic_suma/lib/libsuma.so: /usr/lib/x86_64-linux-gnu/libboost_date_time.so.1.71.0
/catkin_ws/devel/.private/semantic_suma/lib/libsuma.so: /usr/lib/x86_64-linux-gnu/libboost_regex.so.1.71.0
/catkin_ws/devel/.private/semantic_suma/lib/libsuma.so: /usr/lib/x86_64-linux-gnu/libboost_timer.so.1.71.0
/catkin_ws/devel/.private/semantic_suma/lib/libsuma.so: /usr/lib/x86_64-linux-gnu/libboost_chrono.so.1.71.0
/catkin_ws/devel/.private/semantic_suma/lib/libsuma.so: /usr/lib/x86_64-linux-gnu/libGL.so
/catkin_ws/devel/.private/semantic_suma/lib/libsuma.so: /usr/lib/x86_64-linux-gnu/libGLU.so
/catkin_ws/devel/.private/semantic_suma/lib/libsuma.so: /usr/lib/x86_64-linux-gnu/libGLEW.so
/catkin_ws/devel/.private/semantic_suma/lib/libsuma.so: /catkin_ws/devel/.private/rangenet_lib/lib/librangenet_external.so
/catkin_ws/devel/.private/semantic_suma/lib/libsuma.so: /catkin_ws/devel/.private/rangenet_lib/lib/librangenet_lib.so
/catkin_ws/devel/.private/semantic_suma/lib/libsuma.so: /usr/lib/x86_64-linux-gnu/libyaml-cpp.so.0.6.2
/catkin_ws/devel/.private/semantic_suma/lib/libsuma.so: /catkin_ws/devel/.private/semantic_suma/lib/librobovision.so
/catkin_ws/devel/.private/semantic_suma/lib/libsuma.so: /catkin_ws/devel/.private/glow/lib/libglow.so
/catkin_ws/devel/.private/semantic_suma/lib/libsuma.so: /catkin_ws/devel/.private/glow/lib/libglow_util.so
/catkin_ws/devel/.private/semantic_suma/lib/libsuma.so: /usr/lib/x86_64-linux-gnu/libboost_regex.so.1.71.0
/catkin_ws/devel/.private/semantic_suma/lib/libsuma.so: /catkin_ws/devel/.private/rangenet_lib/lib/librangenet_external.so
/catkin_ws/devel/.private/semantic_suma/lib/libsuma.so: /catkin_ws/devel/.private/rangenet_lib/lib/librangenet_lib.so
/catkin_ws/devel/.private/semantic_suma/lib/libsuma.so: /usr/lib/x86_64-linux-gnu/libyaml-cpp.so.0.6.2
/catkin_ws/devel/.private/semantic_suma/lib/libsuma.so: /usr/lib/x86_64-linux-gnu/libGL.so
/catkin_ws/devel/.private/semantic_suma/lib/libsuma.so: /usr/lib/x86_64-linux-gnu/libGLU.so
/catkin_ws/devel/.private/semantic_suma/lib/libsuma.so: /usr/lib/x86_64-linux-gnu/libGLEW.so
/catkin_ws/devel/.private/semantic_suma/lib/libsuma.so: /catkin_ws/devel/.private/rangenet_lib/lib/librangenet_external.so
/catkin_ws/devel/.private/semantic_suma/lib/libsuma.so: /catkin_ws/devel/.private/rangenet_lib/lib/librangenet_lib.so
/catkin_ws/devel/.private/semantic_suma/lib/libsuma.so: /usr/lib/x86_64-linux-gnu/libyaml-cpp.so.0.6.2
/catkin_ws/devel/.private/semantic_suma/lib/libsuma.so: /usr/lib/x86_64-linux-gnu/libGL.so
/catkin_ws/devel/.private/semantic_suma/lib/libsuma.so: /usr/lib/x86_64-linux-gnu/libGLU.so
/catkin_ws/devel/.private/semantic_suma/lib/libsuma.so: /usr/lib/x86_64-linux-gnu/libGLEW.so
/catkin_ws/devel/.private/semantic_suma/lib/libsuma.so: /usr/local/lib/libgtsam.so.4.0.0
/catkin_ws/devel/.private/semantic_suma/lib/libsuma.so: /usr/lib/x86_64-linux-gnu/libboost_filesystem.so.1.71.0
/catkin_ws/devel/.private/semantic_suma/lib/libsuma.so: /usr/lib/x86_64-linux-gnu/libboost_system.so.1.71.0
/catkin_ws/devel/.private/semantic_suma/lib/libsuma.so: /usr/lib/x86_64-linux-gnu/libboost_serialization.so.1.71.0
/catkin_ws/devel/.private/semantic_suma/lib/libsuma.so: /usr/lib/x86_64-linux-gnu/libboost_thread.so.1.71.0
/catkin_ws/devel/.private/semantic_suma/lib/libsuma.so: /usr/lib/x86_64-linux-gnu/libboost_atomic.so.1.71.0
/catkin_ws/devel/.private/semantic_suma/lib/libsuma.so: /usr/lib/x86_64-linux-gnu/libboost_date_time.so.1.71.0
/catkin_ws/devel/.private/semantic_suma/lib/libsuma.so: /usr/lib/x86_64-linux-gnu/libboost_timer.so.1.71.0
/catkin_ws/devel/.private/semantic_suma/lib/libsuma.so: /usr/lib/x86_64-linux-gnu/libboost_chrono.so.1.71.0
/catkin_ws/devel/.private/semantic_suma/lib/libsuma.so: /usr/lib/x86_64-linux-gnu/libtbb.so
/catkin_ws/devel/.private/semantic_suma/lib/libsuma.so: /usr/lib/x86_64-linux-gnu/libtbbmalloc.so
/catkin_ws/devel/.private/semantic_suma/lib/libsuma.so: /usr/local/lib/libmetis.so
/catkin_ws/devel/.private/semantic_suma/lib/libsuma.so: CMakeFiles/suma.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/catkin_ws/build/semantic_suma/CMakeFiles --progress-num=$(CMAKE_PROGRESS_12) "Linking CXX shared library /catkin_ws/devel/.private/semantic_suma/lib/libsuma.so"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/suma.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/suma.dir/build: /catkin_ws/devel/.private/semantic_suma/lib/libsuma.so

.PHONY : CMakeFiles/suma.dir/build

CMakeFiles/suma.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/suma.dir/cmake_clean.cmake
.PHONY : CMakeFiles/suma.dir/clean

CMakeFiles/suma.dir/depend: computation_shaders.cpp
	cd /catkin_ws/build/semantic_suma && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /catkin_ws/src/semantic_suma /catkin_ws/src/semantic_suma /catkin_ws/build/semantic_suma /catkin_ws/build/semantic_suma /catkin_ws/build/semantic_suma/CMakeFiles/suma.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/suma.dir/depend
