cmake_minimum_required(VERSION 3.5)

project(4_timesThree LANGUAGES C)

add_executable(4_timesThree main.c)

install(TARGETS 4_timesThree
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR})
