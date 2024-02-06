/* 
 * File: 1-switch_and_enum.cpp
 * ---------------------
 * A program to show how enum and switch work.
 */
#include <iostream>

using std::string, std::cout, std::endl;

enum Direction {NORTH, EAST, SOUTH, WEST};

string directionToString(Direction dir);

int main() {
    Direction n = NORTH;
    Direction e = EAST;
    Direction s = SOUTH;
    Direction w = WEST;
    // Invalid because no declaration
    // Direction wut = WUT;
    // Invalid conversion from int to Direction
    // Direction wut = 404;
    
    cout << n << " to string is " 
        << directionToString(n) << "\n";
    cout << e << " to string is " 
        << directionToString(e) << "\n";
    cout << s << " to string is " 
        << directionToString(s) << "\n";
    cout << w << " to string is " 
        << directionToString(w) << "\n";
    // cout << wut << " to string is " 
    //     << directionToString(wut) << endl;
    
    return 0;
}

string directionToString(Direction dir) {
    switch (dir) {
        case NORTH: return "NORTH";
        case EAST: return "EAST";
        case SOUTH: return "SOUTH";
        case WEST: return "WEST";
        default: return "???";
    }
}
