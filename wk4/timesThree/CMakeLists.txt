cmake_minimum_required(VERSION 3.5)

project(timesThree LANGUAGES C)

add_executable(timesThree main.c)

install(TARGETS timesThree
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR})
