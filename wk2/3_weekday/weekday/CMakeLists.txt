cmake_minimum_required(VERSION 3.5)

project(weekday LANGUAGES C)

add_executable(weekday main.c)

install(TARGETS weekday
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR})
