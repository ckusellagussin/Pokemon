#include "../../include/Battle/BattleManager.hpp"
#include <valarray>
#include "../../include/Character/Player.hpp"
#include "../../include/Pokemon/Pokemon.hpp"

using namespace N_Utility;
BattleState BattleManager::battleState;

void BattleManager::StartBattle(Player* player, Pokemon* wildPokemon)
{

    battleState.playerPokemon = player->chosenPokemon;
    battleState.wildPokemon = wildPokemon;
    battleState.playerTurn = true;
    battleState.battleOngoing = true;

    battle();
    
}

void BattleManager::battle()
{

   while(battleState.battleOngoing)
   {
       MSG << "Battle is still ongoing" << END;
        if(battleState.playerTurn)
        {

            battleState.playerPokemon->selectAndUseMove(battleState.wildPokemon);
            
        }
        else
        {

            battleState.wildPokemon->selectAndUseMove(battleState.playerPokemon);
            
        }
       updateBattleState();

       battleState.playerTurn = !battleState.playerTurn;

       utility::WaitForEnter();

       
   }

    HandleBattleOutcome();
    
}



void BattleManager::updateBattleState()
{

    if(battleState.playerPokemon -> isFainted())
    {

        battleState.battleOngoing = false;
        
    }
    else if (battleState.wildPokemon -> isFainted())
    {

        battleState.battleOngoing = false;
        
    }

    
}


void BattleManager::HandleBattleOutcome()
{
    if (battleState.playerPokemon->isFainted())
    {

        MSG << "Ah your " << battleState.playerPokemon->getName() <<" has fainted" << END;
        
    }
    else if (battleState.wildPokemon->isFainted())
    {

        MSG << "Ah your " << battleState.playerPokemon->getName() <<" has come out victorious!" << END;
        
    }
    
}

void BattleManager::stopBattle()
{

    battleState.battleOngoing = false;
    
}






