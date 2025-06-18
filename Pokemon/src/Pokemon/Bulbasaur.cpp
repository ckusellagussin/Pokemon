#include "../../include/Pokemon/Bulbasaur.hpp"
#include "../../include/Pokemon/PokemonType.hpp"
#include "../../include/Utility/Utility.hpp"

Bulbasaur::Bulbasaur() : Pokemon("Bulbasaur", PokemonType::Grass, 100,
{

    Move("Vine Whip", 25),
    Move("Tackle", 10),
    
})
{}



void Bulbasaur::attack(Move selectedMove, Pokemon* target)
{
    Pokemon::attack(selectedMove, target);

    if(selectedMove.name == "Vine Whip")
    {

        int secondChanceHit = rand() % 2;

        if (secondChanceHit == 1)
        {
            Pokemon::attack(selectedMove, target);
            std::cout << Name << " hits again with a second " << selectedMove.name << END;
        }
        else
        {

         MSG << target->getName() << " dodged the second hit" << END;   
            
        }
        
    }

    

}

