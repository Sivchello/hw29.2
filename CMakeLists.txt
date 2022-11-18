cmake_minimum_required(VERSION 3.21)
project(hw29_2)

set(CMAKE_CXX_STANDARD 14)

add_executable(hw29_2 main.cpp Shape.cpp Shape.h Triangle.cpp Triangle.h Rectangle.cpp Rectangle.h Circle.cpp Circle.h)
