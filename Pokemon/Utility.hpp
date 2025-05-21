#ifndef UTILITY_HPP
#define UTILITY_HPP
#pragma once

#include <iostream>
#include <limits>
#include <string>

#define MSG std::cout
#define INPUT std::cin
#define END '\n'

class utility
{
public:
    static void WaitForEnter();

    static void clearConsole();

    static void clearInputBuffer();
    
};


#endif
