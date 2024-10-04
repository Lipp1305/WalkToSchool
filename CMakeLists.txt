cmake_minimum_required(VERSION 3.10)

# Project name
project(WTS)

# Specify the C standard
set(CMAKE_C_STANDARD 99)

# Include the directory for header files
include_directories(${CMAKE_SOURCE_DIR}/include)

# Specify the source files
set(SOURCES src/main.c src/dijkstra.c)

# Add the executable
add_executable(wts ${SOURCES})