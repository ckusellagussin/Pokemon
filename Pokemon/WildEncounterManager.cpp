#include "WildEncounterManager.hpp"
#include <cstdlib>
#include <ctime>


WildEncounterManager::WildEncounterManager()
{

    srand(time(0));
    
};

Pokemon WildEncounterManager::getRandomPokemonFromGrass(const Grass& grass)
{

    int randomIndex = rand() % grass.pokemonList.size();
    return grass.pokemonList[randomIndex];
    
}


