/*
 * File: Quadratic.cpp
 * ---------------------
 * Finds tha roots of the quadratic equation
 *      a x^2 + b x + c = 0
 * If a is 0 or the equation has no real roots,
 * the programs prints an error message and exits.
 */
#include <iostream>
#include <cstdlib>
#include <cmath>
// using std::string, std::cin, std::cout, std::endl;
// Just for this one I am going to use namespace std
using namespace std;

/* Prototypes */
void getCoefficients(
    double & a, double & b, double & c);
    
void solveQuadratic(
    double a, double b, double c,
    double & x1, double & x2);
    
void printRoots(
    double x1, double x2);
    
void error(string msg);

/* Main program */
int main() {
    double a, b, c, r1, r2;
    getCoefficients(a, b, c);
    solveQuadratic(a, b, c, r1, r2);
    printRoots(r1, r2);
    return 0;
}


/*
 * Function: getCoefficients
 * Usage: getCoefficients(a, b, c);
 * ---------------------
 * Reads in the coefficients of a quadratic equation into
 * the reference parameters a, b, c.
 * (as a reminder, they are passed by reference so they should
 * be declared in the main function)
 */
void getCoefficients(
        double & a, double & b, double & c) {
    cout << "Enter coefficients for the quadratic equation:\n";
    cout << "a: ";
    cin >> a;
    cout << "b: ";
    cin >> b;
    cout << "c: ";
    cin >> c;
}

/*
 * Function: solveQuadratic
 * Usage: solveQuadratic(a, b, c, x1, x2);
 * ---------------------
 * Solves a quadratic equation with coefficients a, b and c.
 * The roots are returned in the reference parameters x1 and x2.
 */
void solveQuadratic(
        double a, double b, double c,
        double & x1, double & x2) {
    if (a==0) error("The coefficient a must be nonzero.");
    double disc = b*b - 4*a*c;
    if (disc<0) error("This equation has no real roots.");
    double sqrtDisc = sqrt(disc);
    x1 = (-b + sqrtDisc) / (2*a);
    x2 = (-b - sqrtDisc) / (2*a);
}

/*
 * Function: printRoots
 * Usage: printRoots(x1, x2);
 * ---------------------
 * Displays x1 and x2, the roots of the equation.
 */
void printRoots(
        double x1, double x2) {
    if (x1==x2) {
        cout << "There is a double root at " << x1 << endl;
    }
    else {
        cout << "The roots are " << x1 << " and " << x2 << endl;
    }
}

/*
 * Function: error
 * Usage: error(msg);
 * ---------------------
 * Writes the string msg to the cerr stream and the exits
 * the program with a standatd status value indicating a failure.
 */
void error(string msg) {
    cerr << msg << endl;
    exit(EXIT_FAILURE);
}
