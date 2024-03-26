/* 
 * File: error.cpp
 * ---------------------
 * Implementation of the error.h interface.
 */

#include <iostream>
#include <cstdlib>
#include <string>
#include "error.h"
//using namespace std;
using std::string, std::cerr, std::endl;

/* 
 * Implementation notes: error
 * ---------------------
 * Writes the string msg to the cerr stream and then exits the program
 * with a standard status cde indicating faulure. The EXIT_FAILURE
 * constant is defined in <cstdlib> to represent a standard
 * failure code.
 */
 
void error(string msg) {
    cerr << msg << endl;
    exit(EXIT_FAILURE);
}
