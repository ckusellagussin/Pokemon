#include "Player.hpp"
#include "Game.hpp"
#include "Utility.hpp"

Game::Game()
{
    
}



void GameLoop(Player& player)
    {

        bool keepPlaying {true};
        int choice;

        while(keepPlaying)
        {
            utility::clearConsole();
            
            MSG<<"What will you do next? "<< player.Name << "!" << END;
            MSG<<"1. Go into tall grass to battle wild Pokemon "<< "!" << END;
            MSG<<"2. Visit the PokeCentre "<< END;
            MSG<<"3. Challenge Gyms "<< END;
            MSG<<"4. Enter Pokemon League"<<"!"<<END;
            MSG<<"5. Enter Pokemon League"<<"!"<<END;
            MSG<<"Enter the number corresponding to the choice "<< player.Name << "!" << END;
            INPUT >> choice;


            switch (choice)
            {

            case 1:
                MSG << "You look around... but all the wild Pokemon are on vacation. Maybe try again later?" << END;
                utility::WaitForEnter();
                break;
            case 2:
                MSG << "You head to the PokeCenter, but Nurse Joy is out on a coffee break. Guess your Pokemon will have to tough it out for now!" << END;
                utility::WaitForEnter();
                break;
            case 3:
                MSG << "You march up to the Gym, but it's closed for renovations. Seems like even Gym Leaders need a break!" << END;
                utility::WaitForEnter();
                break;
            case 4:
                MSG << "You boldly step towards the Pokemon League... but the gatekeeper laughs and says, 'Maybe next time, champ!" << END;
                utility::WaitForEnter();
                break;
            case 5:
                MSG << "You try to quit, but Professor Oak's voice echoes: 'There's no quitting in Pokemon training!" << END;
                utility::WaitForEnter();
                break;
                
            }
            
            
        }
        
    
    } 