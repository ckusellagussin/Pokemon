#ifndef GRASS_HPP
#define GRASS_HPP
#pragma once

#include <vector>
#include <iostream>
#include <string>
#include "Pokemon.hpp"

struct Grass
{

    std::vector<Pokemon> pokemonList;
    int encounterRate;
    std::string Environment;
    
};



#endif
