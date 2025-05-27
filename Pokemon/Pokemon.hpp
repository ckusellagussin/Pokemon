#ifndef POKEMON_HPP
#define POKEMON_HPP
#pragma once

#include <string>
#include <iostream>

enum class PokemonType;

class Pokemon
{
public:
    std::string Name;
    PokemonType Type;
    int Health;
    int maxHealth;
    int attackPower;
    
    Pokemon();

    Pokemon(std::string p_name, PokemonType p_type, int p_maxHealth, int attackPower);
    
    Pokemon(const Pokemon &other);

    ~Pokemon();

    void attack(Pokemon target);
    void TakeDamage(int damage);
    bool isFainted() const;
    void heal();
    
};

#endif