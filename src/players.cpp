#include <iostream>
#include <string>
#include "players.h"
#include <algorithm>
#include <iterator>

#define WRONG_TYPE -1


player::player(std::string _name)
{
    _name;
    _money = 1000;
    _total_bet = 0;
    _bet = 0;
    _points = 0;
}

void room::your_name()
{
    std::string your_name;
    std::cout << "Type your name: ";
    std::cin >> your_name; 
    player u(your_name);
    players.push_back(u);
}

void room::players_count()
{
    int count;
    player en1("Andrew");
    player en2("Egor");
    player en3("Dmitry");
    std::cout << "How many enemy's you whant?" << std::endl;
    std::cout << " [1]        [2]        [3]" << std::endl;
    do 
    {
        std::cin >> count;
        switch (count)
        {
            case 1: players.push_back(en1); break;
    
            case 2: players.push_back(en1); 
                    players.push_back(en2); break;
    
            case 3: players.push_back(en1);
                    players.push_back(en2);
                    players.push_back(en3); break;
                
            default:
            std::cout << "Wrong, type [1][2][3]" << std::endl;
            count = WRONG_TYPE;
            break;
        }
        std::cout << players.size() << std::endl;
        std::cin.clear();
        std::cin.ignore();
    } while (count != 1 && count != 2 && count != 3);
}




