cmake_minimum_required(VERSION 3.3)
project(control_flow)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES main.cpp)
add_executable(control_flow ${SOURCE_FILES})