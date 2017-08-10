cmake_minimum_required(VERSION 2.8.4)
project(Cpp11Learn)

set(CMAKE_CXX_FLAGS "-Wall -Wno-long-long -pedantic -std=c++11")
set(OUTPUT_DIR "out")
set (CMAKE_RUNTIME_OUTPUT_DIRECTORY ${OUTPUT_DIR})

file(MAKE_DIRECTORY ${OUTPUT_DIR})

set(SOURCE_FILES
        src/main.cpp
        src/Inheritance.h
        src/Inheritance.cpp
        src/DefaultClass.h
        src/DefaultClass.cpp
        src/Containers.h
        src/Containers.cpp
        src/InitializerList.h
        src/InitializerList.cpp
        src/EnumClass.h
        src/OperatorOverloading.cpp
        src/OperatorOverloading.h
        src/TextFile.cpp
        src/TextFile.h
        src/ClassTemplateSpec.cpp
        src/ClassTemplateSpec.h)

add_executable(Cpp11Learn ${SOURCE_FILES})