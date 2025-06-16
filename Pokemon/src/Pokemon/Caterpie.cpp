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

void Caterpie::attack(Pokemon* target)
{
    bugBite(*target);
    MSG << Name << " Attacks " << target->getName() << " for " << attackPower << " damage!" << END;
    MSG << target->getName()<< " has " << target->getHealth() << "from " << target->getMaxHealth() << END;
}
