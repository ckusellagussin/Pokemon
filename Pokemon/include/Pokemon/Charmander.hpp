#ifndef CHARMANDER_HPP
#define CHARMANDER_HPP

#pragma once
#include "Pokemon.hpp"

class Charmander : public Pokemon
{

public:
    Charmander();
private:
    void attack(Move selectedMove, Pokemon* target) override;
    
};


#endif
