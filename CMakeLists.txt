cmake_minimum_required(VERSION 3.25)
project(Shapes_inheritance)

set(CMAKE_CXX_STANDARD 14)

add_executable(Shapes_inheritance
        main.cpp Shape.h Shape.cpp Square.h Square.cpp)
