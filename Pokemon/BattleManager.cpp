#include "BattleManager.hpp"

#include <valarray>
#include "Utility.hpp"


void battle_manager::StartBattle(Player& player, Pokemon& wildPokemon)
{
    
    battle(player.chosenPokemon, wildPokemon, player);
    
}

void battle_manager::battle(Pokemon& playerPokemon, Pokemon& wildPokemon, Player player)
{

    while(!playerPokemon.isFainted() && !wildPokemon.isFainted())
    {

        playerPokemon.attack(wildPokemon);
        utility::WaitForEnter();
        
    }

    if(!wildPokemon.isFainted())
    {

        wildPokemon.attack(playerPokemon);
        utility::WaitForEnter();
        
    }

    utility::WaitForEnter();

    HandleBattleOutcome(player,playerPokemon.isFainted());
    
}

void battle_manager::HandleBattleOutcome(Player& playerPokemon, bool playerWon)
{

    if(playerWon)
    {

        MSG << playerPokemon.chosenPokemon.Name << "is the winner of this duel!" << END;
        
    }
    else
    {

        MSG << playerPokemon.chosenPokemon.Name << "has lost this duel, please heal your Pokemon at the centre" << END;
        
    }
    utility::WaitForEnter();
    std::cout << "You lose!" << END;
    
}



