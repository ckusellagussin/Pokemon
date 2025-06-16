#ifndef PLAYER_HPP
#define PLAYER_HPP
#pragma once

#include "../Utility/Utility.hpp"
#include "../Pokemon/Pokemon.hpp"
#include <string>

class Player
{
public:
    
    std::string name;
    Pokemon* chosenPokemon;

    Player();
    Player(std::string p_name);

    void choosePokemon(int choice);
    
};


#endif