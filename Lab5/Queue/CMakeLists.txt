cmake_minimum_required(VERSION 3.24)
project(Queue C)

set(CMAKE_C_STANDARD 11)

add_executable(Queue main.c queue.h queue.c constants.h ../Stack/main.c ../Stack/functions.c ../Stack/constants.h)
