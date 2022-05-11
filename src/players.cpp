#include <iostream>
#include <string>
#include "players.h"
#include <algorithm>
#include <iterator>

#define WRONG_TYPE -1


player::player(std::string name, int first_card, int sec_card): 
_name(name),
_money(1000), 
_total_bet(0), 
_bet(0), 
_points(0)
{
    deck_of_cards deck;
    _hand.push_back (deck.get_card(first_card));
    _hand.push_back (deck.get_card(sec_card));
}



void room::add_player_name()
{
    std::string your_name;
    std::cout << "Type your name: ";
    std::cin >> your_name; 
    player u(your_name, 5, 6);
    _players.push_back(u);
}

void room::create_enemies()
{
    int count;
    player en1("Andrew", 7, 8);
    player en2("Egor", 9, 10);
    player en3("Dmitry", 11, 12);
    std::cout << "How many enemies you whant?" << std::endl;
    std::cout << " [1]        [2]        [3]" << std::endl;
    do 
    {
        std::cin >> count;
        switch (count)
        {
            case 1: _players.push_back(en1); break;
    
            case 2: _players.push_back(en1); 
                    _players.push_back(en2); break;
    
            case 3: _players.push_back(en1);
                    _players.push_back(en2);
                    _players.push_back(en3); break;
                
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




