#include "../../include/Pokemon/Caterpie.hpp"
#include "../../include/Pokemon/PokemonType.hpp"
#include "../../include/Utility/Utility.hpp"

Caterpie::Caterpie() : Pokemon("Caterpie", PokemonType::Bug, 100, 10)
{}



void Caterpie::bugBite(Pokemon& Target)
{

    MSG << Name << " uses Bug Bite on " << Target.getName() << END;
    Target.TakeDamage(20);
    
}

