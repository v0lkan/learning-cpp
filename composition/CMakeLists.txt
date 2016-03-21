cmake_minimum_required(VERSION 3.4)
project(composition)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES main.cpp Point2D.h Creature.h)
add_executable(composition ${SOURCE_FILES})
