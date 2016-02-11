cmake_minimum_required(VERSION 3.3)
project(constants)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES main.cpp constants.h)
add_executable(constants ${SOURCE_FILES})