cmake_minimum_required(VERSION 3.8)

set(This ShopBase)

project(${This} 
    VERSION 1.0
    LANGUAGES CXX
)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_POSITION_INDEPENDENT_CODE ON)

enable_testing()

add_subdirectory(extern/gtest)
add_subdirectory(tests)
add_subdirectory(src/antique)
add_subdirectory(src/money)
add_subdirectory(src/shop)
add_subdirectory(apps/shopdemo)