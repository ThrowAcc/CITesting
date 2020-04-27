cmake_minimum_required(VERSION 3.5)
project(CITesting LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED ON)


add_library(coverage_config INTERFACE)

  # Add required flags (GCC & LLVM/Clang)
  target_compile_options(coverage_config INTERFACE
    -O0        # no optimization
    -g         # generate debug info
    --coverage # sets all required flags
  )
  if(CMAKE_VERSION VERSION_GREATER_EQUAL 3.13)
    target_link_options(coverage_config INTERFACE --coverage)
  else()
    target_link_libraries(coverage_config INTERFACE --coverage)
  endif()

enable_testing()

set(CMAKE_CXX_FLAGS_RELEASE "/MT") 
set(CMAKE_CXX_FLAGS_DEBUG "/MT")

add_subdirectory(libfoo)
add_subdirectory(test)
add_subdirectory(lib/googletest)