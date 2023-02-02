cmake_minimum_required(VERSION 3.5)

project(4_multiplicationTable LANGUAGES C)

add_executable(4_multiplicationTable main.c)

install(TARGETS 4_multiplicationTable
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR})
