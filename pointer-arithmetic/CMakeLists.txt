cmake_minimum_required(VERSION 3.3)
project(pointer_arithmetic)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES main.cpp)
add_executable(pointer_arithmetic ${SOURCE_FILES})