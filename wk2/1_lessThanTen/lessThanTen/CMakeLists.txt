cmake_minimum_required(VERSION 3.5)

project(lessThanTen LANGUAGES C)

add_executable(lessThanTen main.c)

install(TARGETS lessThanTen
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR})
