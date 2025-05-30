#include "../../include/Pokemon/Pidgey.hpp"
#include "../../include/Pokemon/PokemonType.hpp"
#include "../../include/Utility/Utility.hpp"

Pidgey::Pidgey():Pokemon("Pidgey", PokemonType::Normal, 100, 35)
{}

void Pidgey::wingAttack(Pokemon& Target)
{

    MSG << Name << " uses Wing Attack on " << Target.Name << END;
    Target.TakeDamage(20);
    
};

    
