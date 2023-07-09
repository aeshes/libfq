cmake_minimum_required(VERSION 3.5)

project(lib VERSION ${PROJECT_VERSION})

set(CMAKE_CXX_STANDARD 14)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_library(fq gf.cpp)

target_include_directories(fq PRIVATE include)
