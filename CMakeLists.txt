cmake_minimum_required(VERSION 3.16)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# Indiquez à CMake d'utiliser les outils de vcpkg
if(UNIX)
 #set(CMAKE_TOOLCHAIN_FILE "/ssd/dev/vcpkg/scripts/buildsystems/vcpkg.cmake")
endif()
if(WIN32)
  set(CMAKE_GENERATOR_TOOLSET "v142")
 # set(CMAKE_TOOLCHAIN_FILE "C:/dev/vcpkg/scripts/buildsystems/vcpkg.cmake")
endif()

project(learn-computer-vision
        DESCRIPTION "Learning Computer Vision with OpenCV"
        LANGUAGES CXX
)

set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin)
option(BUILD_SHARED_LIBS "Build shared libraries" OFF)


add_subdirectory(week_1)

