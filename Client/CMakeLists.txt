cmake_minimum_required(VERSION 3.12)

include_directories(include)

set(SOURCES src/main.cpp)
add_executable(client ${SOURCES})

