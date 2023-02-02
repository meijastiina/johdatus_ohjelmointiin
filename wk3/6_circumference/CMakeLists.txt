cmake_minimum_required(VERSION 3.5)

project(6_circumference LANGUAGES C)

add_executable(6_circumference main.c)

install(TARGETS 6_circumference
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR})
