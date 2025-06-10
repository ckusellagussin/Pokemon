#ifndef SQURTLE_HPP
#define SQURTLE_HPP

#pragma once
#include "Pokemon.hpp"

class Squrtle : public Pokemon
{

public:
    Squrtle();
private:
    void waterSplash(Pokemon& Target);

    
};


#endif
