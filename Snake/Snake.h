#pragma once

class Food
{
public:
    Food()
        : x(4), y(5), food('F')
    {
    }
    int  GetX() const { return this->x; }
    void SetX(int x) { this->x = x; }

    int  GetY() const { return this->y; }
    void SetY(int y) { this->y = y; }

    char GetFood() const { return this->food; }
private:
    int x;
    int y;
    char food;
};


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

        Direction GetDirection() const { return this->direction; }
        void SetDirection(Direction direction) { this->direction = direction; }

    private:
        int headX;
        int headY;
        int bodySize;
        Direction direction;
};