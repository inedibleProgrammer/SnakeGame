#pragma once

#include <string>
#include <vector>
#include <array>
#include <fstream>
#include <iostream>

#include "Snake.h"

class Food
{
    public:
        Food()
        {
            this->x = 0;
            this->y = 0;
        }
        int  GetX() const { return this->x; }
        void SetX(int x) { this->x = x; }

        int  GetY() const { return this->y; }
        void SetY(int y) { this->y = y; }
    private:
        int x;
        int y;
};

class Board
{
    public:
        Board() = delete;
        Board(std::string fileName);

        void Begin();
        void Draw() const;
        void DrawSnake(const Snake& snake);
        void Clear();
    private:
        Food food;
        int score;
        static const int boardSize = 20;

        std::array<std::string, boardSize> board;
        std::ifstream boardFile;
        std::string fileName;
};