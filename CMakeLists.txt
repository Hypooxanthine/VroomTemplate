cmake_minimum_required (VERSION 3.28)

set(CMAKE_CXX_SCAN_FOR_MODULES OFF)
set(CMAKE_EXPERIMENTAL_CXX_MODULE_CMAKE_API OFF)
set(CMAKE_EXPERIMENTAL_CXX_MODULE_DYNDEP OFF)

# ----- CMake settings -----

# Policies
if (POLICY CMP0072)
    cmake_policy (SET CMP0072 NEW)
endif(POLICY CMP0072)

set(CMAKE_EXPORT_COMPILE_COMMANDS ON)

if(CMAKE_EXPORT_COMPILE_COMMANDS AND EXISTS "${CMAKE_BINARY_DIR}/compile_commands.json")
  file(COPY "${CMAKE_BINARY_DIR}/compile_commands.json" DESTINATION "${CMAKE_CURRENT_SOURCE_DIR}")
endif()

# ----- Solution definition -----

set(VRM_PROJECT_NAME "VroomTemplate")
project("${VRM_PROJECT_NAME}Solution")

# ----- Subdirectories -----

set(VROOM_ENABLE_EXAMPLE_EDITOR OFF CACHE BOOL "" FORCE)
add_subdirectory("deps/Vroom")
add_subdirectory("Content")
