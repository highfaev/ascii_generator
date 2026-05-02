cmake_minimum_required(VERSION 3.10)

project(ASCII_GEN VERSION 0.1)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

set(INCLUDES ${PROJECT_SOURCE_DIR}/include)
include_directories(${INCLUDES})

set(SOURCES
    ${PROJECT_SOURCE_DIR}/src/main.cpp
)

add_executable(ASCII_GEN ${SOURCES})


target_compile_options(ASCII_GEN PRIVATE
    -Wall
    -Wextra
    -Wpedantic
)