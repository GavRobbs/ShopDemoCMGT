cmake_minimum_required(VERSION 3.8)

set(AppName ShopDemo)

set(Sources
    shopdemo.cpp
)

set(Headers
    include/shopdemo.h
)


add_executable(${AppName} ${Sources} ${Headers})

target_link_libraries(${AppName} PRIVATE Shop)