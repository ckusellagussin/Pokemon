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

    std::string tempChoice;
    std::string tempChoice2;
    std::string playerPokemon;

   msg << "My name is Professor Oak, I am a Pokemon expert and leader at the Pokemon research centre here" << end;
   msg << "I see you have come of age and are ready to have the selection of picking your first Pokemon!" << end;
   msg << "You are presented with three Pokemon: They are Charmander (A fiery lizard with a flame on his tail), "
          "Squirtle (A small blue turtle looking pokemon with a curly tail) "
          "and Bulbasaur (A small green reptile with a cabbage on it's back that shoots out vines)." <<end;
    
        msg << "Which pokemon do you choose?: " << end;
        choice >> tempChoice;

    if(tempChoice != "Charmander" || tempChoice != "Bulbasaur" || tempChoice != "Squirtle")
    {

        msg << "Your selection is not one of the presented, please start again!" << end;
               
    }
        
        if(tempChoice == "Charmander")
        {
            msg << "Are you sure you want to pick Charmander?" << end;
            choice >> tempChoice2;
            if(tempChoice2 == "Y" || tempChoice2 == "Yes" || tempChoice2 == "y" || tempChoice2 == "yes")
            {

                msg << "You have chosen Charmander!" << end;
                tempChoice = playerPokemon;
                
            }

        }
        else if (tempChoice == "Squirtle")
        {   

            msg << "Are you sure you want to pick Squirtle?" << end;
            choice >> tempChoice2;
            if(tempChoice2 == "Y" || tempChoice2 == "Yes" || tempChoice2 == "y" || tempChoice2 == "yes")
            {

                msg << "You have chosen Squirtle!" << end;
                tempChoice = playerPokemon;

            }
        
        }
        else if(tempChoice == "Bulbasaur")
        {

            msg << "Are you sure you want to pick Bulbasaur?" << end;
            choice >> tempChoice2;
            if(tempChoice2 == "Y" || tempChoice2 == "Yes" || tempChoice2 == "y" || tempChoice2 == "yes")
            {

                msg << "You have chosen Bulbasaur!" << end;
                tempChoice = playerPokemon;
                
            }
            
        
        }
    }



