cmake_minimum_required(VERSION 3.31)
project(FSNGX)

set(C_STANDARD 11)
set(C_STANDARD_REQUIRED YES)
set(C_EXTENSIONS OFF)

set(CMAKE_C_FLAGS "-Wall -Wextra -Wpedantic")
set(CMAKE_C_FLAGS_DEBUG "-g")
set(CMAKE_C_FLAGS_RELEASE "-O3")

add_library(${PROJECT_NAME} STATIC)

add_subdirectory(src)
add_subdirectory(lib/SDL EXCLUDE_FROM_ALL)
add_subdirectory(lib/SDL_image EXCLUDE_FROM_ALL)

include_directories(include src lib/SDL)

target_link_libraries(${PROJECT_NAME} PRIVATE SDL3_image::SDL3_image SDL3::SDL3)
target_include_directories(${PROJECT_NAME} PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/include)