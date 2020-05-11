cmake_minimum_required(VERSION 3.8)
project(PF_Endian VERSION 1.0.0 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)

add_subdirectory(src)

add_subdirectory(ext/PF_Test)
add_subdirectory(tests)
