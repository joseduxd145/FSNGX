cmake_minimum_required(VERSION 3.31)
project(FSNGX)

set(C_STANDARD 11)
set(C_STANDARD_REQUIRED YES)
set(C_EXTENSIONS OFF)

set(CMAKE_C_FLAGS "-Wall -Wextra -Wpedantic")
set(CMAKE_C_FLAGS_DEBUG "-g")
set(CMAKE_C_FLAGS_RELEASE "-Ofast")

add_library(${PROJECT_NAME} STATIC)

add_subdirectory(src)
#add_subdirectory(lib)

include_directories(include src lib)
target_include_directories(${PROJECT_NAME} PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/include)