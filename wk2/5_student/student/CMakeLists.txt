cmake_minimum_required(VERSION 3.5)

project(student LANGUAGES C)

add_executable(student main.c)

install(TARGETS student
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR})
