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
    player(const player& player);
    std::string get_name() { return _name; }
    int get_money() {return _money; }
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

struct table
{
    std::vector<card> _table_cards;

    int card_on_table(deck_of_cards& deck)
    {
        if(_table_cards.size() < 5)
            _table_cards.push_back(deck.get_card());

        return _table_cards.size();
    }
    
    void show_cards_on_table()
    {
        std::cout << "Cards on the table: " << std::endl;
        for(auto it : _table_cards)
        {
            std::cout << deck_of_cards::value_to_string(it.value) << " " << deck_of_cards::rank_to_string(it.rank) << std::endl;
        }
    }
};

struct room
{
public:
    room() { 
        deck.shuffle_deck(); 
    }

public:  //getters setters
    deck_of_cards& get_card_deck() { return deck; }
    std::vector<std::shared_ptr<player>> get_players() {return _players;}
    card get_card(int player_numb, int card_numb) { return _players[player_numb]->get_hand(card_numb); }
    int set_player_points(int player_numb, int points) { return _players[player_numb]->set_points(points); }

    void on_turn()
    {
        if(_table._table_cards.size() < 3) { // if flop
            _table.card_on_table(deck);
            _table.card_on_table(deck);
            _table.card_on_table(deck);
        }
        else //turn river
        {
            _table.card_on_table(deck);
        }

        _table.show_cards_on_table();
    }

public:

    void show_players();
    void add_player_name();
    void create_enemies();


private:
    deck_of_cards deck;
    std::vector<std::shared_ptr<player>> _players;
    table _table;
};


