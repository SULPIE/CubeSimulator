cmake_minimum_required(VERSION 3.22.1)

project("cubesimulator")

add_library(cubesimulator SHARED
        main.cpp
        CommandHandler.h
        CommandHandler.cpp
        Application.h
        Application.cpp
)

find_package(game-activity REQUIRED CONFIG)

target_link_libraries(cubesimulator
        game-activity::game-activity
        EGL
        GLESv3
        jnigraphics
        android
        log)