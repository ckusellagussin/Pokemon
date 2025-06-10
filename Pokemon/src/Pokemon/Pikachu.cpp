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

