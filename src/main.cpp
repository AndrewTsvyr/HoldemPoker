#include <iostream>
#include <memory>
#include "cards.h"
#include "players.h"
#include "game.h"

class application
{
    std::string _cfg;
    std::shared_ptr<room> _room;
public:
    application(std::string cfg) 
    :   _cfg(cfg),
        _room(std::make_shared<room>()) {}

    std::shared_ptr<room> get_room() { return _room; }
};

int main()
{
    application app("cfg.json");
    app.get_room()->create_enemies();
    app.get_room()->show_players();
}
