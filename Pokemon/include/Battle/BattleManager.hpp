#ifndef BATTLE_MANAGER_HPP
#define BATTLE_MANAGER_HPP
#pragma once

#include "BattleState.hpp"
#include "../Character/Player.hpp"
#include "../Pokemon/Pokemon.hpp"

class BattleManager
{
    public:
        void StartBattle(Player& player, Pokemon& wildPokemon);
    
    private:
        BattleState* battleState = new BattleState();
        void battle(Player player);
        void HandleBattleOutcome();
        void updateBattleState();
    
};

#endif