cmake_minimum_required(VERSION 3.12)

include_directories(include)
find_package(cppzmq)

set(SOURCES src/main.cpp src/Client.cpp src/ClientConnector.cpp)
add_executable(client ${SOURCES})
target_link_libraries(client cppzmq)

