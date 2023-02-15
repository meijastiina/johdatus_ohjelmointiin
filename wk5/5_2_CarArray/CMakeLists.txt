cmake_minimum_required(VERSION 3.5)

project(5_2_CarArray LANGUAGES C)

add_executable(5_2_CarArray main.c)

install(TARGETS 5_2_CarArray
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR})
