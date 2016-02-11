cmake_minimum_required(VERSION 3.3)
project(extern)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES main.cpp externs.h test.cpp)
add_executable(extern ${SOURCE_FILES})