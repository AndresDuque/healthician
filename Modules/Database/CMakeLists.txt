cmake_minimum_required(VERSION 3.1...3.20)

project(libdatabase VERSION 1.0 LANGUAGES CXX)


add_library(${PROJECT_NAME} SHARED)

target_sources(${PROJECT_NAME} PRIVATE
        src/DatabaseManager.cpp
        include/DatabaseManager.h
        )

target_link_libraries(${PROJECT_NAME} soci_core soci_mysql)

target_include_directories(${PROJECT_NAME} PUBLIC
        $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
        $<INSTALL_INTERFACE:include>
        PRIVATE
        ${CMAKE_CURRENT_SOURCE_DIR}/src)

set_target_properties(${PROJECT_NAME} PROPERTIES
        VERSION ${PROJECT_VERSION}
        SOVERSION 1)
# to fix
add_subdirectory(tests)