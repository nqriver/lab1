cmake_minimum_required(VERSION 3.17)
project(lab1)

set(CMAKE_CXX_STANDARD 14)

add_executable(lab1 main.cpp Person.cpp Person.h Teacher.cpp Teacher.h Student.cpp Student.h Animal.h Animal.cpp Dog.cpp Dog.h Cat.cpp Cat.h)
