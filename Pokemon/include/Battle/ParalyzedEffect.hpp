#ifndef PARALYZED_EFFECT_HPP
#define PARALYZED_EFFECT_HPP
#pragma once
#include "IStatusEffect.hpp"
#include "../Utility/Utility.hpp"
#include <iostream>

class ParalyzedEffect : public IStausEffect
{
private:
    int turnsLeft;
public:
    void applyEffect(Pokemon* target) override;
    std::string getEffectName() override;
    bool turnEndEffect(Pokemon* target) override;
    void clearEffect(Pokemon* target) override;
};




#endif
