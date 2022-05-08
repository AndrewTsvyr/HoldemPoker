#include <iostream>
#include <string>
#include "cards.h"
#include <algorithm>
#include <iterator>



struct player
{
    std::string name ="unnamed";
    int money;
    int total_bet;
    int bet;
    int points;
    std::vector<card> hand;
};



struct room
{

    std::vector<player> players;
    
    void player_count();
    void create_name();

    


};


