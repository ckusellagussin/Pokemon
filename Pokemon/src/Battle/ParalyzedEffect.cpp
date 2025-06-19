#include "../../include/Battle/ParalyzedEffect.hpp"
#include "../../include/Pokemon/Pokemon.hpp"


void ParalyzedEffect::applyEffect(Pokemon* target)
{

    MSG << "Ah.." << target->getName() << "has been paralyzed!" << END;
    
    turnsLeft = rand() % 3 + 1;
    
}

std::string ParalyzedEffect::getEffectName()
{

    return "Paralyzed";
    
}

bool ParalyzedEffect::turnEndEffect(Pokemon* target)
{

    if (turnsLeft <= 0)
    {

        clearEffect(target);
        return true;
        
    }
    
        turnsLeft--;

    int paralysisChance = rand() % 4;

    if (paralysisChance == 0)
    {

        MSG << target->getName() << " is paralyzed!" << END;
        return false;
        
    }
    
    MSG << target->getName() << " is no longer paralyzed!" << END;
    return true;
}

void ParalyzedEffect::clearEffect(Pokemon* target)
{

    MSG << target->getName() << " is no longer paralyzed!" << END;
    clearEffect(target);
    
}



