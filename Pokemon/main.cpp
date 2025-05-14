#include <iostream>
#include <string>

#define msg std::cout
#define input std::cin
#define end '\n'

enum class PokemonChoice {

    Charmander = 1,
    Bulbasaur,
    Squirtle,
    InvalidChoice

};

enum class PokemonType {

    Fire,
    Electric,
    Grass,
    Water,
    Normal

};

class Pokemon {
   public:
    std::string Name;
    PokemonType Type;
    int Health;

    Pokemon() {}

    Pokemon(std::string p_name, PokemonType p_type, int p_health) {
        Name = p_name;
        Type = p_type;
        Health = p_health;
    }

    void attack() { std::cout << Name << " Attacks with a powerful move" << "\n"; }
};

class Player
{
public:
    std::string name;
    Pokemon chosenPokemon;

    Player() {}

    void choosePokemon(int choice) {
            switch ((PokemonChoice)choice)
            {   
            case PokemonChoice::Charmander:
                msg << "You have chosen Charmander!" << end;
                chosenPokemon = Pokemon("Charmander", PokemonType::Fire, 100);
                msg << "Congratulations on picking your first Pokemon, Charmander! I'm sure you will become the best "
                       "of friends! "
                       "It's time for you to step into the exciting world of Pokemon! "
                       "Enjoy!";
                break;
            case PokemonChoice::Squirtle:
                msg << "You have chosen Squirtle!" << end;
                chosenPokemon = Pokemon("Squirtle", PokemonType::Water, 100);
                msg << "Congratulations on picking your first Pokemon, Squirtle! I'm sure you will become the best of "
                       "friends! "
                       "It's time for you to step into the exciting world of Pokemon! "
                       "Enjoy!";
                break;
            case PokemonChoice::Bulbasaur:
                msg << "You have chosen Bulbasaur!" << end;
                chosenPokemon = Pokemon("Bulbasaur", PokemonType::Grass, 100);
                msg << "Congratulations on picking your first Pokemon, Bulbasaur! I'm sure you will become the best of "
                       "friends! "
                       "It's time for you to step into the exciting world of Pokemon! "
                       "Enjoy!";
                break;
            default:
                chosenPokemon = Pokemon("Charmander", PokemonType::Fire, 100);
                msg << "You have not chosen a Pokemon on the list, let me choose for you! You have recieved Charmander "
                       "since no one likes Bulbasaur!"
                    << end;
            }
      
    }
};

    class ProfessorOak
    {
    public:
        std::string name;

        void greetPlayer(Player& player)
        {
            msg << "My name is Professor Oak, I am a Pokemon expert and leader at the Pokemon research centre here" << end;
            msg << "I see you have come of age and are ready to have the selection of picking your first Pokemon!" << end;
            msg << "You are presented with three Pokemon: They are Charmander (A fiery lizard with a flame on his tail), "
                   "Squirtle (A small blue turtle looking pokemon with a curly tail) "
                   "and Bulbasaur (A small green reptile with a cabbage on it's back that shoots out vines)."
                << end;
        }

        void offerPokemonChoice(Player& player)
        {
            std::string playerName;
            PokemonChoice Pokemon_Choice = PokemonChoice::InvalidChoice;
            msg << "But first off, I want to ask you the question of who will be the greatest trainer in the region: What is your name?: " << end;
            std::getline (std::cin, player.name);
            msg << "Great name! Nice to meet you "<< player.name << "! I see special things just from looking into your eyes." << end;
        
            msg << "Which pokemon do you choose?: Please pick 1 for Charmander, 2 for Squirtle or 3 for Bulbasaur " << end;
            int tempChoice;
            input >> tempChoice;
            
            player.choosePokemon(tempChoice);
        
        }
    };
    
        
    int main()
    {

        ProfessorOak Professor;
        Player player;
        Pokemon placeholder_pokemon;

        placeholder_pokemon.Name = "Pikachu";
        placeholder_pokemon.Type = PokemonType::Electric;
        placeholder_pokemon.Health = 40;

        player.name = "Trainer";
        Professor.name = "Professor Oak";

        Professor.greetPlayer(player);
        Professor.offerPokemonChoice(player);
        
        
    };
