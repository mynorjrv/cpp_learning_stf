/*
 * File: GCD_example.cpp
 * ---------------------
 * An example of an algorithm.
 */
#include <iostream>

using std::string, std::cin, std::cout, std::endl;

int gcd(int x, int y);

int main() {
    cout << "Hello World!" << "\n";
    cout << "Again Hello!" << endl;
    
    return 0;
}


int gcd(int x, int y) {
    int r = x%y;
    while (r != 0) {
        x = y;
        y = r;
        r = x%y;
    }
    return y;
}
