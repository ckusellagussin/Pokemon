#include "Pokemon.hpp"
#include "PokemonType.hpp"
#include "Utility.hpp"

std::string Name;
    PokemonType Type;

    Pokemon::Pokemon()
    {
        Name = "Pikachu";
        Type = PokemonType::Electric;
        Health = 10;
    }

    Pokemon::Pokemon(std::string p_name, PokemonType p_type, int p_health)
    {
        
        Name = p_name;
        Type = p_type;
        Health = p_health;
        
    }

    
    Pokemon::Pokemon(const Pokemon &other)
    {

        Name = other.Name;
        Type = other.Type;
        Health = other.Health;

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


    void attack(Pokemon Target)
    {
        int damage {10};
        MSG << Name << " Attacks" << Target.Name << " for" << damage << " damage!" << END;
        Target.TakeDamage(damage);
    }

    Pokemon::~Pokemon()
    {
     
    }
