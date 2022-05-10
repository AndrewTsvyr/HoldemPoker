#include <iostream>
#include <string>
#include "cards.h"
#include <algorithm>
#include <iterator>



struct player
{
    public:

    player(std::string _name);
    
    private:
    std::string _name;
    int         _money;
    int         _total_bet;
    int         _bet;
    int         _points;
};

struct room
{
    
    public:


    void your_name();
    void players_count();
    
    private:
    std::vector<player> players;
};


