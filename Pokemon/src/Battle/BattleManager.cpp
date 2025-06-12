#include "../../include/Battle/BattleManager.hpp"
#include <valarray>
#include "../../include/Character/Player.hpp"
#include "../../include/Pokemon/Pokemon.hpp"

using namespace N_Utility;

void BattleManager::StartBattle(Player& player, Pokemon& wildPokemon)
{

    battleState->playerPokemon = &player.chosenPokemon;
    battleState->wildPokemon = &wildPokemon;
    battleState->playerTurn = true;
    battleState->battleOutgoing = true;

    battle(player);
    
}

void BattleManager::battle(Player player)
{

   while(battleState->battleOutgoing)
   {

        if(battleState->playerTurn)
        {

            battleState->playerPokemon->attack(*battleState->wildPokemon);
            
        }
        else
        {

            battleState->wildPokemon->attack((*battleState->playerPokemon));
            
        }
       updateBattleState();

       battleState->playerTurn = !battleState->playerTurn;

       utility::WaitForEnter();

       
   }

    HandleBattleOutcome();
    
}


void BattleManager::updateBattleState()
{

    if(battleState->playerPokemon->isFainted())
    {

        battleState->battleOutgoing = false;
        
    }
    else if (battleState->wildPokemon -> isFainted())
    {

        battleState->battleOutgoing = false;
        
    }

    
}


void BattleManager::HandleBattleOutcome()
{
    if (battleState->playerPokemon->isFainted())
    {

        MSG << "Ah your " << battleState->playerPokemon->getName() <<" has fainted" << END;
        
    }
    else if (battleState->wildPokemon->isFainted())
    {

        MSG << "Ah your " << battleState->playerPokemon->getName() <<" has come out victorious!" << END;
        
    }
    
    delete battleState;
}



