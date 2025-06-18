#ifndef POKEMON_HPP
#define POKEMON_HPP
#pragma once

#include <string>
#include <iostream>
#include <vector>
#include "../../include/Battle/Move.hpp"

enum class PokemonType;
struct Move;

class Pokemon
{
public:
    
    Pokemon();

    Pokemon(std::string p_name, PokemonType p_type, int p_maxHealth, std::vector<Move>);
    
    Pokemon(const Pokemon* &other);

    ~Pokemon();
    std::vector<Move> moves;
    virtual void attack(Move selectedMove, Pokemon* target);
    void TakeDamage(int damage);
    bool isFainted() const;
    void heal();
    void selectAndUseMove(Pokemon* target);
    void printAvailableMoves();
    int selectMove();
    void useMove(Move selectedMove, Pokemon* target);
    void reduceAttackPower(int reducedDamage);
    
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