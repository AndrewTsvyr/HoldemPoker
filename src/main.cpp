#include <iostream>
#include "cards.h"
#include "players.h"

int main()
{

    deck_of_cards deck;
    room r;
    //show deck
    deck.show_cards();
    deck.shuffle_deck();
    deck.show_cards(); 
    r.add_player_name();
    r.create_enemies();
    deck.show_flop();
    deck.show_river();
    deck.show_tern();
}
