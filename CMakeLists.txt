cmake_minimum_required(VERSION 3.26)
project(CarSales C)

set(CMAKE_C_STANDARD 11)

add_executable(CarSales main.c
        headers/carstructures.h
        headers/features.h)
