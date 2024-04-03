/*
 * File: cs106_compiled_try.cpp
 * ---------------------
 * A simple attempt to use the sc106 libary.
 */
#include "cs106/console.h"
#include "cs106/simpio.h"
using namespace std;

int main() {
    string name = getLine("What is your name?");
    cout << "Hello, " << name << endl;
    
    return 0;
}
