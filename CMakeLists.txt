cmake_minimum_required(VERSION 3.6)
project(C___Kurs)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES main.cpp CGeo.cpp CGeo.h CCircle.cpp CCircle.h CPointFloat2.cpp CPointFloat2.h CSquare.cpp CSquare.h TPoint.cpp TPoint.h)
add_executable(C___Kurs ${SOURCE_FILES})