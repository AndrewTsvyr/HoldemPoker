#include <iostream>
#include <string>
#include "players.h"
#include <algorithm>
#include <iterator>

struct player
{
    std::string name;
    int money;
    int points;
    std::vector<card> hand;
};

