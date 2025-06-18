#include "../../include/Pokemon/Pidgey.hpp"
#include "../../include/Battle/BattleManager.hpp"
#include "../../include/Pokemon/PokemonType.hpp"
#include "../../include/Utility/Utility.hpp"

Pidgey::Pidgey():Pokemon("Pidgey", PokemonType::Normal, 100,
{
    
    Move("Wing Attack", 20),
    Move("Tackle", 10),
    Move("Gust", 15),
    
})
{}



void Pidgey::attack(Move selectedMove, Pokemon* target)
{
    Pokemon::attack(selectedMove, target);

    if(selectedMove.name == "Gust")
    {

        if(rand()% 100 <20)
        {

            MSG << "...and blew the opponent away!" << END;
            BattleManager::stopBattle();
            N_Utility::utility::WaitForEnter();
            
        }
        
    }
    
}


    
