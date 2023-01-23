cmake_minimum_required(VERSION 3.5)

project(greaterNumber LANGUAGES C)

add_executable(greaterNumber main.c)

install(TARGETS greaterNumber
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR})
