#pragma once
#include <iostream>
#include <algorithm>
#include <vector>
#include "cards.h"
#include "players.h"

struct application
{
    
    

    
};

struct combo
{
    public:
    void set_combo_cards(int player_numb);
    
    int calculate_high_card();
    int total_points(int high_card_points, int combo_points);

    std::vector<card> _combo_cards;


};

