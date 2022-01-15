cmake_minimum_required(VERSION 3.21)
project(Task1)

set(CMAKE_CXX_STANDARD 14)

add_executable(Task1 main.cpp Game.cpp Game.h GameComponent.cpp GameComponent.h DrawableGameComponent.cpp DrawableGameComponent.h)
