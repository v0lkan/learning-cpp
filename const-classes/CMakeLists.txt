cmake_minimum_required(VERSION 3.3)
project(const_classes)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES main.cpp Date.cpp Date.h)
add_executable(const_classes ${SOURCE_FILES})
