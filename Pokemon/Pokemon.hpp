#ifndef POKEMON_HPP
#define POKEMON_HPP
#pragma once

#include "PokemonType.hpp"
#include <string>
#include <iostream>

class Pokemon
{
public:
    std::string Name;
    PokemonType Type;
    int Health;

    Pokemon();

    Pokemon(std::string p_name, PokemonType p_type, int p_health);
    
    Pokemon(const Pokemon &other);

    ~Pokemon();

    void attack();
};

#endif