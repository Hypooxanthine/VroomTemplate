# ----- Project definition -----

project(${VRM_PROJECT_NAME})

# ----- Subdirectories -----

add_subdirectory("Scripts")

# ----- Resources -----

set_game_rsc_dir(${CMAKE_CURRENT_SOURCE_DIR}/Resources)
