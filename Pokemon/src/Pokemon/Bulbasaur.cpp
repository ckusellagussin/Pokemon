#include "../../include/Pokemon/Bulbasaur.hpp"
#include "../../include/Pokemon/PokemonType.hpp"
#include "../../include/Utility/Utility.hpp"

Bulbasaur::Bulbasaur() : Pokemon("Bulbasaur", PokemonType::Grass, 100, 35)
{}

void Bulbasaur::vineWhip(Pokemon& Target)
{

    MSG << Name << " uses Vine Whip on " << Target.getName() << END;
    Target.TakeDamage(20);
    
}

void Bulbasaur::attack(Pokemon* target)
{
    vineWhip(*target);
    MSG << Name << " Attacks " << target->getName() << " for " << attackPower << " damage!" << END;
    MSG << target->getName()<< " has " << target->getHealth() << "from " << target->getMaxHealth() << END;
}

