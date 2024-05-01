cmake_minimum_required(VERSION 3.10)

project(CppCommonPitfalls)

add_executable(conversion conversion.cpp)
target_compile_features(conversion PRIVATE cxx_std_17)
target_compile_options(conversion PRIVATE "-Wconversion;-Wsign-conversion")
