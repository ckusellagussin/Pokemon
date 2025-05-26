#ifndef WCM_HPP
#define WCM_HPP
#pragma once

#include "Grass.hpp"
#include <vector>


class WildEncounterManager
{
public:

    WildEncounterManager();
    Pokemon getRandomPokemonFromGrass(const Grass& grass);

    
};

#endif
