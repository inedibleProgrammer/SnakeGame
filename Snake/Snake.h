#pragma once


class Snake
{
    public: // types
        enum class Direction { UP, DOWN, LEFT, RIGHT };

    public: // methods
        Snake();

        int  GetHeadX() const { return this->headX; }
        void SetHeadX(int headX) { this->headX = headX; }

        int  GetHeadY() const { return this->headY; }
        void SetHeadY(int headY) { this->headY = headY; }

        int  GetBodySize() const { return this->bodySize; }
        void SetBodySize(int bodySize) { this->bodySize = bodySize; }

    private:
        int headX;
        int headY;
        int bodySize;
        Direction direction;
};