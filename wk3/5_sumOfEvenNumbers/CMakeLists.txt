cmake_minimum_required(VERSION 3.5)

project(5_sumOfEvenNumbers LANGUAGES C)

add_executable(5_sumOfEvenNumbers main.c)

install(TARGETS 5_sumOfEvenNumbers
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR})
