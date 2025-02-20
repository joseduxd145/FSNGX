cmake_minimum_required(VERSION 3.31)
project(FSNGX)

set(C_STANDARD 11)
set(C_STANDARD_REQUIRED YES)
set(C_EXTENSIONS OFF)

set(CMAKE_C_FLAGS "-Wall -Wextra -Wpedantic")
set(CMAKE_C_FLAGS_DEBUG "-g")
set(CMAKE_C_FLAGS_RELEASE "-o3")

set(CMAKE_RUNTIME_OUTPUT_DIRECTORY "${CMAKE_BINARY_DIR}/$<CONFIGURATION>")
set(CMAKE_LIBRARY_OUTPUT_DIRECTORY "${CMAKE_BINARY_DIR}/$<CONFIGURATION>")

#SDL image flags
set(SDLIMAGE_AVIF OFF)
set(SDLIMAGE_BMP OFF)
set(SDLIMAGE_GIF OFF)
set(SDLIMAGE_JPG OFF)
set(SDLIMAGE_JXL OFF)
set(SDLIMAGE_LBM OFF)
set(SDLIMAGE_PCX OFF)
set(SDLIMAGE_PNG ON)
set(SDLIMAGE_PNM OFF)
set(SDLIMAGE_QOI OFF)
set(SDLIMAGE_SVG OFF)
set(SDLIMAGE_TGA OFF)
set(SDLIMAGE_TIF OFF)
set(SDLIMAGE_WEBP OFF)
set(SDLIMAGE_XCF OFF)
set(SDLIMAGE_XPM OFF)
set(SDLIMAGE_XV OFF)

add_library(${PROJECT_NAME} STATIC)

add_subdirectory(src)
add_subdirectory(lib/SDL)
add_subdirectory(lib/SDL_image)

include_directories(include src)
#include_directories(lib/SDL3/include lib/SDL3_image/include)

#find_library(LIB_SDL3 SDL3 PATHS lib/SDL3 REQUIRED)
#find_library(LIB_SDL3_IMAGE SDL3_image PATHS lib/SDL3_image REQUIRED)

target_link_libraries(${PROJECT_NAME} PRIVATE SDL3_image::SDL3_image SDL3::SDL3)
#target_link_libraries(${PROJECT_NAME} PRIVATE ${LIB_SDL3} ${LIB_SDL3_IMAGE})
target_include_directories(${PROJECT_NAME} PUBLIC include)