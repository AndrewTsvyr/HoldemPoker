#include <iostream>
#include "cards.h"
#define DEBUG

enum class card_rank
{
    SPADES,
    CLUBS,
    HEART,
    DIAMONDS,
};

enum class card_value
{
    
    TWO = 2,
    THREE,
    FOUR,
    FIVE,
    SIX,
    SEVEN,
    EIGHT,
    NINE,
    TEN,
    JACK,
    QUEEN,
    KING,
    ACE,

};

struct card
{
    card_rank rank;
    card_value value;
    int points;
};

/*__2__3__4__5__6__7__8__9__10__J__Q__K__T__
=P|2P==3P=4P=5P=6P=7P=8P=9P=10P=JP=QP=KP=TP= ||
=C|2P==3C=4C=5C=6C=7C=8C=9C=10C=JC=QC=KC=TC= || massiv takogo vida budet
=H|2H==3H=4H=5H=6H=7H=8H=9H=10H=JH=QH=KH=TH= || sozdan dalee v deck_create
=B|2P==3P=4P=5P=6P=7P=8P=9P=10P=JP=QP=KP=TP= ||
===*/

void deck_of_cards::deck_create()
{
    card deck_fill[52];
    for (int card_rank_all = (int)card_rank::SPADES; card_rank_all <= (int)card_rank::DIAMONDS; card_rank_all++)
    {
        for (int card_value_all = (int)card_value::TWO; card_value_all <= (int)card_value::ACE; card_value_all++)
        {
            card c;
            c.rank = (card_rank)card_rank_all;
            c.value = (card_value)card_value_all;
    
            if (c.value == card_value::TWO)
            {
                c.points = static_cast<int>(card_value::TWO);
            }

            else if (c.value == card_value::THREE)
            {
                c.points = static_cast<int>(card_value::THREE);
            }
        
            else if (c.value == card_value::FOUR)
            {
                c.points = static_cast<int>(card_value::FOUR);
            }               
            else if (c.value == card_value::FIVE)
            {
                c.points = static_cast<int>(card_value::FIVE);
            }
            else if (c.value == card_value::SIX)
            {
                c.points = static_cast<int>(card_value::SIX);
            }
            else if (c.value == card_value::SEVEN)
            {
                c.points = static_cast<int>(card_value::SEVEN);
            }
            else if (c.value == card_value::EIGHT)
            {
                c.points = static_cast<int>(card_value::EIGHT);
            }
            else if (c.value == card_value::NINE)
            {
                c.points = static_cast<int>(card_value::NINE);
            }
                else if (c.value == card_value::TEN)
            {
                c.points = static_cast<int>(card_value::TEN);
            }
                else if (c.value == card_value::JACK)
            {
                c.points = static_cast<int>(card_value::JACK);
            }
                else if (c.value == card_value::QUEEN)
            {
                c.points = static_cast<int>(card_value::QUEEN);
            }
                else if (c.value == card_value::KING)
            {
                c.points = static_cast<int>(card_value::KING);
            }
                else if (c.value == card_value::ACE)
            {
                c.points = static_cast<int>(card_value::ACE);
            }

            int card_number = (13*card_rank_all) + card_value_all; //poryadkovy nomer karty
            deck_fill[card_number] = c;

            #ifdef DEBUG

            std::cout << static_cast<int>(c.rank) << " #generate card# " << static_cast<int>(c.value) << std::endl;

            #endif

            
        }
    }
};



  

