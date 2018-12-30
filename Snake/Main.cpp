#include <iostream>
#include <string>
#include <array>
#include <fstream>

#include <Windows.h>

#include <stdio.h>

#include "Game.h"

int main()
{
    //std::cout << "Test";

#if 0
    Game game("board.txt");
    game.Begin();
#endif


#if 0
    std::array<std::string, 2> strings;
    strings[0] = "String1";
    strings[1] = "String2";

    strings[1][3] = 'O';

    std::cout << "Hello"[0];
#endif

#if 0
    std::string string1("Test");
    printf("%s", string1.c_str());
#endif

#if 1
    int nScreenWidth = 80;
    int nScreenHeight = 30;
    int nFieldWidth = 12;
    int nFieldHeight = 18;

    std::array<std::string, 30> strings;

    std::ifstream screenFile;
    screenFile.open("screen.txt");

    if (screenFile.is_open())
    {
        std::string line;
        for (int i = 0; !screenFile.eof(); i++)
        {
            std::getline(screenFile, strings[i]);
        }
        screenFile.close();
    }

    int xtr = 0;

    // Create Screen Buffer
    wchar_t *screen = new wchar_t[nScreenWidth*nScreenHeight];
    for (int i = 0; i < nScreenWidth*nScreenHeight; i++) screen[i] = L' ';
    HANDLE hConsole = CreateConsoleScreenBuffer(GENERIC_READ | GENERIC_WRITE, 0, NULL, CONSOLE_TEXTMODE_BUFFER, NULL);
    SetConsoleActiveScreenBuffer(hConsole);
    DWORD dwBytesWritten = 0;

    while (1)
    {
        for (int i = 0; i < 30; i++)
        {
            xtr++;
            for (int j = 0; j < 80; j++)
            {
                screen[(i * 80) + j] = strings[i][j];
            }
        }
        
        // Display Frame
        WriteConsoleOutputCharacter(hConsole, screen, nScreenWidth * nScreenHeight, { 0,0 }, &dwBytesWritten);
    }

#endif




    system("Pause");
    return 0;
}