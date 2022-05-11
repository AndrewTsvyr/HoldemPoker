#include <iostream>
#include <string>
#include "cards.h"
#include <algorithm>
#include <iterator>
#include <vector>



struct player
{
    public:

    player(std::string name, int first_card, int sec_card);

    card get_hand(int card) { return _hand[card]; }
    
    private:
    std::vector<card> _hand;
    std::string       _name;
    int               _money;
    int               _total_bet;
    int               _bet;
    int               _points;
};

struct room
{
    public:  //getters setters

    std::vector<player> get_players() {return _players;}
    card get_card(int player_numb, int card_numb) { return _players[card_numb].get_hand(card_numb); }


    public:


    void add_player_name();
    void create_enemies();
    
    
    private:
    std::vector<player> _players;
};


