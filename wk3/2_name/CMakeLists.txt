cmake_minimum_required(VERSION 3.5)

project(2_name LANGUAGES C)

add_executable(2_name main.c)

install(TARGETS 2_name
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR})
