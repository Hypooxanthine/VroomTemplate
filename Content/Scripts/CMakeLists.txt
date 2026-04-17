# ----- Project definition -----

project(${VRM_PROJECT_NAME}Scripts)

set(VRM_SCRIPTS_PROJECT_NAME ${VRM_PROJECT_NAME}Scripts)

# ----- Project directories -----

set(SOURCE_DIR src)
set(INCLUDE_DIR include)

# ----- Projects files -----

# Script headers
file(GLOB_RECURSE SCRIPT_HEADERS   ${INCLUDE_DIR}/*.h)

# Script sources
file(GLOB_RECURSE SCRIPT_IMPL      ${SOURCE_DIR}/*.cpp)

# ----- Targets -----

add_library(${VRM_SCRIPTS_PROJECT_NAME}                  SHARED  ${SCRIPT_IMPL} ${SCRIPT_HEADERS})
target_include_directories(${VRM_SCRIPTS_PROJECT_NAME}   PRIVATE  ${INCLUDE_DIR})
target_link_libraries(${VRM_SCRIPTS_PROJECT_NAME}        PRIVATE  Vroom::ScriptApi)

# Compile options
if (MSVC)
    target_compile_options(${VRM_SCRIPTS_PROJECT_NAME} PRIVATE /MP)
endif()

set_scripts_library(${VRM_SCRIPTS_PROJECT_NAME})

# ----- Deps -----

