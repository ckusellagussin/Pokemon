#include "../../include/Pokemon/Squirtle.hpp"
#include "../../include/Pokemon/PokemonType.hpp"
#include "../../include/Utility/Utility.hpp"

Squrtle::Squrtle() : Pokemon("Squrtle", PokemonType::Water, 100, 35)
{}

void Squrtle::waterSplash(Pokemon& Target)
{

    MSG << Name << " uses Water Splash on " << Target.getName() << END;
    Target.TakeDamage(20);
    
}

void Squrtle::attack(Pokemon* target)
{
    waterSplash(*target);
    
}



