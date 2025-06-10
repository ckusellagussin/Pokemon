#include "../../include/Pokemon/Zubat.hpp"
#include "../../include/Pokemon/PokemonType.hpp"
#include "../../include/Utility/Utility.hpp"

Zubat::Zubat() : Pokemon("Zubat", PokemonType::Poison, 100, 20)
{}

void Zubat::superSonic(Pokemon& Target)
{

    MSG<< Name << " uses Supersonic on " << Target.getName() << END;
    Target.TakeDamage(20);
    
}
