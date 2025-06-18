#include "../../include/Battle/WildEncounterManager.hpp"
#include "../../include/Pokemon/Pokemon.hpp"
#include "../../include/Pokemon/Grass.hpp"
#include <cstdlib>
#include <ctime>


WildEncounterManager::WildEncounterManager()
{

    
};

Pokemon* WildEncounterManager::getRandomPokemonFromGrass(Grass& grass)
{

    int randomIndex = rand() % grass.pokemonList.size();

    Pokemon* encounteredPokemon = grass.pokemonList[randomIndex];
    return encounteredPokemon;
    
}


