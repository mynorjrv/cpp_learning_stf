/* 
 * File: 1-4.cpp
 * ---------------------
 * Example of input, output and some operations
 */
#include <iostream>

using std::string, std::cin, std::cout, std::endl;

int main() {
    double n1, n2, n3;
    cout << "This program adds three numbers." << "\n";
    cout << "The first number: " << "\n";
    cin >> n1;
    cout << "The second number: " << "\n";
    cin >> n2;
    cout << "The third number: " << "\n";
    cin >> n3;
    double sum = n1+n2+n3;
    cout << "The sum is " << sum << endl;
    
    return 0;
}
