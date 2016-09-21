cmake_minimum_required(VERSION 2.8.8)
set(PROJECT_NAME gatilo)
project(gatilo)
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11 -Wall -Wextra")

find_package(GTest REQUIRED)
include_directories(${GTEST_INCLUDE_DIRS})

# Options. Turn on with 'cmake -Dtest=ON'.
option(test "Build all tests." OFF)

find_package(Threads REQUIRED)

add_executable(example src/example.cpp)
target_link_libraries(example ${CMAKE_THREAD_LIBS_INIT})

if(test)
    enable_testing()

    add_executable(runUnitTests src/test/test.cpp)
    target_link_libraries(runUnitTests gtest gtest_main pthread)
endif()