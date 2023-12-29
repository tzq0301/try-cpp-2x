cmake_minimum_required(VERSION 3.27)
project(try)

set(CMAKE_CXX_STANDARD 23)

add_executable(try main.cpp)
add_executable(module module/main.cpp)
add_executable(range range/main.cpp)
add_executable(null null/main.cpp)
add_executable(fold fold/main.cpp)
add_executable(coroutine coroutine/main.cpp)
add_executable(concept concept/main.cpp)
