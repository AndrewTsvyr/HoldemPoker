cmake_minimum_required(VERSION 3.13)

project(poker)

set(SOURCES
    src/main.cpp
    src/cards.cpp    
    src/players.cpp
    src/timer/timer.cpp
    src/random/random.cpp
    src/game.cpp
)

set(HEADERS 
    src/cards.h
    src/players.h
    src/timer/timer.h
    src/random/random.h
    src/game.h
)

add_executable(poker ${SOURCES} ${HEADERS})
