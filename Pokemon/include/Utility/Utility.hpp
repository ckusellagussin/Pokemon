#ifndef UTILITY_HPP
#define UTILITY_HPP
#pragma once

#define MSG std::cout
#define INPUT std::cin
#define END '\n'

namespace N_Utility
{
    class utility
    {
    public:
        static void WaitForEnter();

        static void clearConsole();

        static void clearInputBuffer();
    
    }; 
}


#endif
