cmake_minimum_required(VERSION 3.9)
project(clox C)

set(CMAKE_C_STANDARD 99)

add_executable(clox main.c chunk.c memory.c debug.c value.c)