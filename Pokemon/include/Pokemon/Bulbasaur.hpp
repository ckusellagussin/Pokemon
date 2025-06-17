#ifndef BULBASAUR_HPP
#define BULBASAUR_HPP

#pragma once
#include "Pokemon.hpp"

class Bulbasaur : public Pokemon
{

public:
    Bulbasaur();
private:
    void attack(Move selectedMove, Pokemon* target) override;

    
};


#endif
