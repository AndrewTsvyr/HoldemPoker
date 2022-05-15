#include <iostream>
#include <string>
#include "players.h"
#include <algorithm>
#include <iterator>
#include <memory>

#define WRONG_TYPE -1

player::player(const player& player) :
_name(player._name),
_money(player._money), 
_total_bet(player._total_bet), 
_bet(player._bet), 
_points(player._points) {}

player::player(std::string name, card first_card, card sec_card): 
_name(name),
_money(1000), 
_total_bet(0), 
_bet(0), 
_points(0)
{
    _hand.push_back(first_card);
    _hand.push_back(sec_card);
}



void room::add_player_name()
{
    std::string your_name;
    std::cout << "Type your name: ";
    std::cin >> your_name; 
    _players.push_back(std::make_shared<player>(your_name, get_card_deck().get_card(), get_card_deck().get_card()));
}

void room::create_enemies()
{
    int count;

    std::cout << "How many enemies you whant?" << std::endl;
    std::cout << " [1]        [2]        [3]" << std::endl;
    do 
    {
        std::cin >> count;
        switch (count)
        {
            case 1: 
                _players.push_back(std::make_shared<player>("Andrew", get_card_deck().get_card(), get_card_deck().get_card())); 
            break;
            case 2: 
                _players.push_back(std::make_shared<player>("Egor", get_card_deck().get_card(), get_card_deck().get_card())); 
                _players.push_back(std::make_shared<player>("Andrew", get_card_deck().get_card(), get_card_deck().get_card())); 
            break;
            case 3: 
                _players.push_back(std::make_shared<player>("Dima", get_card_deck().get_card(), get_card_deck().get_card())); 
                _players.push_back(std::make_shared<player>("Egor", get_card_deck().get_card(), get_card_deck().get_card())); 
                _players.push_back(std::make_shared<player>("Andrew", get_card_deck().get_card(), get_card_deck().get_card())); 
            break;
                
            default:
            std::cout << "Wrong, type [1][2][3]" << std::endl;
            count = WRONG_TYPE;
            break;
        }
        std::cout << _players.size() << std::endl;
        std::cin.clear();
        std::cin.ignore();
    } while (count != 1 && count != 2 && count != 3);
}

void room::show_players()
{
    std::cout << "Room plyers: " << std::endl;
    for(auto it : _players)
    {
        std::cout << "player: " << it->get_name() << " - Money:" << it->get_money() << std::endl;
    }
}


