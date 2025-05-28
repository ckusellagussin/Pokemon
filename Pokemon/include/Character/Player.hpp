#ifndef PLAYER_HPP
#define PLAYER_HPP
#pragma once

#include "../Utility/Utility.hpp"
#include "../Pokemon/Pokemon.hpp"
#include <string>

class Player
{
public:
    
    std::string Name;
    Pokemon chosenPokemon;

    Player();
    Player(std::string p_name, Pokemon p_Chosen);

    void choosePokemon(int choice);
    
};


#endif