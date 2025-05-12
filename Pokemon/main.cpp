#include <iostream>
#include <string>

#define msg std::cout
#define choice std::cin
#define end '\n'

int main() {
    
    
    std::string playerName;
    msg << "What is your name?: " << end;
    std::cin >> playerName;

    msg << "Congratulations! You are now in the game " << playerName << "!" << end;

    int tempChoice;
    std::string playerPokemon;

   msg << "My name is Professor Oak, I am a Pokemon expert and leader at the Pokemon research centre here" << end;
   msg << "I see you have come of age and are ready to have the selection of picking your first Pokemon!" << end;
   msg << "You are presented with three Pokemon: They are Charmander (A fiery lizard with a flame on his tail), "
          "Squirtle (A small blue turtle looking pokemon with a curly tail) "
          "and Bulbasaur (A small green reptile with a cabbage on it's back that shoots out vines)." <<end;
    
        msg << "Which pokemon do you choose?: Please pick 1 for Charmander, 2 for Squirtle or 3 for Bulbasaur " << end;
        choice >> tempChoice;
    

    switch (tempChoice)
    {
    case 1:
        playerPokemon = "Charmander";
        msg << "You have chosen Charmander!" << end;
        break;
        
    case 2:
        playerPokemon = "Squirtle";
        msg << "You have chosen Squirtle!" << end;
        break;
        
    case 3:
        playerPokemon = "Bulbasaur";
        msg << "You have chosen Bulbasaur!" << end;
        break;
        
    default:
        playerPokemon = "Pikachu";
        msg <<"You have found the secret choice because you're stubborn, have a Pikachu instead!" << end;
        break;
    }

    msg << "Congratulations on picking your first Pokemon, " <<playerPokemon<< "! I'm sure you will become the best of friends! "
                                                                               "It's time for you to step into the exciting world of Pokemon! "
                                                                               "Enjoy!";
    
    
}
    



