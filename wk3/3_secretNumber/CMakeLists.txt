cmake_minimum_required(VERSION 3.5)

project(3_secretNumber LANGUAGES C)

add_executable(3_secretNumber main.c)

install(TARGETS 3_secretNumber
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR})
