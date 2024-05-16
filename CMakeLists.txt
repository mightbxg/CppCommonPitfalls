cmake_minimum_required(VERSION 3.10)

project(CppCommonPitfalls)

set(CMAKE_CXX_STANDARD_REQUIRED TRUE)
set(CMAKE_CXX_STANDARD 17)

add_executable(1_conversion 1_conversion.cpp)
target_compile_options(1_conversion PRIVATE "-Wconversion;-Wsign-conversion")

add_executable(2_unused 2_unused.cpp)
target_compile_options(2_unused PRIVATE "-Wunused")

add_executable(3_shadow 3_shadow.cpp)
target_compile_options(3_shadow PRIVATE "-Wshadow")

add_executable(4_return_type 4_return_type.cpp)
target_compile_options(4_return_type PRIVATE "-Wreturn-type")

add_executable(5_sign_compare 5_sign_compare.cpp)
target_compile_options(5_sign_compare PRIVATE "-Wsign-compare")

add_executable(6_implicit_fallthrough 6_implicit_fallthrough.cpp)
target_compile_options(6_implicit_fallthrough PRIVATE "-Wimplicit-fallthrough")
