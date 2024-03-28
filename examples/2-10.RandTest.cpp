/*
 * File: RandTest.cpp
 * ---------------------
 * This program is a test of the randm number generator from C++.
 */
#include <iostream>
#include <iomanip>
#include <cstdlib>

using std::cin, std::cout, std::setw, std::endl;

const int N_TRIALS = 10;

int main() {
    cout << "On this computer, RAND_MAX is " << RAND_MAX << "\n";
    cout << "The first " << N_TRIALS << "calls to rand:" << endl;
    for (int i=0; i<N_TRIALS; i++) {
	cout << setw(10) << rand() << endl;
    }
    return 0;
}

