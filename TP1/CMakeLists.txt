cmake_minimum_required(VERSION 3.6)
project(TP1)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES intf.h intf.cpp op.h op.cpp main3.cpp tb.cpp tb.h)
add_executable(TP1 ${SOURCE_FILES})