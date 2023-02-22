cmake_minimum_required(VERSION 3.5)

project(6_2_ReplaceCommas LANGUAGES C)

add_executable(6_2_ReplaceCommas main.c)

install(TARGETS 6_2_ReplaceCommas
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR})
