cmake_minimum_required(VERSION 3.3)
project(function_prototypes)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES main.cpp)
add_executable(function_prototypes ${SOURCE_FILES})