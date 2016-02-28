cmake_minimum_required(VERSION 3.3)
project(static_member_functions)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES main.cpp)
add_executable(static_member_functions ${SOURCE_FILES})