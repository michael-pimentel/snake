enum class Direction{
    up,
    down,
    left,
    right
}

class Snake {

    // Body
    // Direction
    Direction direction;

public:
    void moveForward();
    void setDirection(Direction newDirection) {
        direction = newDirection;
    }



};
