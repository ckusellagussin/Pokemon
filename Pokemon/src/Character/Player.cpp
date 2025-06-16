#include "../../include/Pokemon/PokemonChoice.hpp"
#include "../../include/Pokemon/PokemonType.hpp"
#include "../../include/Character/Player.hpp"

#include "../../include/Pokemon/Bulbasaur.hpp"
#include "../../include/Pokemon/Charmander.hpp"
#include "../../include/Pokemon/Pokemon.hpp"
#include "../../include/Pokemon/Squirtle.hpp"

Player::Player()
    {
        name = "Trainer";
    }

    Player::Player(std::string p_name)
    {
        name = p_name;
        
    }

    void Player::choosePokemon(int choice) {
            switch ((PokemonChoice)choice)
            {   
            case PokemonChoice::Charmander:
                MSG << "You have chosen Charmander!" << END;
                chosenPokemon = new Charmander();
                MSG << "Congratulations on picking your first Pokemon, Charmander! I'm sure you will become the best "
                       "of friends! "<< std::cin.get() <<
                       "It's time for you to step into the exciting world of Pokemon! "
                       "Enjoy!" <<END;
                break;
            case PokemonChoice::Squirtle:
                MSG << "You have chosen Squirtle!" << END;
                chosenPokemon = new Squrtle();
                MSG << "Congratulations on picking your first Pokemon, Squirtle! I'm sure you will become the best of "
                       "friends! " << std::cin.get() <<
                       "It's time for you to step into the exciting world of Pokemon! "
                       "Enjoy!"<<END;
                break;
            case PokemonChoice::Bulbasaur:
                MSG << "You have chosen Bulbasaur!" << END;
                chosenPokemon = new Bulbasaur();
                MSG << "Congratulations on picking your first Pokemon, Bulbasaur! I'm sure you will become the best of "
                       "friends! "
               << std::cin.get() <<
                       "It's time for you to step into the exciting world of Pokemon! "
                       "Enjoy!" <<END;
                break;
            default:
                chosenPokemon = new Charmander();
                MSG << "You have not chosen a Pokemon on the list, let me choose for you! You have recieved Charmander "
                       "since no one likes Bulbasaur!"<< END;
            }
      
    };