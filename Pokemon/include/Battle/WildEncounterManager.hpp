#ifndef WCM_HPP
#define WCM_HPP
#pragma once

#include "../../include/Pokemon/Grass.hpp"
#include <vector>


class WildEncounterManager
{
public:

    WildEncounterManager();
    Pokemon* getRandomPokemonFromGrass(Grass& grass);

    
};

#endif
