cmake_minimum_required(VERSION 3.5)

project(CITesting LANGUAGES CXX)

enable_testing()

set(CMAKE_CXX_FLAGS_RELEASE "/MT") 
set(CMAKE_CXX_FLAGS_DEBUG "/MT")

add_subdirectory(libfoo)
add_subdirectory(test)
add_subdirectory(lib/googletest)