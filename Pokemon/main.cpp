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

    Pokemon()
    {

        Name = "Unknown";
        Type = PokemonType::Normal;
        Health = 50;
        msg << "A new pokemon has been created in the default constructor!" << end;
        
    }

    Pokemon(std::string p_name, PokemonType p_type, int p_health)
    {
        
        Name = p_name;
        Type = p_type;
        Health = p_health;
        std::cout << "A new Pokemon called "<< Name << "has been created from the paramaterized function" << end;
        
    }

    
    Pokemon(const Pokemon &other)
    {

        Name = other.Name;
        Type = other.Type;
        Health = other.Health;
        std::cout << "A new pokemon has been copied from: " << other.Name << end;
    }

    ~Pokemon()
    {
       std:: cout << Name << " has been released into the wild";
    }

    void attack() { std::cout << Name << " Attacks with a powerful move" << "\n"; }
};

class Player
{
public:
    std::string Name;
    Pokemon chosenPokemon;

    Player()
    {
        
        Name = "Trainer";
        chosenPokemon = Pokemon();
        msg << "A new player called " << Name << " has been created in the default constructor!" << end;
        
    }

    Player(std::string p_name, Pokemon p_Chosen)
    {

        Name = p_name;
        chosenPokemon = p_Chosen;
        
        
    }

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

    class Professor
    {
    public:
        std::string name;

        Professor(){};

        Professor(std::string p_name)
        {

            name = p_name;
            
        }

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
            std::getline (std::cin, player.Name);
            msg << "Great name! Nice to meet you "<< player.Name << "! I see special things just from looking into your eyes." << end;
        
            msg << "Which pokemon do you choose?: Please pick 1 for Charmander, 2 for Squirtle or 3 for Bulbasaur " << end;
            int tempChoice;
            input >> tempChoice;
            
            player.choosePokemon(tempChoice);
        
        }
    };
    
        
    int main()
    {

        Professor Professor;
        Player player;
        Pokemon placeholder_pokemon;
        Pokemon defaultPokemon;
        Pokemon charmander("Charmander", PokemonType::Fire, 100);
        Pokemon bulbasaur("Bulbasaur", PokemonType::Grass, 100);
        Pokemon bulbasaurCopy;
        

        msg << defaultPokemon.Name << (int)defaultPokemon.Type << defaultPokemon.Health << end;
        msg << charmander.Name << (int)charmander.Type << charmander.Health << end;
        
        bulbasaurCopy = bulbasaur;

        msg <<"Bulbasaur OG health: " << bulbasaur.Health << end;
        msg <<"Bulbasaur Copy health: " << bulbasaurCopy.Health << end;

        bulbasaurCopy.Health = 80;
        
        {

            Pokemon Squirtle("Squirtlessssss", PokemonType::Water, 100);
            
        }


        

        msg <<"Bulbasaur OG health: " << bulbasaur.Health << end;
        msg <<"Bulbasaur Copy health: " << bulbasaurCopy.Health << end;
        
        player.Name = "Trainer";
        Professor.name = "Professor Oak";

        Professor.greetPlayer(player);
        Professor.offerPokemonChoice(player);
        
        
    };
