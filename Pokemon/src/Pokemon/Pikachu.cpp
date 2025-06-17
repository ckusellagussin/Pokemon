#include "../../include/Pokemon/Pikachu.hpp"
#include "../../include/Pokemon/PokemonType.hpp"
#include "../../include/Utility/Utility.hpp"

Pikachu::Pikachu():Pokemon("Pikachu", PokemonType::Electric, 100, 20)
{

    Move("Thundershock", 25);
    Move("Thunderbolt", 80);
    Move("Tackle", 10);
    
}

void Pikachu::attack(Move selectedMove, Pokemon* target)
{
    selectAndUseMove(target);

    if(selectedMove.name == "Thunderbolt")
    {

        if(rand() % 100 < 80)
        {

            MSG << "Thunderbolt hits " << target->getName() << END;
            N_Utility::utility::WaitForEnter();
            
        }
        else
        {

            MSG << "Thunderbolt misses" << END;
            
        }
        
    }
    
}


