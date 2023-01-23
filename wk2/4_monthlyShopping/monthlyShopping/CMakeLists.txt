cmake_minimum_required(VERSION 3.5)

project(monthlyShopping LANGUAGES C)

add_executable(monthlyShopping main.c)

install(TARGETS monthlyShopping
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR})
