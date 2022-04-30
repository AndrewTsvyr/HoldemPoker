cmake_minimum_required(VERSION 3.13)

project(poker)

add_executable(
poker src/main.cpp
src/cards.h
src/cards.cpp
src/stages.h
src/stages.cpp
)
