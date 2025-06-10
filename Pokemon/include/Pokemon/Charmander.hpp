#ifndef CHARMANDER_HPP
#define CHARMANDER_HPP

#pragma once
#include "Pokemon.hpp"

class Charmander : public Pokemon
{

public:
    Charmander();
private:
    void flameBurst(Pokemon& Target);
   

    
};


#endif
