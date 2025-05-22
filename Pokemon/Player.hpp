#ifndef PLAYER_HPP
#define PLAYER_HPP
#pragma once

#include "Utility.hpp"
#include "Pokemon.hpp"

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