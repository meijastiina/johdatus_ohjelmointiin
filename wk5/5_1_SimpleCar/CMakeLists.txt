cmake_minimum_required(VERSION 3.5)

project(5_1_SimpleCar LANGUAGES C)

add_executable(5_1_SimpleCar main.c)

install(TARGETS 5_1_SimpleCar
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR})
