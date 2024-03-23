/*
 * File: Overload_vs_Default.cpp
 * ---------------------
 * An example of usage of overload and default parameters, 
 * where it is better to use overloading.
 */
#include <iostream>

using std::string, std::cin, std::cout, std::endl;

// void setInitialLocation(double x = 0, double y = 0);

// It is better to use overloading because using 
// two defaul parameters gives the option to enter
// a single default parameter which is not what we want.
void setInitialLocation(double x, double y);
void setInitialLocation();

int main() {
    cout << "Hello World!" << "\n";
    cout << "Again Hello!" << endl;
    
    return 0;
}


void setInitialLocation(double x, double y) {
    cout << "Initial location" << "\n";
    cout << "x: " << x << "\n";
    cout << "y: " << y << "\n";
}

void setInitialLocation() {
    setInitialLocation(0, 0);
}
