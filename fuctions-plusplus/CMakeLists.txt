cmake_minimum_required(VERSION 3.3)
project(fuctions_plusplus)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES main.cpp)
add_executable(fuctions_plusplus ${SOURCE_FILES})