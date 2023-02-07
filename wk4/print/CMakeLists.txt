cmake_minimum_required(VERSION 3.5)

project(print LANGUAGES C)

add_executable(print main.c)

install(TARGETS print
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR})
