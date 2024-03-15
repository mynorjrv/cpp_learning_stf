/*
 * File: SecondLargest.cpp
 * ---------------------
 * Finds the largest and second largest numbers in a list.
 */
#include <iostream>

using std::string, std::cin, std::cout, std::endl;

const int SENTINEL = 0;

int main() {
    cout << "This program finds the largest"
        << " and second-larges numbers from a list.\n";
    cout << "Use " << SENTINEL << " to signal the end" 
        << " after introducing the two first numbers." << endl;
    
    int greatest = 0;
    int secondGreatest = 0;
    
    int value;
    
    cout << "?";
    cin >> value;
    
    greatest = value;
    
    cout << "?";
    cin >> value;
    
    if (value>greatest) {
        secondGreatest = greatest;
        greatest = value;
    }
    else {
        secondGreatest = value;
    }
    
    while (true) {
        cout << "?";
        cin >> value;
        if (value==SENTINEL) break;
        
        if (value>secondGreatest) {
            if (value>greatest) {
                secondGreatest = greatest;
                greatest = value;
            }
            else secondGreatest = value;
            
        }
    }

    cout << "The largest is " << greatest << "\n";
    cout << "The second largest is " << secondGreatest << endl;
    
    return 0;
}
