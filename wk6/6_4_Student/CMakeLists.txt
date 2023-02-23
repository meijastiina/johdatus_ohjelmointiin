cmake_minimum_required(VERSION 3.5)

project(6_4_Student LANGUAGES C)

add_executable(6_4_Student main.c)

install(TARGETS 6_4_Student
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR})
