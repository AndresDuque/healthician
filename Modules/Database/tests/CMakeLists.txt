cmake_minimum_required(VERSION 3.1...3.20)
project(DataBaseTests)


find_package(GTest REQUIRED)

add_executable(DatabaseTest DatabaseTests.cpp)

target_link_libraries(DatabaseTest libdatabase gtest
        pthread)