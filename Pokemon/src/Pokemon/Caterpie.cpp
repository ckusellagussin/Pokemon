#include "../../include/Pokemon/Caterpie.hpp"
#include "../../include/Pokemon/PokemonType.hpp"
#include "../../include/Utility/Utility.hpp"

Caterpie::Caterpie() : Pokemon("Caterpie", PokemonType::Bug, 100, 10)
{
    Move("String Shot", 15);
    Move("Sticky Web", 20);
    Move("Tackle", 10);
    
}


void Caterpie::attack(Move selectedMove, Pokemon* target)
{
    selectAndUseMove(target);

    if(selectedMove.name == "String Shot")
    {

        int reducedDamage {10};
        target->reduceAttackPower(reducedDamage);
        MSG << target->getName() <<"'s attack power has been reduced by: " << reducedDamage << "damage!" << END;
        
    }
}
