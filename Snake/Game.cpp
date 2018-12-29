

#include "Game.h"




Game::Game(std::string fileName)
    :board(fileName)
{
    this->end_of_game = false;
}

void Game::PlayerInput()
{
    char playerInput;
    playerInput = _getch();

    switch (playerInput)
    {
        case 'W':
        case 'w':
            
            break;
    }
}

void Game::Begin()
{
    while (!(this->end_of_game))
    {


        this->board.Begin();
        this->board.Draw();
        






        this->end_of_game = true;
    }
}