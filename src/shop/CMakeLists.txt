cmake_minimum_required(VERSION 3.8)

set(This Shop)

add_library(${This} ../../include/shop/shop.h shop.cpp)
target_link_libraries(${This} PUBLIC Money Antique)
