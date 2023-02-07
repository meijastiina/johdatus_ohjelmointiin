cmake_minimum_required(VERSION 3.5)

project(integer2 LANGUAGES C)

add_executable(integer2 main.c)

install(TARGETS integer2
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR})
