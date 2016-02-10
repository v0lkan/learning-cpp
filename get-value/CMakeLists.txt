cmake_minimum_required(VERSION 3.3)
project(get_value)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES main.cpp)
add_executable(get_value ${SOURCE_FILES})