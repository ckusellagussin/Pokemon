#include <iostream>
#include <string>
#include <valarray>

#define MSG std::cout
#define INPUT std::cin
#define END '\n'

void WaitForEnter()
{

    std::cin.get();
        
}

void clearConsole()
{

#ifdef _WIN32
    system("cls");
#else
(void)system("clear");
#endif
    
}

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
                MSG << "You have chosen Charmander!" << END;
                chosenPokemon = Pokemon("Charmander", PokemonType::Fire, 100);
                MSG << "Congratulations on picking your first Pokemon, Charmander! I'm sure you will become the best "
                       "of friends! "<<std::cin.get() <<
                       "It's time for you to step into the exciting world of Pokemon! "
                       "Enjoy!" <<END;
                break;
            case PokemonChoice::Squirtle:
                MSG << "You have chosen Squirtle!" << END;
                chosenPokemon = Pokemon("Squirtle", PokemonType::Water, 100);
                MSG << "Congratulations on picking your first Pokemon, Squirtle! I'm sure you will become the best of "
                       "friends! " << std::cin.get() <<
                       "It's time for you to step into the exciting world of Pokemon! "
                       "Enjoy!"<<END;
                break;
            case PokemonChoice::Bulbasaur:
                MSG << "You have chosen Bulbasaur!" << END;
                chosenPokemon = Pokemon("Bulbasaur", PokemonType::Grass, 100);
                MSG << "Congratulations on picking your first Pokemon, Bulbasaur! I'm sure you will become the best of "
                       "friends! "
               << std::cin.get() <<
                       "It's time for you to step into the exciting world of Pokemon! "
                       "Enjoy!" <<END;
                break;
            default:
                chosenPokemon = Pokemon("Charmander", PokemonType::Fire, 100);
                MSG << "You have not chosen a Pokemon on the list, let me choose for you! You have recieved Charmander "
                       "since no one likes Bulbasaur!"<< END;
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
            MSG << "My name is Professor Oak, I am a Pokemon expert and leader at the Pokemon research centre here" << END;
            std::cin.get();
            MSG << "I see you have come of age and are ready to have the selection of picking your first Pokemon!" << END;
            std::cin.get();
            MSG << "You are presented with three Pokemon: They are Charmander (A fiery lizard with a flame on his tail), "
                   "Squirtle (A small blue turtle looking pokemon with a curly tail) "
                   "and Bulbasaur (A small green reptile with a cabbage on it's back that shoots out vines)."<< END;
        }

        void explainMainQuest(Player& player)
        {
            clearConsole();
            MSG << "Professor Oak: Oak-ay "<< player.Name<< "! I am about to explain to you about your upcoming grand adventure." << END;
            WaitForEnter();
            MSG << "Professor Oak: You see, becoming a Pokemon Master is no easy feat. It takes courage, wisdom, and a bit of luck" << END;
            std::cin.get();
            MSG << "Professor Oak: Your mission, should you choose to accept it (and trust me, you really dont have a choice) is to collect all the Pokemon Badges" 
                    "and conquer the Pokemon League. " << END;
            std::cin.get();
            MSG << "Professor Oak: To achieve this, you will need to battle wild Pokemon, challenge gym leaders, and of course, keep your Pokemon healthy at the"
                   " PokeCenter." << END;
            std::cin.get();
            MSG << "Professor Oak: Along the way, you'll capture new Pokemon to strengthen your team. Just remember! There is a limit to how many Pokemon you"
                    " can carry, so choose wisely!" << END;
            std::cin.get();
            MSG << "Professor Oak: So, what do you say? Are you ready to become the next Pokemon Champion?" << END;
            std::cin.get();
           
            
        }
        

        void offerPokemonChoice(Player& player)
        {
            std::string playerName;
            PokemonChoice Pokemon_Choice = PokemonChoice::InvalidChoice;
            MSG << "But first off, I want to ask you the question of who will be the greatest trainer in the region! What is your name?: " << END;
            std::getline (std::cin, player.Name);
            clearConsole();
            MSG << "Great name! Nice to meet you "<< player.Name << "! I see special things just from looking into your eyes." << END;
            std::cin.get();
            MSG << "Which pokemon do you choose?: Please pick 1 for Charmander, 2 for Squirtle or 3 for Bulbasaur " << END;
            int tempChoice;
            INPUT>> tempChoice;
            
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
