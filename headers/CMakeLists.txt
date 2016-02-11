cmake_minimum_required(VERSION 3.3)
project(headers)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES main.cpp add.h add.cpp)
add_executable(headers ${SOURCE_FILES})