cmake_minimum_required(VERSION 3.5)

project(datatype LANGUAGES C)

add_executable(datatype main.c)

install(TARGETS datatype
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR})
