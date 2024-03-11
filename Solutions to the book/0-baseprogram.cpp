/* 
 * File: Baseprogram.cpp
 * ---------------------
 * starting comment
 */
#include <iostream>

using std::string, std::cin, std::cout, std::endl;
// instead of
// using namespace std;
// wich is okey inside a function but please
// never do it on a header file.

int prototype(int n, int k);

int main() {
    cout << "Hello World!" << "\n";
    cout << "Again Hello!" << endl;
    
    return 0;
}


int prototype(int n, int k) {
    int result = 1;
    
    return result;
}
