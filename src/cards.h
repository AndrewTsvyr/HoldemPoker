#pragma once
#include <iostream>
#include <string>
#include "timer/timer.h"
#include "random/random.h"

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
    timer time;
    randomize rnd;
    std::vector<card> cards;

public:
    void deck_create();
    std::string type_to_string(card_rank rank);
    int to_int(card_value value);
    int to_int(card_rank value);
    
    void example_of_use(); //example of use timer and rnd
};
