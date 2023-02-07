cmake_minimum_required(VERSION 3.5)

project(integer LANGUAGES C)

add_executable(integer main.c)

install(TARGETS integer
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR})
