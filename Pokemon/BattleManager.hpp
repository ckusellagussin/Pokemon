#ifndef BATTLE_MANAGER_HPP
#define BATTLE_MANAGER_HPP
#pragma once

#include "Pokemon.hpp"
#include "Player.hpp"

class battle_manager
{
    
    public:
        void StartBattle(Player& player, Pokemon& wildPokemon);
    
    private:
        void battle(Pokemon& playerPokemon, Pokemon& wildPokemon, Player player);
        void HandleBattleOutcome(Player& playerPokemon, bool playerWon);
    
};

#endif