cmake_minimum_required(VERSION 3.1...3.20)
project(DataTests)


find_package(GTest REQUIRED)

add_executable(DataTest DataTests.cpp)

target_link_libraries(DataTest libdata gtest pthread)