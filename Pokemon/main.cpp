#include <iostream>
#include <string>

#define msg std::cout
#define choice std::cin
#define end '\n'

enum PokemonChoice
{

    Charmander,
    Bulbasaur,
    Squirtle,
    InvalidChoice
    
};


int main() {
    
    std::string playerName;
    PokemonChoice Pokemon_Choice = InvalidChoice;
    msg << "What is your name?: " << end;
    std::cin >> playerName;

    msg << "Congratulations! You are now in the game " << playerName << "!" << end;
    

   msg << "My name is Professor Oak, I am a Pokemon expert and leader at the Pokemon research centre here" << end;
   msg << "I see you have come of age and are ready to have the selection of picking your first Pokemon!" << end;
   msg << "You are presented with three Pokemon: They are Charmander (A fiery lizard with a flame on his tail), "
          "Squirtle (A small blue turtle looking pokemon with a curly tail) "
          "and Bulbasaur (A small green reptile with a cabbage on it's back that shoots out vines)." <<end;
    
        msg << "Which pokemon do you choose?: Please pick 1 for Charmander, 2 for Squirtle or 3 for Bulbasaur " << end;
        int tempChoice;
        choice >> tempChoice;

    switch (tempChoice)
    {
    case 1:
        Pokemon_Choice = Charmander;
        break;
        
    case 2:
        Pokemon_Choice = Squirtle;
        break;
        
    case 3:
        Pokemon_Choice = Bulbasaur;
        break;
        
    default:
        Pokemon_Choice = Charmander;
        break;
    }

    switch(Pokemon_Choice)
    {
    case Charmander:
        msg << "You have chosen Charmander!" << end;
        msg << "Congratulations on picking your first Pokemon, Charmander! I'm sure you will become the best of friends! "
                                                                              "It's time for you to step into the exciting world of Pokemon! "
                                                                              "Enjoy!";
        break;
    case Squirtle:
        msg << "You have chosen Squirtle!" << end;
        msg << "Congratulations on picking your first Pokemon, Squirtle! I'm sure you will become the best of friends! "
                                                                              "It's time for you to step into the exciting world of Pokemon! "
                                                                              "Enjoy!";
        break;
    case Bulbasaur:
        msg << "You have chosen Bulbasaur!" << end;
        msg << "Congratulations on picking your first Pokemon, Bulbasaur! I'm sure you will become the best of friends! "
                                                                              "It's time for you to step into the exciting world of Pokemon! "
                                                                              "Enjoy!";
        break;
    default:
            msg << "You have chosen a Pokemon on the list, let me choose for you! You have recieved Charmander since no one likes Bulbasaur!" << end;
        
    }


    
}
    



