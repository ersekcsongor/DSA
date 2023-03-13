cmake_minimum_required(VERSION 3.24)
project(Students2 C)

set(CMAKE_C_STANDARD 11)

add_executable(Students2 main.c student.c student.h ../../Lab5/Stack/constants.h ../../Lab5/Stack/main.c ../../Lab5/Stack/functions.c ../../Lab5/Queue/constants.h ../../Lab5/Queue/queue.h ../../Lab5/Queue/queue.c ../../Lab5/Queue/main.c)
