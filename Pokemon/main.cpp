#include <iostream>
#include <string>
#include <valarray>

#define msg std::cout
#define input std::cin
#define end '\n'

enum class PokemonChoice {

    Charmander = 1,
    Bulbasaur,
    Squirtle,
    Pikachu,
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

        Name = "Pikachu";
        Type = PokemonType::Electric;
        Health = 10;
        
    }

    Pokemon(std::string p_name, PokemonType p_type, int p_health)
    {
        
        Name = p_name;
        Type = p_type;
        Health = p_health;
        
    }

    
    Pokemon(const Pokemon &other)
    {

        Name = other.Name;
        Type = other.Type;
        Health = other.Health;

    }

    ~Pokemon()
    {
     
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
        chosenPokemon = Pokemon("Pikachu", PokemonType::Electric, 100);
        
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
                       "Enjoy!" <<end;
                break;
            case PokemonChoice::Squirtle:
                msg << "You have chosen Squirtle!" << end;
                chosenPokemon = Pokemon("Squirtle", PokemonType::Water, 100);
                msg << "Congratulations on picking your first Pokemon, Squirtle! I'm sure you will become the best of "
                       "friends! "
                       "It's time for you to step into the exciting world of Pokemon! "
                       "Enjoy!"<<end;
                break;
            case PokemonChoice::Bulbasaur:
                msg << "You have chosen Bulbasaur!" << end;
                chosenPokemon = Pokemon("Bulbasaur", PokemonType::Grass, 100);
                msg << "Congratulations on picking your first Pokemon, Bulbasaur! I'm sure you will become the best of "
                       "friends! "
                       "It's time for you to step into the exciting world of Pokemon! "
                       "Enjoy!"<<end;
                break;
            default:
                chosenPokemon = Pokemon("Charmander", PokemonType::Fire, 100);
                msg << "You have not chosen a Pokemon on the list, let me choose for you! You have recieved Charmander "
                       "since no one likes Bulbasaur!"<< end;
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
                   "and Bulbasaur (A small green reptile with a cabbage on it's back that shoots out vines)."<< end;
        }

        void explainMainQuest(Player& player)
        {

            msg << "Professor Oak: Oak-ay "<< player.Name<< "I am about to explain to you about your upcoming grand adventure." << end;
            msg << "Professor Oak: You see, becoming a Pokemon Master is no easy feat. It takes courage, wisdom, and a bit of luck" << end;
            msg << "Professor Oak: Your mission, should you choose to accept it (and trust me, you really dont have a choice) is to collect all the Pokemon Badges" 
                    "and conquer the Pokemon League. " << end;
            msg << "Professor Oak: To achieve this, you will need to battle wild Pokemon, challenge gym leaders, and of course, keep your Pokemon healthy at the"
                   " PokeCenter." << end;

            msg << "Professor Oak: Along the way, you'll capture new Pokemon to strengthen your team. Just remember! There is a limit to how many Pokemon you"
                    "can carry, so choose wisely!" << end;
            msg << "Professor Oak: So, what do you say? Are you ready to become the next Pokemon Champion?" << end;
            
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

        Professor Professor("Professor Oak");
        Player player ("Ash", Pokemon("Pikachu", PokemonType::Electric, 100));
        

        Professor.greetPlayer(player);
        Professor.offerPokemonChoice(player);
        Professor.explainMainQuest(player);
        
        
    };
