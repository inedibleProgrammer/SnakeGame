#include <iostream>
#include <string>
#include <array>
#include "Game.h"

int main()
{
    //std::cout << "Test";

#if 1
    Game game("board.txt");
    game.Begin();
#endif


#if 0
    std::array<std::string, 2> strings;
    strings[0] = "String1";
    strings[1] = "String2";

    strings[1][3] = 'O';

    std::cout << strings[1];
#endif




    std::cin.get();
    return 0;
}