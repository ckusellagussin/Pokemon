#ifndef SQURTLE_HPP
#define SQURTLE_HPP

#pragma once
#include "Pokemon.hpp"

class Squrtle : public Pokemon
{

public:
    Squrtle();
private:
    void attack(Move selectedMove, Pokemon* target) override;
    
};


#endif
