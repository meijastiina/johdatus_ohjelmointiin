cmake_minimum_required(VERSION 3.5)

project(array LANGUAGES C)

add_executable(array main.c)

install(TARGETS array
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR})
