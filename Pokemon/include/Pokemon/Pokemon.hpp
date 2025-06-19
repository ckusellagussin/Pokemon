#ifndef POKEMON_HPP
#define POKEMON_HPP
#pragma once

#include <string>
#include <iostream>
#include <vector>
#include "../../include/Battle/Move.hpp"
#include "../Battle/IStatusEffect.hpp"
#include "../Battle/StatusEffectType.hpp"

enum class PokemonType;
struct Move;

class Pokemon
{
public:
    
    Pokemon();

    Pokemon(std::string p_name, PokemonType p_type, int p_maxHealth, std::vector<Move>);
    
    Pokemon(const Pokemon* &other);
    IStausEffect* appliedEffect;

    ~Pokemon();
    std::vector<Move> moves;
    virtual void attack(Move selectedMove, Pokemon* target);
    void TakeDamage(int damage);
    bool isFainted() const;
    void selectAndUseMove(Pokemon* target);
    void printAvailableMoves();
    int selectMove();
    void useMove(Move selectedMove, Pokemon* target);
    void reduceAttackPower(int reducedDamage);
    bool canAttack();
    void applyEffect(StatusEffectType effectToApply);
    void clearEffect();
    bool canApplyEffect();
    void heal();
 
    
    std::string getName() {return Name;}
    int getAttackPower() {return attackPower;}
    int getMaxHealth() {return maxHealth;}
    int getHealth() {return Health;}



protected:
    std::string Name;
    PokemonType Type;
    int Health;
    int maxHealth;
    int attackPower;
    
};


#endif