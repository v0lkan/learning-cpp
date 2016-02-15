cmake_minimum_required(VERSION 3.3)
project(stack_and_heap)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES main.cpp)
add_executable(stack_and_heap ${SOURCE_FILES})