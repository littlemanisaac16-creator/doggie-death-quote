cmake_minimum_required(VERSION 3.25)

# This is your Mod ID from before
project(doggie-death-quote VERSION 1.0.0)

# Find the Geode SDK
find_package(Geode REQUIRED)

# This tells the computer to use your main.cpp file
add_geode_mod(
    doggie.deathquote
    SOURCES src/main.cpp
)

# This links the Geode libraries so the code works
target_link_libraries(doggie.deathquote INTERFACE geode-sdk)