cmake_minimum_required(VERSION 3.16)
project(roblox-fps-unlocker CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(robloxfpsunlocker
    src/main.cpp
    src/unlocker.cpp
    src/profiles.cpp
    src/monitor.cpp
)

target_include_directories(robloxfpsunlocker PRIVATE include)

if(WIN32)
    target_link_libraries(robloxfpsunlocker PRIVATE userenv)
endif()
