//
//  boardFunctions.h
//  lab10
//
//  Created by Jacob Kennedy on 4/14/22.
//

#ifndef boardFunctions_h
#define boardFunctions_h

#include <deque>
#include <iostream>
using namespace std;

// more than likely will need this later

class board {
public:
    int zeroIndex;
    int thisIndex;
    board* parent;
    deque<board*> children;
    deque<pair<int, int>> puzzle;
    
    board() { }
    board(deque<pair<int, int>> tempPuzzle, int zeroIn) {
        zeroIndex = zeroIn;
        puzzle = tempPuzzle;
    }
    
    // print out the vector as a 3x3 grid
    void print( );
    // function used to convert a single number into a vector of size 9 with single digit values
    void addElements( int puzzle );
    // count the number of inversions needed to solve (even is solvable odd is not)
    int calculateInversions();
    // checks to see if inversions is even or odd
    bool isBoardSolvable();
    // can 0 be moved up?
    bool moveUp();
    // can 0 be moved down?
    bool moveDown();
    // can 0 be moved left?
    bool moveLeft();
    // can zero be moved right?
    bool moveRight();
    // finds and lists all the valid moves
    void validMoves();
    // count number of moves to solve it
    int movesToSolve = 0;

}; extern board boardHelpers;

#endif /* boardFunctions_h */
