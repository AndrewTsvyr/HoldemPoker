#pragma once
#include <iostream>

int random_number(); // random 1-100
int random_52(); // random 1-52 (for cards)

struct player_hand
{
    int player_card_1 = 1;
    int player_card_2 = 1;
    void take_cards();
};

struct board    // stages of game
{
    void pre_flop();
    void flop();
    void river();
    void tern();
};
