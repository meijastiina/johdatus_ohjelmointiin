cmake_minimum_required(VERSION 3.5)

project(basicCalculations LANGUAGES C)

add_executable(basicCalculations main.c)

install(TARGETS basicCalculations
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR})
