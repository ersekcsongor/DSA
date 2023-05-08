cmake_minimum_required(VERSION 3.24)
project(Mintatetel C)

set(CMAKE_C_STANDARD 11)

add_executable(Mintatetel main.c patient.c patient.h ../../Lab5/Stack/functions.c)
