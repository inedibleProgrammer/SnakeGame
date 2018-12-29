#include "Board.h"


Board::Board(std::string fileName)
    :food(), board(), fileName(fileName)
{

}

void Board::Begin()
{
    this->boardFile.open(this->fileName);
    if (this->boardFile.is_open())
    {
        std::string line;

        for (int i = 0; !(this->boardFile.eof()); i++)
        {
            std::getline( (this->boardFile), this->board[i] );
        }
        this->boardFile.close();
    }
}


void Board::Draw() const
{
    for (unsigned int i = 0; i < board.size(); i++)
    {
        std::cout << board[i] << "\n";
    }
}

void Board::DrawSnake(const Snake& snake)
{
    board[snake.GetHeadX()][snake.GetHeadY()] = 'O';
    for (unsigned int i = 0; i < board.size(); i++)
    {
        std::cout << board[i] << "\n";
    }
}

void Board::Clear()
{
    system("CLS");
}