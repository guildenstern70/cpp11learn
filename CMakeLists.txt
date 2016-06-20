cmake_minimum_required(VERSION 2.8.4)
project(Cpp11Learn)

set(CMAKE_CXX_FLAGS "-Wall -Wno-long-long -pedantic -std=c++11")

set(SOURCE_FILES    Cpp11Learn/src/main.cpp
        Cpp11Learn/src/Inheritance.h
        Cpp11Learn/src/Inheritance.cpp
        Cpp11Learn/src/DefaultClass.h
        Cpp11Learn/src/DefaultClass.cpp
        Cpp11Learn/src/Containers.h
        Cpp11Learn/src/Containers.cpp
        Cpp11Learn/src/InitializerList.h
        Cpp11Learn/src/InitializerList.cpp
        Cpp11Learn/src/EnumClass.h
        Cpp11Learn/src/OperatorOverloading.cpp
        Cpp11Learn/src/OperatorOverloading.h Cpp11Learn/src/TextFile.cpp Cpp11Learn/src/TextFile.h Cpp11Learn/src/ClassTemplateSpec.cpp Cpp11Learn/src/ClassTemplateSpec.h)

add_executable(Cpp11Learn_exe ${SOURCE_FILES})