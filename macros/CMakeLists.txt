cmake_minimum_required(VERSION 3.3)
project(macros)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES main.cpp math.cpp math.h add.h subtract.h)
add_executable(macros ${SOURCE_FILES})