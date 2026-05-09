cmake_minimum_required(VERSION 3.20)
project(new_geode_mod)

set(CMAKE_CXX_STANDARD 20)

add_library(${PROJECT_NAME} SHARED
    src/main.cpp
)
