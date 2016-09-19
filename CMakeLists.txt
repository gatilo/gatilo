cmake_minimum_required(VERSION 2.8.8)
project(gatilo)
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11 -Wall -Wextra")

find_package(Threads REQUIRED)

add_executable(example src/example.cpp)
target_link_libraries(example ${CMAKE_THREAD_LIBS_INIT})