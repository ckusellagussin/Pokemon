#include "Pokemon.hpp"


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

    Pokemon::~Pokemon()
    {
     
    }

    void attack() { std::cout << Name << " Attacks with a powerful move" << "\n"; }
