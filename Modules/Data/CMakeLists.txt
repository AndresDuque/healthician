cmake_minimum_required(VERSION 3.1...3.20)

project(libdata VERSION 1.0 LANGUAGES CXX)

set(QT_VERSION 5)
set(REQUIRED_LIBS Core)
set(REQUIRED_LIBS_QUALIFIED Qt5::Core)

add_library(${PROJECT_NAME} SHARED)

find_package(Qt${QT_VERSION} COMPONENTS ${REQUIRED_LIBS} REQUIRED)


target_sources(${PROJECT_NAME} PRIVATE
        src/Patient.cpp
        src/Massage.cpp
        include/Patient.h
        include/Massage.h
        )

target_link_libraries(${PROJECT_NAME} ${REQUIRED_LIBS_QUALIFIED})

target_include_directories(${PROJECT_NAME} PUBLIC
        $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
        $<INSTALL_INTERFACE:include>
        PRIVATE
        ${CMAKE_CURRENT_SOURCE_DIR}/src)

set_target_properties(${PROJECT_NAME} PROPERTIES
        VERSION ${PROJECT_VERSION}
        SOVERSION 1)