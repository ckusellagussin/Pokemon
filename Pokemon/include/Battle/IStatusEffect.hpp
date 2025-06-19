#ifndef I_STATUS_EFFECT_HPP
#define I_STATUS_EFFECT_HPP
#pragma once
#include "../Pokemon/Pokemon.hpp"

class IStausEffect
{
public:
    virtual void applyEffect(Pokemon* target) = 0 ;
    virtual std::string getEffectName()= 0 ;
    virtual bool turnEndEffect(Pokemon* target) = 0 ;
    virtual void clearEffect(Pokemon* target) = 0 ;

    virtual ~IStausEffect() = default;


    
};


#endif