cmake_minimum_required(VERSION 2.8.4)
project(Cpp11Learn)

set (CMAKE_CXX_FLAGS "-std=c++11")

set(SOURCE_FILES Cpp11Learn/src/main.cpp
                 Cpp11Learn/src/ClassTemplate.h
                 Cpp11Learn/src/ClassTemplate.cpp
                 Cpp11Learn/src/Containers.h
                 Cpp11Learn/src/Containers.cpp)

add_executable(Cpp11Learn ${SOURCE_FILES})