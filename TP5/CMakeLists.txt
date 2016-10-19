cmake_minimum_required(VERSION 3.6)
project(TP5)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES main.cpp Vecteur.inl Vecteur.h)
add_executable(TP5 ${SOURCE_FILES})