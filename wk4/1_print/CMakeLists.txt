cmake_minimum_required(VERSION 3.5)

project(1_print LANGUAGES C)

add_executable(1_print main.c)

install(TARGETS 1_print
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR})
