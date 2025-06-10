#include "../../include/Pokemon/Charmander.hpp"
#include "../../include/Pokemon/PokemonType.hpp"
#include "../../include/Utility/Utility.hpp"

Charmander::Charmander() : Pokemon("Charmander", PokemonType::Fire, 100, 35)
{}

void Charmander::flameBurst(Pokemon& Target)
{
    
    MSG << Name << " uses Flame Burst on " << Target.getName() << END;
    Target.TakeDamage(20);
    
}

