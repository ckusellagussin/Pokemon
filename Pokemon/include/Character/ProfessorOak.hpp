#ifndef PROFESSOR_OAK_HPP
#define PROFESSOR_OAK_HPP
#pragma once

#include <iostream>

class Player;

class ProfessorOak
{

public:
    std::string name;

    ProfessorOak(std::string p_name);

    void greetPlayer(Player& player);

    void explainMainQuest(Player& player);

    void offerPokemonChoice(Player& player);

};
#endif