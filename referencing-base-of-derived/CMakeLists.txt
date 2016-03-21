cmake_minimum_required(VERSION 3.4)
project(referencing_base_of_derived)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES main.cpp)
add_executable(referencing_base_of_derived ${SOURCE_FILES})