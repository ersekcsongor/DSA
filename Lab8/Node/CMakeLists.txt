cmake_minimum_required(VERSION 3.24)
project(Node C)

set(CMAKE_C_STANDARD 11)

add_executable(Node main.c Node.c Node.h constants.h)
