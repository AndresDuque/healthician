cmake_minimum_required(VERSION 3.17)
project(healthician)

set(CMAKE_CXX_STANDARD 14)

add_executable(healthician main.cpp apps/helthician.cpp)