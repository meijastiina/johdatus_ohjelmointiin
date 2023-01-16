cmake_minimum_required(VERSION 3.5)

project(triangle LANGUAGES C)

add_executable(triangle main.c)

install(TARGETS triangle
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR})
