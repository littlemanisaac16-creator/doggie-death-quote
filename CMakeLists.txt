cmake_minimum_required(VERSION 3.25)

project(doggie-death-quote VERSION 1.0.0)

# This is the "Magic Line" that fixes the Red X
list(APPEND CMAKE_PREFIX_PATH $ENV{GEODE_SDK})

find_package(Geode REQUIRED)

add_geode_mod(
    doggie.deathquote
    SOURCES src/main.cpp
)

target_link_libraries(doggie.deathquote INTERFACE geode-sdk)
