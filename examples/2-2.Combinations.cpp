/*
 * File: Combinations.cpp
 * ---------------------
 * Computes C(n, k) from its mathematical definition 
 * in terms of factorials.
 */
#include <iostream>

using std::string, std::cin, std::cout, std::endl;

int combinations(int n, int k);
// Factorial
int fact(int n);

int main() {
    int n, k;
    cout << "Enter the number of objects n: ";
    cin >> n;
    cout << "Enter the number to be chosen k: ";
    cin >> k;
    cout << "C(n, k) = " << combinations(n, k) << endl;
    
    return 0;
}

/*
 * Function: combinations(n, k)
 * Usage: int nWays = combinations(n, k);
 * ---------------------
 * Returns the mathematical combinations function C(n, k), which is
 * the number of ways one can choose k elements from a set of size n.
 */
int combinations(int n, int k) {
    return fact(n) / (fact(k) * fact(n-k));
}

/*
 * Function: fact(n)
 * Usage: int result = fact(n);
 * ---------------------
 * Returns the factorial of n.
 */
int fact(int n) {
    int result = 1;
    for (int i=1; i<=n; i++) {
        result *= i;
    }
    return result;
}
