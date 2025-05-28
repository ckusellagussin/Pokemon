#include "../../include/Battle/WildEncounterManager.hpp"
#include "../../include/Pokemon/Pokemon.hpp"
#include "../../include/Pokemon/Grass.hpp"
#include <cstdlib>
#include <ctime>


WildEncounterManager::WildEncounterManager()
{

    
};

Pokemon WildEncounterManager::getRandomPokemonFromGrass(const Grass& grass)
{

    int randomIndex = rand() % grass.pokemonList.size();
    return grass.pokemonList[randomIndex];
    
}


