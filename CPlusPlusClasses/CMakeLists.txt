cmake_minimum_required(VERSION 3.15)
project(CPlusPlusClasses)

set(CMAKE_CXX_STANDARD 17)

add_executable(CPlusPlusClasses src/source/main.cpp src/source/Cat.cpp src/header_H/Cat.h)
add_executable(Cat src/source/Cat.cpp)
add_executable(main src/source/main.cpp)

add_executable(src src/)
