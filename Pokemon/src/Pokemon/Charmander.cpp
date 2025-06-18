#include "../../include/Pokemon/Charmander.hpp"
#include "../../include/Pokemon/PokemonType.hpp"
#include "../../include/Utility/Utility.hpp"

Charmander::Charmander() : Pokemon("Charmander", PokemonType::Fire, 100,
{

    Move("Ember", 25),
    Move("Tackle", 10),
    Move("Blazing Charge", 70),
})
{}



void Charmander::attack(Move selectedMove, Pokemon* target)
{
   
    Pokemon::attack(selectedMove, target);

    if(selectedMove.name == "Blazing Charge")
    {
        int recoilDamage = 10;
        this->TakeDamage(recoilDamage);
        N_Utility::utility::WaitForEnter();
    }

    
}

