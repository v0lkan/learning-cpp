cmake_minimum_required(VERSION 3.3)
project(pointers_to_pointers)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES main.cpp)
add_executable(pointers_to_pointers ${SOURCE_FILES})