cmake_minimum_required(VERSION 3.5)

project(6_3_WordCount LANGUAGES C)

add_executable(6_3_WordCount main.c)

install(TARGETS 6_3_WordCount
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR})
