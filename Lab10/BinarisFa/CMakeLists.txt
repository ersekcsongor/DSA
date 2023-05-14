cmake_minimum_required(VERSION 3.24)
project(BinarisFa C)

set(CMAKE_C_STANDARD 11)

add_executable(BinarisFa main.c binaris_fa.c binaris_fa.h constants.h ../Binaris_Kereso_Fa/binary_search_tree.h)
