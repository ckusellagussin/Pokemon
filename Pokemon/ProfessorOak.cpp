#include "ProfessorOak.hpp"
#include "Player.hpp"
#include "Utility.hpp"
#include <iostream>


ProfessorOak::ProfessorOak(std::string p_name)
{

    name = p_name;
            
}

void ProfessorOak::greetPlayer(Player& player)
{
    MSG << "My name is Professor Oak, I am a Pokemon expert and leader at the Pokemon research centre here" << END;
    std::cin.get();
    MSG << "I see you have come of age and are ready to have the selection of picking your first Pokemon!" << END;
    std::cin.get();
    MSG << "You are presented with three Pokemon: They are Charmander (A fiery lizard with a flame on his tail), "
           "Squirtle (A small blue turtle looking pokemon with a curly tail) "
           "and Bulbasaur (A small green reptile with a cabbage on it's back that shoots out vines)."<< END;
}

void ProfessorOak::explainMainQuest(Player& player)
{
    
    MSG << "Professor Oak: Oak-ay "<< player.Name<< "! I am about to explain to you about your upcoming grand adventure." << END;
    utility::WaitForEnter();
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

void ProfessorOak::offerPokemonChoice(Player& player)
{
    std::string playerName;
    MSG << "But first off, I want to ask you the question of who will be the greatest trainer in the region! What is your name?: " << END;
    std::getline (std::cin, player.Name);
    utility::clearConsole();
    MSG << "Great name! Nice to meet you "<< player.Name << "! I see special things just from looking into your eyes." << END;
    std::cin.get();
    MSG << "Which pokemon do you choose?: Please pick 1 for Charmander, 2 for Squirtle or 3 for Bulbasaur " << END;
    int tempChoice;
    INPUT>> tempChoice;
            
    player.choosePokemon(tempChoice);
     
}