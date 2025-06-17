#include "../../include/Pokemon/Zubat.hpp"
#include "../../include/Pokemon/PokemonType.hpp"
#include "../../include/Utility/Utility.hpp"

Zubat::Zubat() : Pokemon("Zubat", PokemonType::Poison, 100, 20)
{

    Move("Super Sonic", 20);
    Move("Tackle", 10);
    Move("Leech Life", 10);
    
}



void Zubat::attack(Move selectedMove, Pokemon* target)
{
    selectAndUseMove(target);

    if(selectedMove.name == "Leech Life")
    {

        this->Health =+ selectedMove.power * 0.6;

        if (this->Health > this -> maxHealth)
        {

            this -> Health = this->maxHealth;
            
        }
        
    }
    
    
}
