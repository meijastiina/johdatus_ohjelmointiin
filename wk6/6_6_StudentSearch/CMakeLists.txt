cmake_minimum_required(VERSION 3.5)

project(6_6_StudentSearch LANGUAGES C)

add_executable(6_6_StudentSearch main.c)

install(TARGETS 6_6_StudentSearch
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR})
