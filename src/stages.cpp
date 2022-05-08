#include <iostream>
#include <string>
#include "cards.h"
#include <algorithm>
#include <iterator>

/*=================================
=========== combos value ==========
=================================*/

#define PAIR = 100
#define DUO_PAIR = 200
#define SET = 300
#define STRAIHGT = 400
#define FLUSH = 500
#define STRAIGHT_FLUSH = 600
#define FULL_HOUSE = 700
#define QUADS = 800
#define ROYAL_FLUSH = 900



void deck_of_cards::board_create()
{
    for(int i = 0; i < 5; i++)
    {
        board.push_back(cards[i]);
        
        #ifdef DEBUG

        std::cout << "[" << i << "] - " <<
        #endif
        value_to_string(board[i].value)
        #ifdef DEBUG
        << "|" << 
        #else 
        ;
        #endif
        rank_to_string(board[i].rank)
        #ifdef DEBUG
        << std::endl;
        #else 
        ;
        #endif
    };
   
}



