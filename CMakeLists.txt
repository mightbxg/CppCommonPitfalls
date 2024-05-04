cmake_minimum_required(VERSION 3.10)

project(CppCommonPitfalls)

set(CMAKE_CXX_STANDARD_REQUIRED TRUE)
set(CMAKE_CXX_STANDARD 17)

add_executable(conversion conversion.cpp)
target_compile_options(conversion PRIVATE "-Wconversion;-Wsign-conversion")

add_executable(unused unused.cpp)
target_compile_options(unused PRIVATE "-Wunused")

add_executable(shadow shadow.cpp)
target_compile_options(shadow PRIVATE "-Wshadow")

add_executable(return_type return_type.cpp)
target_compile_options(return_type PRIVATE "-Wreturn-type")
