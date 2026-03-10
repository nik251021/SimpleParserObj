cmake_minimum_required(VERSION 3.10.0)
project(objParser VERSION 0.1.0 LANGUAGES C CXX)

set(SOURCES
src/main.cpp
src/parser.cpp
)

include_directories(src)

add_executable(objParser ${SOURCES})