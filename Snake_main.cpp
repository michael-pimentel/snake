
/* 

- Need random food placement
- Need a 2D array
- Draw the Board
- User Inputs
- How to represent the snake
- update the game board

*/

/*
- Need a Snake
- Need food
- Board
- Cells

Board has cells
Board has food
Board has Snake
Board has size (w/h)

Snake has length
Snake has direction


*/

#include <iostream>
#include "snake.hpp"


class Board {
    Snake snake;
public:
    void update() {
        snake.moveForward();
        //  apply game logic
    }
    


};


int main() {
    // 1. Set up the Board
    Board board;
    
    // 2. Draw the Board
    
    // Main Game Loop
    while (True){
        
        // 3. Handle Input
    
        board.update();
        
        // 4. Update the Board
    }
    return 0;
}