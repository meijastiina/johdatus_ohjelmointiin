cmake_minimum_required(VERSION 3.5)

project(3_integer2 LANGUAGES C)

add_executable(3_integer2 main.c)

install(TARGETS 3_integer2
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR})
