#ifndef PIKACHU_HPP
#define PIKACHU_HPP

#pragma once
#include "Pokemon.hpp"

class Pikachu : public Pokemon
{

public:
    Pikachu();
private:
    void thunderShock(Pokemon& Target);
    void attack(Pokemon* target) override;

    
};


#endif
