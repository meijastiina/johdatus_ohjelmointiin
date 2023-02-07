cmake_minimum_required(VERSION 3.5)

project(5_comparison LANGUAGES C)

add_executable(5_comparison main.c)

install(TARGETS 5_comparison
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR})
