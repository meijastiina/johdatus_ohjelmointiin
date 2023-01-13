cmake_minimum_required(VERSION 3.5)

project(celsiusFahrenheit LANGUAGES C)

add_executable(celsiusFahrenheit main.c)

install(TARGETS celsiusFahrenheit
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR})
