cmake_minimum_required(VERSION 3.5)

project(8_atoiAtof LANGUAGES C)

add_executable(8_atoiAtof main.c)

install(TARGETS 8_atoiAtof
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR})
