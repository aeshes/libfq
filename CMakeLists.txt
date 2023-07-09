cmake_minimum_required(VERSION 3.5)

set(PATCH_VERSION "1" CACHE INTERNAL "Patch version")
set(PROJECT_VERSION 0.0.${PATCH_VERSION})
set(CMAKE_BUILD_TYPE Release)

project(fq VERSION ${PROJECT_VERSION})

enable_testing()

add_subdirectory(src)
add_subdirectory(test)
