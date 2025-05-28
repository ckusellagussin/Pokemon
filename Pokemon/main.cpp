#include "./include/Main/Game.hpp"
#include "./include/Character/ProfessorOak.hpp"
#include "./include/Character/Player.hpp"
#include <string>
#include <vector>
#include <cstdlib>
#include <ctime>


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
