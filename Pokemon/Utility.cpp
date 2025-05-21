#include "Utility.hpp"
#include <iostream>
#include <limits>


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


int main()
{


    return 0;
}