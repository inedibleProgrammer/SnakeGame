#pragma once

#include <string>
#include <vector>
#include <array>
#include <fstream>
#include <iostream>

#include "Snake.h"



class Board
{
    public:
        static const int boardSize = 20;

    public:
        Board() = delete;
        Board(std::string fileName);

        void Begin();
        void Draw() const;
        void DrawSnake(const Snake& snake, const Food& food);
        void Clear();

    private:
        int score;

        std::array<std::string, boardSize> board;
        std::ifstream boardFile;
        std::string fileName;
};