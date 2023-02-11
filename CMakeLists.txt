cmake_minimum_required(VERSION 3.25)
project(Shapes)

set(CMAKE_CXX_STANDARD 14)

add_executable(Shapes
        main.cpp Shape.h Square.h Shape.cpp Square.cpp)
