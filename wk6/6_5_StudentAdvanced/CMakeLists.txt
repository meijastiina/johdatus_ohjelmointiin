cmake_minimum_required(VERSION 3.5)

project(6_5_StudentAdvanced LANGUAGES C)

add_executable(6_5_StudentAdvanced main.c)

install(TARGETS 6_5_StudentAdvanced
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR})
