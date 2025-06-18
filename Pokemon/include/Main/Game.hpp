#ifndef GAME_HPP
#define GAME_HPP
#pragma once

#include "../../include/Pokemon/Grass.hpp"
#include "../../include/Character/Player.hpp"

class Player;

class Game
{
public:
    Game();
    ~Game();
    void gameLoop(Player* player);   
private:
    Grass forestGrass;
    Pokemon* encounteredPokemon;
};



#endif
