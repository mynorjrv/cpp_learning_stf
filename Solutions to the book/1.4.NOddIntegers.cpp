/*
 * File: NOddIntegers.cpp
 * ---------------------
 * Problem 4:
 * Write a program that reads in a positive integer N 
 * and then calculates and displays the sum of 
 * the first N odd integers. For example, if N is 4, 
 * your program should display the value 16, which is 1 + 3 + 5 + 7.
 */
#include <iostream>

using std::string, std::cin, std::cout, std::endl;

int main() {

    int N;
    cout << "Please give an integer: ";
    cin >> N;

    int total = 0;

    for (int i = 1; i <= N; i++) {
        total += 2*i - 1;
    }
    
    cout << "The sum of the first " << N 
        << " odd numbers is " << total << endl; 
    
    return 0;
}
