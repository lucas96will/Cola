cmake_minimum_required(VERSION 3.19)
project(Cola C)

set(CMAKE_C_STANDARD 99)

add_library(cola.h testing.c testing.h cola.c pruebas_cola.c nodo.c nodo.h)

add_executable(prueba cola.h testing.c testing.c cola.c pruebas_cola.c nodo.c nodo.h)