cmake_minimum_required(VERSION 3.5)

project(2_integer LANGUAGES C)

add_executable(2_integer main.c)

install(TARGETS 2_integer
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR})
