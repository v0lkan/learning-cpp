cmake_minimum_required(VERSION 3.3)
project(multiple_files)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES main.cpp add.cpp)
add_executable(multiple_files ${SOURCE_FILES})