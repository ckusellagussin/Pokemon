#include "../../include/Pokemon/Pokemon.hpp"
#include "../../include/Battle/Move.hpp"
#include "../../include/Pokemon/PokemonType.hpp"
#include "../../include/Utility/Utility.hpp"

using namespace N_Utility;


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


    void Pokemon::attack(Move selectedMove, Pokemon* target)
    {

        target->TakeDamage(selectedMove.power);
        
    }

    void Pokemon::printAvailableMoves()
    {

       MSG << Name << "'s moves are:" << END;

        for(size_t i = 0; i < moves.size(); ++i)
        {

            MSG<<i+1<<":" << moves[i].name << "(power: " << moves [i].power << ")" <<END;
            
        }
        
    }

    void Pokemon::reduceAttackPower(int reducedDamage)
    {

        for(int i=0; i<moves.size(); i++)
        {

            moves[i].power -= reducedDamage;
            if(moves[i].power < 0)
                moves[i].power = 0;
        }

        
    }


    int Pokemon::selectMove()
    {

        int choice;
        MSG << "Select a move: " << END;
        INPUT >> choice;

        while (choice < 1 || choice > static_cast<int>(moves.size()))
        {

            MSG << "Invalid choice, try again" << END;
            
        }

        return choice;
    }


    void Pokemon::useMove(struct Move selectedMove, Pokemon* target)
    {

        MSG << Name << " used " << selectedMove.name << END;
        
        attack(selectedMove, target);

        utility::WaitForEnter();
        MSG << ".." << END;

        if (target->isFainted())
        {

            MSG<< target->Name << " fainted!" << END;
            
        }
        else
        {

            MSG << target->Name << " has " << target->Health << " HP left" << END;
            
        }
        
    }


    void Pokemon::selectAndUseMove(Pokemon* target)
    {
        
        printAvailableMoves();

        int choice = selectMove();
        Move selectedMove = moves[choice-1];

        useMove(selectedMove, target);
    }



    void Pokemon::heal()
    {

        Health = maxHealth;
        
    }

    Pokemon::~Pokemon()
    {


        
    }
