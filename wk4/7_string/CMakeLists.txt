cmake_minimum_required(VERSION 3.5)

project(7_string LANGUAGES C)

add_executable(7_string main.c)

install(TARGETS 7_string
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR})
