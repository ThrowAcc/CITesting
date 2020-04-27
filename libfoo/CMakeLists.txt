cmake_minimum_required(VERSION 3.5)

project(LibFoo LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

set(SOURCES 
   src/main.cpp
   src/ClassA.h
   src/ClassA.cpp
)

target_compile_options(coverage_config INTERFACE
   -O0        # no optimization
   -g         # generate debug info
   --coverage # sets all required flags
)

target_link_options(coverage_config INTERFACE --coverage)

add_library(
	libfoo
	STATIC
	${SOURCES}
)

set_target_properties(
	libfoo
	PROPERTIES
	COMPILE_FLAGS "--coverage -std=c++17"
	LINK_FLAGS "--coverage"
)

target_include_directories(
  libfoo
  PUBLIC
  ${CMAKE_CURRENT_SOURCE_DIR}/src
  )
