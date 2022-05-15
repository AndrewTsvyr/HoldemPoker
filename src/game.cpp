#include <iostream>
#include <vector>
#include "game.h"


void combo::set_combo_cards(int player_numb)
{
    deck_of_cards deck;
    room r;
    for (int i = 0; i > 5; i++)
    {
    _combo_cards.push_back(deck.get_card());
    };
    _combo_cards.push_back(r.get_card(player_numb, 0));
    _combo_cards.push_back(r.get_card(player_numb, 1));

}


int combo::calculate_high_card()
{
    return 0;
    //return r.set_player_points(player_numb, points);
}

int combo::total_points(int high_card_points, int combo_points)
{
    int total_point = high_card_points + combo_points;
    return total_point;
}