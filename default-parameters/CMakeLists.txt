cmake_minimum_required(VERSION 3.3)
project(default_parameters)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES main.cpp)
add_executable(default_parameters ${SOURCE_FILES})