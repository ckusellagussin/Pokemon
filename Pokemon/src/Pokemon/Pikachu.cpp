#include "../../include/Pokemon/Pikachu.hpp"
#include "../../include/Pokemon/PokemonType.hpp"
#include "../../include/Utility/Utility.hpp"

Pikachu::Pikachu():Pokemon("Pikachu", PokemonType::Electric, 100, 20)
{}

void Pikachu::thunderShock(Pokemon& Target)
{

    MSG<< Name << " uses Thundershock on " << Target.getName() << END;
    Target.TakeDamage(20);
    
}

void Pikachu::attack(Pokemon* target)
{
    thunderShock(*target);
    MSG << Name << " Attacks " << target->getName() << " for " << attackPower << " damage!" << END;
    MSG << target->getName()<< " has " << target->getHealth() << "from " << target->getMaxHealth() << END;
    
}


