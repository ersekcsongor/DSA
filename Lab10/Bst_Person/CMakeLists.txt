cmake_minimum_required(VERSION 3.24)
project(Bst_Person C)

set(CMAKE_C_STANDARD 11)

add_executable(Bst_Person main.c person.c person.h constants.h)
