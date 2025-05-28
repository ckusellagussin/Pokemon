#include "../../include/Pokemon/Pokemon.hpp"
#include "../../include/Pokemon/PokemonType.hpp"
#include "../../include/Utility/Utility.hpp"


std::string Name;
    PokemonType Type;

    Pokemon::Pokemon()
    {
        Name = "Pikachu";
        Type = PokemonType::Electric;
        Health = 10;
        maxHealth = 40;
        attackPower = 10;
    }

    Pokemon::Pokemon(std::string p_name, PokemonType p_type, int p_maxHealth, int p_attackPower)
     : Name(p_name), Type(p_type), Health(p_maxHealth), maxHealth(p_maxHealth), attackPower(p_attackPower) {}

    
    Pokemon::Pokemon(const Pokemon &other)
    {

        Name = other.Name;
        Type = other.Type;
        Health = other.Health;
        maxHealth = other.maxHealth;
        attackPower = other.attackPower;

    }

    void Pokemon::TakeDamage(int damage)
    {
        Health -= damage;

            if(Health < 0)
            {
                Health = 0;
            
            }

            
    }

    bool Pokemon::isFainted() const
    {

        return Health <= 0;
            
    }


    void Pokemon::attack(Pokemon &target)
    {

        int damage = attackPower;
        MSG << Name << " Attacks " << target.Name << " for " << damage << " damage!" << END;
        MSG << target.Name << " has " << target.Health << "from " << target.maxHealth << END;
        target.TakeDamage(damage);
        
    }


    void Pokemon::heal()
    {

        Health = maxHealth;
        
    }

    Pokemon::~Pokemon()
    {
     
    }
