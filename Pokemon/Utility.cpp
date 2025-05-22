#include "Utility.hpp"
#include <iostream>
#include <limits>
#include <string>


void utility::WaitForEnter()
{
    std::cin.get();
}


void utility::clearConsole()
{
    
#ifdef _WIN32
    system("cls");
#else
    (void)system("clear");
#endif
    
}

void utility::clearInputBuffer()
{
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
}
