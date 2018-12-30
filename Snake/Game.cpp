
#include <Windows.h>
#include "Game.h"




Game::Game(std::string fileName)
    :board(fileName)
{
    this->end_of_game = false;
}

void Game::PlayerInput()
{
    char playerInput;
    playerInput = _getch(); // freeze here
    if (_kbhit())
    {
        switch (playerInput)
        {
        case 'W':
        case 'w':
            if (this->snake.GetHeadY() > 1)
            {
                this->snake.SetHeadY(snake.GetHeadY() - 1);
            }
            break;
        case 'A':
        case 'a':
            if (this->snake.GetHeadX() > 1)
            {
                this->snake.SetHeadX(snake.GetHeadX() - 1);
            }
            break;
        case 'S':
        case 's':
            if (this->snake.GetHeadY() < Board::boardSize - 2)
            {
                this->snake.SetHeadY(snake.GetHeadY() + 1);
            }
            break;
        case 'D':
        case 'd':
            if (this->snake.GetHeadX() < Board::boardSize - 2)
            {
                this->snake.SetHeadX(snake.GetHeadX() + 1);
            }
            break;
        }
    }

}

void Game::Begin()
{
    while (!(this->end_of_game))
    {
        this->board.Begin();
        this->board.DrawSnake(this->snake, this->food);
        this->PlayerInput();
        Sleep(10);






        // this->end_of_game = true;
    }
}