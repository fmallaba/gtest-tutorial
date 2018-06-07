cmake_minimum_required(VERSION 3.0)
project(gtest)

# configure cpp standard
set(CMAKE_CXX_STANDARD 11)

enable_testing()

add_subdirectory(factorial)
add_subdirectory(square)
add_subdirectory(array)
add_subdirectory(tests)
