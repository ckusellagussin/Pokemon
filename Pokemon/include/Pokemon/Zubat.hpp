#ifndef PIKACHU_HPP
#define PIKACHU_HPP

#pragma once
#include "Pokemon.hpp"

class Zubat : public Pokemon
{

public:
    Zubat();
private:
    void superSonic(Pokemon& Target);
    void attack(Pokemon* target) override;
    
};


#endif

