cmake_minimum_required(VERSION 3.8)
project(PF_Endian VERSION 1.0.0 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)

option(PFENDIAN_BUILD_TESTS "Builds all unit tests" OFF)

add_subdirectory(ext)
add_subdirectory(src)

if (${PFENDIAN_BUILD_TESTS})
    add_subdirectory(tests)
endif()
