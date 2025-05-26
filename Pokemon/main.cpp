#include "Game.hpp"
#include "ProfessorOak.hpp"
#include "Player.hpp"
#include "PokemonType.hpp"
#include <string>
#include "Utility.hpp"

    int main()
    {

        ProfessorOak Professor("Professor Oak");
        Player player ("Ash", Pokemon("Pikachu", PokemonType::Electric, 100));
        Game game;
        
        Professor.greetPlayer(player);
        Professor.offerPokemonChoice(player);
        Professor.explainMainQuest(player);

        game.gameLoop(player);

        return 0;
    };
