#ifndef CATERPIE_HPP
#define CATERPIE_HPP

#pragma once
#include "Pokemon.hpp"

class Caterpie : public Pokemon
{

public:
    Caterpie();
private:
    void attack(Move selectedMove, Pokemon* target) override;
    
};


#endif


