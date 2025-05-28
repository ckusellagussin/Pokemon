#ifndef BATTLE_STATE_HPP
#define BATTLE_STATE_HPP
#pragma once
#include "../Pokemon/Pokemon.hpp"

    struct BattleState
    {

        Pokemon* playerPokemon;
        Pokemon* wildPokemon;
        bool playerTurn;
        bool battleOutgoing;
        
    };
    

#endif