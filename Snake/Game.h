#pragma once

#include <string>
#include <iostream>

#include <conio.h>


#include "Board.h"
#include "Snake.h"

class Game
{
    public:
        Game() = delete;
        Game(std::string fileName);

        void PlayerInput();
        void Begin();
    private:
        Snake snake;
        Food food;
        bool end_of_game;
        Board board;
};