cmake_minimum_required(VERSION 3.5)

project(6_1_Name LANGUAGES C)

add_executable(6_1_Name main.c)

install(TARGETS 6_1_Name
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR})
