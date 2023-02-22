cmake_minimum_required(VERSION 3.24)
project(DynamicStruct_Lab1)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)

add_executable(DynamicStruct_Lab1
        Lab1_2_Antonov.cpp
        SetLab1_2_Antonov.cpp
        SetLab1_2_Antonov.h)
