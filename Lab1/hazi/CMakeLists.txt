cmake_minimum_required(VERSION 3.24)
project(hazi C)

set(CMAKE_C_STANDARD 11)

add_executable(hazi main.c sources/functions.c headers/functions.h)
