/*
 * File: Error_ussage.cpp
 * ---------------------
 * A main program to try error.h
 */
#include <iostream>
#include "libraries/error.h"

using std::string, std::cin, std::cout, std::endl;

int main() {
    cout << "This program is going to fail" << "\n";
    error("This program did not printed hello again.");
    cout << "Again Hello!" << endl;
    
    return 0;
}
