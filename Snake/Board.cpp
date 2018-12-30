#include "Board.h"


Board::Board(std::string fileName)
    : board(), fileName(fileName)
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
#if 1
    for (int i = 0; i < board.size(); i++)
    {
        printf("%s", board[i].c_str());
        printf("\n");
    }
#endif
#if 0
    for (unsigned int i = 0; i < board.size(); i++)
    {
        std::cout << board[i] << "\n";
    }
#endif
}

void Board::DrawSnake(const Snake& snake, const Food& food)
{
    system("CLS");
    board[food.GetY()][food.GetX()] = food.GetFood();
    board[snake.GetHeadY()][snake.GetHeadX()] = 'O';

    this->Draw();
}

void Board::Clear()
{
    system("CLS");
}