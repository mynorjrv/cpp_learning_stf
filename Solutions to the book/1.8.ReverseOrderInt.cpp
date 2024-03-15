/*
 * File: ReverseOrderInt.cpp
 * ---------------------
 * Reads an integer and returns mber with the seme digits 
 * but in reverser order.
 */
#include <iostream>

using std::string, std::cin, std::cout, std::endl;

long reverseInt(long n);

int main() {
    cout << "This program reverses the digits in an integer" << "\n";
    
    long value;
    cout << "Enter a positive integer: ";
    cin >> value;
    
    cout << "The value is " << value << "\n";
    cout << "The reverse int is " << reverseInt(value) << endl;
    
    return 0;
}


long reverseInt(long n) {
    long inverse = 0;
    // int shiftPosition = 10;
    while (n > 0) {
        // inverse =  inverse*shiftPosition + (n%10);
        inverse =  10*inverse + (n%10);
        cout << "10*inverse: " << 10*inverse << " ";
        cout << "ultimo digito: " << n%10 << " ";
        cout << "inverse: " << inverse << "\n";
        n /= 10;
    }
    return inverse;
}
