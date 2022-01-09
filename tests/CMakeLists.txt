cmake_minimum_required(VERSION 3.8)

set(LibName TestLib)

set(Sources
    ShopTests.cpp
    MoneyTests.cpp
    AntiqueTests.cpp
)

set(Headers
    include/ShopTests.h
    include/MoneyTests.h
    include/AntiqueTests.h
)

add_executable(${LibName} ${Sources} ${Headers})

target_link_libraries(${LibName} PRIVATE
    Shop
    Antique
    Money
    gtest_main
)

add_test(
    NAME ${LibName}
    COMMAND ${LibName}
)