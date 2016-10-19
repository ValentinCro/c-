cmake_minimum_required(VERSION 3.6)
project(TP2)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES stock.cpp stock.h main4.cpp visu.cpp visu.h Com.cpp Com.h)
add_executable(TP2 ${SOURCE_FILES})