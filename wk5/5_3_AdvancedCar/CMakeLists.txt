cmake_minimum_required(VERSION 3.5)

project(5_3_AdvancedCar LANGUAGES C)

add_executable(5_3_AdvancedCar main.c)

install(TARGETS 5_3_AdvancedCar
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR})
