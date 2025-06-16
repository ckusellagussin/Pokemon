#ifndef BULBASAUR_HPP
#define BULBASAUR_HPP

#pragma once
#include "Pokemon.hpp"

class Bulbasaur : public Pokemon
{

public:
    Bulbasaur();
private:
    void vineWhip(Pokemon& Target);
    void attack(Pokemon* target) override;

    
};


#endif
