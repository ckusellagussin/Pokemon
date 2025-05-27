#include "PokemonChoice.hpp"
#include "PokemonType.hpp"
#include "Utility.hpp"
#include "Player.hpp"
#include "Pokemon.hpp"

    Player::Player()
    {

        Name = "Trainer";
        chosenPokemon = Pokemon("Pikachu", PokemonType::Electric, 100, 10);
        
    }


    Player::Player(std::string p_name, Pokemon p_Chosen)
    {
        Name = p_name;
        chosenPokemon = p_Chosen;
        
    }


    void Player::choosePokemon(int choice) {
            switch ((PokemonChoice)choice)
            {   
            case PokemonChoice::Charmander:
                MSG << "You have chosen Charmander!" << END;
                chosenPokemon = Pokemon("Charmander", PokemonType::Fire, 100,10);
                MSG << "Congratulations on picking your first Pokemon, Charmander! I'm sure you will become the best "
                       "of friends! "<<std::cin.get() <<
                       "It's time for you to step into the exciting world of Pokemon! "
                       "Enjoy!" <<END;
                break;
            case PokemonChoice::Squirtle:
                MSG << "You have chosen Squirtle!" << END;
                chosenPokemon = Pokemon("Squirtle", PokemonType::Water, 100,10);
                MSG << "Congratulations on picking your first Pokemon, Squirtle! I'm sure you will become the best of "
                       "friends! " << std::cin.get() <<
                       "It's time for you to step into the exciting world of Pokemon! "
                       "Enjoy!"<<END;
                break;
            case PokemonChoice::Bulbasaur:
                MSG << "You have chosen Bulbasaur!" << END;
                chosenPokemon = Pokemon("Bulbasaur", PokemonType::Grass, 100,10);
                MSG << "Congratulations on picking your first Pokemon, Bulbasaur! I'm sure you will become the best of "
                       "friends! "
               << std::cin.get() <<
                       "It's time for you to step into the exciting world of Pokemon! "
                       "Enjoy!" <<END;
                break;
            default:
                chosenPokemon = Pokemon("Charmander", PokemonType::Fire, 100,10);
                MSG << "You have not chosen a Pokemon on the list, let me choose for you! You have recieved Charmander "
                       "since no one likes Bulbasaur!"<< END;
            }
      
    };