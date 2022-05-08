#pragma once
#include <iostream>
#include <string>
//#include "players.h"
#include "timer/timer.h"
#include "random/random.h"

/*=================================
=========== combos value ==========
=================================*/

#define PAIR = 100
#define DUO_PAIR = 200
#define SET = 300
#define STRAIHGT = 400
#define FLUSH = 500
#define STRAIGHT_FLUSH = 600
#define FULL_HOUSE = 700
#define QUADS = 800
#define ROYAL_FLUSH = 900


#define DEBUG
#define ALLCARDS 52

enum class card_rank
{
    SPADES,
    CLUBS,
    HEART,
    DIAMONDS,
};

enum card_value
{
    
    TWO = 2,
    THREE,
    FOUR,
    FIVE,
    SIX,
    SEVEN,
    EIGHT,
    NINE,
    TEN,
    JACK,
    QUEEN,
    KING,
    ACE,

};

struct card
{
    card_rank rank;
    card_value value;
    int points;
};

struct deck_of_cards
{
    private:
    timer     time;
    randomize rnd;
    public:

    std::vector<card> cards;
    std::vector<card> board;
    
    void deck_create();
    
    std::string rank_to_string(card_rank rank);
    std::string value_to_string(card_value value);

    void shuffle_deck();

    int to_int(card_value value);
    int to_int(card_rank value);

    void board_create(); // stages.cpp start
    void combos_calc();
    void show_flop();
    void show_river();
    void show_tern(); // stages.cpp end

    void show_cards();
    void example_of_use(); //example of use timer and rnd
};
