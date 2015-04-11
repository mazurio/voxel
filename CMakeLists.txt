cmake_minimum_required(VERSION 3.1)
project(TestC)

set(CMAKE_BUILD_TYPE Release)
set(CMAKE_MODULE_PATH "/Users/Mazur/ClionProjects/TestC/cmake/Modules" ${CMAKE_MODULE_PATH})
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

find_package(SFML 2.1 COMPONENTS system window graphics REQUIRED)
include_directories(${SFML_INCLUDE_DIR} ${PROJECT_SOURCE_DIR})

set(SOURCE_FILES main.cpp)
add_executable(TestC ${SOURCE_FILES})

target_link_libraries(TestC ${SFML_LIBRARIES})