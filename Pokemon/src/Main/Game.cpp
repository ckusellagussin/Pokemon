#include "../../include/Character/Player.hpp"
#include "../../include/Main/Game.hpp"
#include "../../include/Battle/WildEncounterManager.hpp"
#include "../../include/Pokemon/PokemonType.hpp"
#include "../../include/Battle/BattleManager.hpp"
#include <iostream>

using namespace N_Utility;


Game::Game()
    : forestGrass{  
            {
                {"Pidgey", PokemonType::Normal, 40, 10},
                {"Caterpie", PokemonType::Bug, 35, 10},
                {"Zubat", PokemonType::Poison, 30, 10},
            },
            80,
            "Forest"
        }
{
    
}


void Game::gameLoop(Player player)
{
    bool keepPlaying {true};
    int choice;
    BattleManager* battleManager = new BattleManager();

    while(keepPlaying)
    {
        utility::clearConsole();
            
        MSG<<"What will you do next? "<< player.Name << "!" << END;
        MSG<<"1. Go into tall grass to battle wild Pokemon "<< "!" << END;
        MSG<<"2. Visit the PokeCentre "<< END;
        MSG<<"3. Challenge Gyms "<< END;
        MSG<<"4. Enter Pokemon League"<<"!"<<END;
        MSG<<"5. Quit"<<"!"<<END;
        MSG<<"Enter the number corresponding to the choice "<< player.Name << "!" << END;
        MSG << "Name: " << player.chosenPokemon.getName() << " Health: " << player.chosenPokemon.getHealth() << " Attack Power: " << player.chosenPokemon.getAttackPower() << END;

        std::cout.flush();
        INPUT >> choice;

        utility::clearInputBuffer();

        switch (choice)
        {

        case 1:
            {
                WildEncounterManager encounterManager;
                Pokemon encounteredPokemon = encounterManager.getRandomPokemonFromGrass(forestGrass);
                std::cout << "A wild " << encounteredPokemon.getName() << " appeared!" << END;
                battleManager->StartBattle(player,encounteredPokemon);
                utility::WaitForEnter();
                break;
            }
        case 2:
            {
                MSG << "You head to the PokeCenter" << END;
                std::cout.flush();
                player.chosenPokemon.heal();
                MSG << "Your " << player.chosenPokemon.getName() <<" health is now " << player.chosenPokemon.getHealth() << "/" << player.chosenPokemon.getMaxHealth() << END;
                utility::WaitForEnter();
                break;
            }
        case 3:
            {
                MSG << "You march up to the Gym, but it's closed for renovations. Seems like even Gym Leaders need a break!" << END;
                std::cout.flush();
                utility::WaitForEnter();
                break;
            }
        case 4:
            {
                MSG << "You boldly step towards the Pokemon League... but the gatekeeper laughs and says, 'Maybe next time, champ!" << END;
                std::cout.flush();
                utility::WaitForEnter();
                break;
            }
        case 5:
            {
                MSG << "You quit!" << END;
                std::cout.flush();
                keepPlaying = false;
                utility::WaitForEnter();
                break;
            }   
        }

    }
};