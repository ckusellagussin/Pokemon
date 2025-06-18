#include "../../include/Pokemon/Squirtle.hpp"
#include "../../include/Pokemon/PokemonType.hpp"
#include "../../include/Utility/Utility.hpp"

Squrtle::Squrtle() : Pokemon("Squrtle", PokemonType::Water, 100, 
{

    Move("Water Gun", 25) ,
    Move("Tackle", 10),
    Move("Rapid Spin", 10),
    
}) {}


void Squrtle::attack(Move selectedMove, Pokemon* target)
{
    Pokemon::attack(selectedMove, target);

    if(selectedMove.name == "Rapid Spin")
    {
        int hits = (rand() % 4 +2);

        for (int i=0; i<hits;++i)
        {

            Pokemon::attack(selectedMove,target);

        }

        MSG << "Rapid spin hits " << hits << " times" << END;
    }
    
}



