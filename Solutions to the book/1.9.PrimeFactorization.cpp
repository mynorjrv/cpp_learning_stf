/*
 * File: PrimeFactorization.cpp
 * ---------------------
 * A program to display the prime factorization of an integer.
 */
#include <iostream>
// This is not yet studied but... it is useful
#include <cmath>

using std::string, std::cin, std::cout, std::endl;
using std::sqrt, std::ceil;

int printPrimeFactorization(int n);

int main() {
    cout << "This program factors a number." << "\n";
    
    cout << "Enter the number to be factored: ";
    int value;
    cin >> value;
    
    printPrimeFactorization(value);
    
    //cout << "Again Hello!" << endl;
    
    return 0;
}


int printPrimeFactorization(int n) {
    int i = 2;
    
    // while (i <= ceil( sqrt(n) ) ) {
    // primes need to reach n
    while (i < n ) {
        if (n%i == 0) {
            cout << i << "x";
            n /= i;
        }
        else {
            i++;
        }
    }
    
    cout << i << "\n";
    
    return 0;
}
