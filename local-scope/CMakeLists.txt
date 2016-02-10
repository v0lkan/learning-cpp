cmake_minimum_required(VERSION 3.3)
project(local_scope)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES main.cpp)
add_executable(local_scope ${SOURCE_FILES})