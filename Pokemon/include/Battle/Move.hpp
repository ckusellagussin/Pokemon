#ifndef MOVE_HPP
#define MOVE_HPP
#pragma once
#include <string>

struct Move
{
    std::string name;
    int power;
    


Move(const std::string& moveName, int movePower)
{

    name = moveName;
    power = movePower;
    
}

};



#endif
