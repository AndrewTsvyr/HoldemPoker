#pragma once
#include <iostream>
#include <string>
#include "cards.h"
#include "game.h"
#include <algorithm>
#include <iterator>
#include <vector>



struct player
{
    public:

    player(std::string name, card first_card, card sec_card);

    card get_hand(int card) { return _hand[card]; }
    int set_points(int points) { return _points; };
    
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

    
    deck_of_cards get_card_deck() { return deck; }
    std::vector<player> get_players() {return _players;}
    card get_card(int player_numb, int card_numb) { return _players[player_numb].get_hand(card_numb); }
    int set_player_points(int player_numb, int points) { return _players[player_numb].set_points(points); }


    public:


    void add_player_name();
    void create_enemies();
    
    
    private:
    deck_of_cards deck;
    std::vector<player> _players;
};


