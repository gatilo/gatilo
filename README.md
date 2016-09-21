Gatilo web server
=================

A simple, robust, multithread HTTP/2 server implemented using c++.

## Features

* Simple
* Robust
* Multithreded


## Dependencies

* C++11 compliant compiler
* CMake (sudo apt-get install cmake)
* GTest (sudo apt-get install libgtest-dev)

    If CMake do not find GTest,
        
        cd /usr/src/gtest
        sudo cmake .
        sudo make
        sudo mv libg* /usr/lib/

## Compile and Run

    mkdir build
    cd build
    cmake ..
    make 

    To enable tests, cmake with -Dtest=ON flag
    
## Usage

See examples.cpp for example usage.


