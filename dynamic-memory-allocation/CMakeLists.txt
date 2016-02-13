cmake_minimum_required(VERSION 3.3)
project(dynamic_memory_allocation)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES main.cpp)
add_executable(dynamic_memory_allocation ${SOURCE_FILES})