cmake_minimum_required(VERSION 3.5)

project(1_HundredFiveTimes LANGUAGES C)

add_executable(1_HundredFiveTimes main.c)

install(TARGETS 1_HundredFiveTimes
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR})
