/*
 * File: Craps.cpp
 * ---------------------
 * This game plays the casino game craps, which is played using a 
 * pair of dice. At the begining of the game, you roll the dice and
 * compute the total. If your first roll is 7 or 11, you win with 
 * a "natural". If your first roll is 2, 3 or 12, you lose 
 * by "crapping out". In any other case, the total from the first 
 * roll becomes your "point", agter which you continue to roll until
 * one of the following conditions ocurrs:
 *
 * a) Yiu roll your point again, in wich case you win.
 * b) You roll a 7, in which case you lose.
 *
 * Other rolls (including 2, 3, or 12) have no effect during this
 * phase of the game.
 */
#include <iostream>
#include "libraries/random.h"

// using std::string, std::cin, std::cout, std::endl;
using namespace std;

/* Funtion prototypes */
bool tryToMakePoint(int point);
int rollTwoDice();

/* Main program */
int main() {
    cout << "This program plays a game of craps." << endl;
    int point = rollTwoDice();
    
    switch (point) {
        case 7: case 11:
            cout << "That's a natural. You win." << endl;
            break;
        case 2: case 3: case 12:
            cout << "That's craps. You lose." << endl;
            break;
        default:
            cout << "Your point is " << point << "." << endl;
            if (tryToMakePoint(point)) {
                cout << "You made your point. You win." << endl;
            } else {
                cout << "You rolled a seven. You lose." << endl;
            }
    }
    
    return 0;
}


/*
 * Function: tryToMakePoint
 * Usage: flag = tryToMakePoint(oint);
 * ---------------------
 * Rolls the dice repeatedly intil you either make your point or roll
 * a 7. The function returns true if you make your point and false 
 * if a 7 comes first.
 */ 
bool tryToMakePoint(int point) {
    while (true) {
        int total = rollTwoDice();
        if (total==point) return true;
        if (total==7) return false;
    }
}


/*
 * Function: rollTwoDice
 * Usage: total = rollTwoDice(point);
 * ---------------------
 * Simulates the process of rolling two dice. The individual values
 * are printed along with the sum, which is returned by the function.
 */ 
int rollTwoDice() {
    cout << "Rolling the dice ..." << "\n";
    
    int d1 = randomInteger(1, 6);
    int d2 = randomInteger(1, 6);
    int total = d1 + d2;
    
    cout << "You rolled " << d1 << " and " << d2
        << " - That's " << total << endl;
        
    return total;
}
