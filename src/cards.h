#pragma once
#include <iostream>
#include <string>
//#include "players.h"
#include "timer/timer.h"
#include "random/random.h"





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
    public:
    ///------------- Getters/Setters --------------

    card get_card() 
    { 
        card cards = _cards.back(); 
        _cards.pop_back(); 
        return cards;  
    }


    ///------------ Struct constructor ------------
    
    deck_of_cards();
    void deck_create();

    ///------------ Types convertation ------------

    std::string rank_to_string  (card_rank   rank);
    std::string value_to_string (card_value value);
    int         to_int          (card_value value);
    int         to_int          (card_rank  value);

    ///-------------- Stages of game --------------

    void shuffle_deck();

    void show_flop();
    void show_river();
    void show_tern();

    ///---------------- DEBUG ONLY ----------------

    void show_cards();
    void example_of_use();

    ///------------------ Get Set -----------------


    ///--------------------------------------------

                                           private:

    ///============================================
    
    timer             _time;
    randomize         _rnd;
    std::vector<card> _cards;

    ///============================================
};
