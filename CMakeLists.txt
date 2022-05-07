cmake_minimum_required(VERSION 3.13)

project(poker)

set(SOURCES
    src/main.cpp
    src/cards.cpp
    src/stages.cpp
    src/timer/timer.cpp
    src/random/random.cpp
)

set(HEADERS 
    src/cards.h
    src/stages.h
    src/timer/timer.h
    src/random/random.h
)

add_executable(poker ${SOURCES} ${HEADERS})
