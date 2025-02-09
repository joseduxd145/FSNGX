cmake_minimum_required(VERSION 3.16)
project(Test)

set(C_STANDARD 11)
set(C_STANDARD_REQUIRED YES)
set(C_EXTENSIONS OFF)

set(CMAKE_C_FLAGS "-Wall -Werror -Wextra -Wpedantic")
set(CMAKE_C_FLAGS_DEBUG "-g")
set(CMAKE_C_FLAGS_RELEASE "-Ofast")

add_subdirectory(FSNGX/src)

add_executable(${PROJECT_NAME} main.c)

target_link_libraries(${PROJECT_NAME} FSNGX)