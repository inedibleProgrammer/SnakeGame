#include <iostream>
#include <string>
#include <array>

#include <stdio.h>

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

#if 0
    std::string string1("Test");
    printf("%s", string1.c_str());
#endif




    std::cin.get();
    return 0;
}