/* 
 * File: error.h
 * ---------------------
 * Defines a simple function for reporting errors.
 */
#ifndef _error_h
#define _error_h

/* 
 * Function: error
 * Usage: error(msg);
 * ---------------------
 * Writes the string msg to the cerr stream and then exits the program
 * with a standard status cde indicating faulure. The usual pattern for
 * using error is to enclose the call to error inside an if statement 
 * that checks a particular condition, might look something like:
 *
 *  if (divisor == 0) error("Division by zero");
 */
 
// Note the use of std::string
// Never use namespace std in a header file.
void error(std::string msg);


#endif //_error_h
