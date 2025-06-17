#ifndef BATTLE_MANAGER_HPP
#define BATTLE_MANAGER_HPP
#pragma once

#include "BattleState.hpp"
#include "../Character/Player.hpp"
#include "../Pokemon/Pokemon.hpp"

class BattleManager
{
    public:
        void StartBattle(Player* player, Pokemon* wildPokemon);
        static void stopBattle();
    
    private:
        static BattleState battleState;
        void battle();
        void HandleBattleOutcome();
        void updateBattleState();
    
};

#endif