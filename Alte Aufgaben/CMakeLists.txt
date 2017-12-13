cmake_minimum_required(VERSION 3.1)
project(statistics LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 14)

add_library(extra lint.cc input.cc)

add_executable(well_defined well_defined.cpp)

target_link_libraries(well_defined extra)