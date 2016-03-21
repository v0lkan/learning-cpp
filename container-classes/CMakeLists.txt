cmake_minimum_required(VERSION 3.4)
project(container_classes)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES main.cpp IntArray.h)
add_executable(container_classes ${SOURCE_FILES})
