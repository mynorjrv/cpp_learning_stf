/*
 * File: AddIntegerList.cpp
 * ---------------------
 * Adds a list of read-until-sentinel pattern 
 * to solve the loop-and-a-half problem.
 * The program ask for a list of numbers which ends
 * when the user introduce the centinel value.
 */
#include <iostream>

using std::string, std::cin, std::cout, std::endl;
// instead of
// using namespace std;
// wich is okey inside a function but please
// never do it on a header file.

/* 
 * Constant: SENTINEL
 * ------------------
 * Defines the value to terminate the input list.
 */ 
const int SENTINEL = 0;

int main() {
    cout << "This program adds a list of numbers." << "\n";
    cout << "Use " << SENTINEL << " to end the list." << "\n";
    
    int total = 0;
    while (true) {
        int value;
        cout << " ? ";
        cin >> value;
        if (value == SENTINEL) break;
        total += value;
    }
    
    cout << "The total is " << total << endl;
    return 0;
    
    return 0;
}
