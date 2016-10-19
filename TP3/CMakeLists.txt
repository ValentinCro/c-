cmake_minimum_required(VERSION 3.6)
project(TP3)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES main6.cpp Employe.cpp Employe.h Embauche.cpp Embauche.h Vacataire.cpp Vacataire.h Societe.cpp Societe.h)
add_executable(TP3 ${SOURCE_FILES})