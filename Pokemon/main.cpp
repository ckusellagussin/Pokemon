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
        
        ProfessorOak* Professor = new ProfessorOak("Professor Oak");
        Player* player = new Player();
        
        Professor->greetPlayer(*player);
        Professor->offerPokemonChoice(*player);
        Professor->explainMainQuest(*player);

        Game* game = new Game();
        game->gameLoop(player);

        delete Professor;
        delete player;
        delete game;

        return 0;
    };
