cmake_minimum_required(VERSION 3.10)

project(aim CXX)
set(CMAKE_CXX_STANDARD 20)

enable_testing()


set(CMAKE_EXPORT_COMPILE_COMMANDS ON)

add_subdirectory(libaim)
add_subdirectory(aim)
add_subdirectory(aim-test)
