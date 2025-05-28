#include "Game.hpp"
#include "ProfessorOak.hpp"
#include "Player.hpp"
#include "PokemonType.hpp"
#include <string>
#include <vector>
#include <cstdlib>
#include <ctime>
#include "Utility.hpp"

    int main()
    {
        srand(time(0));
        
        ProfessorOak Professor("Professor Oak");
        Player player;
        
        Professor.greetPlayer(player);
        Professor.offerPokemonChoice(player);
        Professor.explainMainQuest(player);

        Game game;
        game.gameLoop(player);

        return 0;
    };
