cmake_minimum_required(VERSION 3.3)
project(namespaces)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES main.cpp foo.cpp foo.h)
add_executable(namespaces ${SOURCE_FILES})