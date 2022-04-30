#include <iostream>
#include "cards.h"

enum class card_rank
{
    PIKE,
    CHRIST,
    HEART,
    BUBY
};

enum class card_value
{
    
    TWO,
    THREE,
    FOUR,
    FIVE,
    SIX,
    SEVEN,
    EIGHT,
    NINE,
    TEN,
    JVALET,
    QUEEN,
    KING,
    TUZ,

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
    for (int card_rank_all = (int)card_rank::PIKE; card_rank_all <= (int)card_rank::BUBY; card_rank_all++)
    {
        for (int card_value_all = (int)card_value::TWO; card_value_all <= (int)card_value::TUZ; card_value_all++)
        {
            card c;
            c.rank = (card_rank)card_rank_all;
            c.value = (card_value)card_value_all;
    
            if (c.value == card_value::TWO)
            {
                c.points = 2;
            }

            else if (c.value == card_value::THREE)
            {
                c.points = 3;
            }
        
            else if (c.value == card_value::FOUR)
            {
               c.points = 4;
            }               
            else if (c.value == card_value::FIVE)
            {
                c.points = 5;
            }
            else if (c.value == card_value::SIX)
            {
                c.points = 6;
            }
            else if (c.value == card_value::SEVEN)
            {
                c.points = 7;
            }
            else if (c.value == card_value::EIGHT)
            {
                c.points = 8;
            }
            else if (c.value == card_value::NINE)
            {
                c.points = 9;
            }
                else if (c.value == card_value::TEN)
            {
                c.points = 10;
            }
                else if (c.value == card_value::JVALET)
            {
                c.points = 11;
            }
                else if (c.value == card_value::QUEEN)
            {
                c.points = 12;
            }
                else if (c.value == card_value::KING)
            {
                c.points = 13;
            }
                else if (c.value == card_value::TUZ)
            {
                c.points = 14;
            }

            int card_number = (13*card_rank_all) + card_value_all; //poryadkovy nomer karty
            deck_fill[card_number] = c;
        }
    }
};

// schet mastey i nominala v masive idet s 0 (!!!)

  

