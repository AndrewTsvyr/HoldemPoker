#include <iostream>
#include <algorithm>
#include <iterator>
#include "cards.h"

///------------------------------------------------------------------
///----------------------- Struct constructor -----------------------
///------------------------------------------------------------------

deck_of_cards::deck_of_cards()
{
    deck_create();
}

void deck_of_cards::deck_create()
{
    for (int card_rank_all = to_int(card_rank::SPADES); card_rank_all <= to_int(card_rank::DIAMONDS); card_rank_all++)
     {
        for (int card_value_all = to_int(card_value::TWO); card_value_all <= to_int(card_value::ACE); card_value_all++)
        {
            card c;
            c.rank =  (card_rank)  card_rank_all;
            c.value = (card_value) card_value_all;

            switch(c.value)
            {
                case card_value::TWO:   c.points = to_int(card_value::TWO);     break;
                case card_value::THREE: c.points = to_int(card_value::THREE);   break;
                case card_value::FOUR:  c.points = to_int(card_value::FOUR);    break;
                case card_value::FIVE:  c.points = to_int(card_value::FIVE);    break;
                case card_value::SIX:   c.points = to_int(card_value::SIX);     break;
                case card_value::SEVEN: c.points = to_int(card_value::SEVEN);   break;
                case card_value::EIGHT: c.points = to_int(card_value::EIGHT);   break;
                case card_value::NINE:  c.points = to_int(card_value::NINE);    break;
                case card_value::TEN:   c.points = to_int(card_value::TEN);     break;
                case card_value::JACK:  c.points = to_int(card_value::JACK);    break;
                case card_value::QUEEN: c.points = to_int(card_value::QUEEN);   break;
                case card_value::KING:  c.points = to_int(card_value::KING);    break;
                case card_value::ACE:   c.points = to_int(card_value::ACE);     break;
                default: std::cout <<   "Undefind bihavior. Incorrect card value: \n" <<
                                        "rank(" << rank_to_string(c.rank) << ")\n" <<
                                        "value(" << to_int(c.value) << ")" << std::endl; break;
            }

            int card_number = (13*card_rank_all) + card_value_all - 2;
            _cards.push_back(c);
        }
     }
}

///------------------------------------------------------------------
///----------------------- Types convertation -----------------------
///------------------------------------------------------------------

std::string deck_of_cards::rank_to_string(card_rank rank)
{
    switch (rank)
    {
    case card_rank::CLUBS:      return "CLUBS("    + std::to_string(to_int(rank)) + ")";
    case card_rank::SPADES:     return "SPADERS("  + std::to_string(to_int(rank)) + ")";
    case card_rank::HEART:      return "HEART("    + std::to_string(to_int(rank)) + ")";
    case card_rank::DIAMONDS:   return "DIAMONDS(" + std::to_string(to_int(rank)) + ")";
    default:                    return "UNKNOWN("  + std::to_string(to_int(rank)) + ")";
    }
}

std::string deck_of_cards::value_to_string(card_value value)
{
    switch (value)
    {
    case card_value::JACK:      return "JACK(" + std::to_string(to_int(value)) + ")";
    case card_value::QUEEN:     return "QUEEN(" + std::to_string(to_int(value)) + ")";
    case card_value::KING:      return "KING(" + std::to_string(to_int(value)) + ")";
    case card_value::ACE:       return "ACE(" + std::to_string(to_int(value)) + ")";
    default:                    return std::to_string(to_int(value));
    }
}

int deck_of_cards::to_int(card_value value)
{
    return static_cast<int>(value);
}

int deck_of_cards::to_int(card_rank value)
{
    return static_cast<int>(value);
}

///------------------------------------------------------------------
///------------------------- Stages of game -------------------------
///------------------------------------------------------------------

void deck_of_cards::shuffle_deck()
{
    std::random_device rd;
    std::mt19937 g(rd());
    std::shuffle(_cards.begin(), _cards.end(), g);
    for(int i = 0; i < _cards.size(); i++)
    {
        value_to_string (_cards[i].value); 
        rank_to_string  (_cards[i].rank); 
    }
}

void deck_of_cards::show_flop()
{
    for(int i = 0; i < 3; i++)
    {
        std::cout << "[ " 
        << value_to_string(_cards[i].value) << " | " << rank_to_string(_cards[i].rank) 
        << " ]" << std::endl;
    };
}  

void deck_of_cards::show_river()
{
    std::cout << "[ " 
    << value_to_string(_cards[3].value) << " | " << rank_to_string(_cards[3].rank) 
    << " ]" << std::endl;

}

void deck_of_cards::show_tern()
{
    std::cout << "[ " 
    << value_to_string(_cards[4].value) << " | " << rank_to_string(_cards[4].rank) 
    << " ]" << std::endl;

}

///------------------------------------------------------------------
///--------------------------- DEBUG ONLY ---------------------------
///------------------------------------------------------------------

#ifdef DEBUG

void deck_of_cards::show_cards()
{
    std::cout << "--------SHOW DECK--------" << std::endl;
    for(int i = 0; i < _cards.size(); i++)
    {
        std::cout << "[" << i << "] - " << 
        value_to_string (_cards[i].value) << "|" << 
        rank_to_string  (_cards[i].rank)  << std::endl;
    }
    std::cout << "--------------------------" << std::endl;
}

/*void deck_of_cards::example_of_use() // TODO: can delete
{
    // do delay on 1s or 1000milsec
    std::cout << "1sec delay..." << std::endl;
    _time.delay_milisec(1000); 

    // return random number from 1 to 200
    std::cout << "Random number from 1 to 200: " << _rnd.get_random(1, 200) << std::endl;

    //show deck
    show_cards();
    shuffle_deck();
    show_cards(); 
    room::your_name();
    show_flop();
    show_river();
    show_tern();
}*/

#endif

std::vector<card> deck_of_cards::get_deck()
{
    return _cards;
}
