/* 
 * File: random.h
 * ---------------------
 * Exports functions to generate pseudorandom numbers.
 */
#ifndef _random_h
#define _random_h

/* 
 * Function: randomInteger
 * Usage: int n = randomInteger(low, high);
 * ---------------------
 * Returns a random integer in the range low to heigh, inclusive.
 */
 
int randomInteger(int low, int high);

/* 
 * Function: randomReal
 * Usage: double d = randomReal(low, high);
 * ---------------------
 * Returns a random real number in the half-open interval [low, high)
 */
 
double randomReal(double low, double high);

/* 
 * Function: randomChance
 * Usage: if (randomChance(p)) ...
 * ---------------------
 * Returns true eith the probability indicated by p. p must be a
 * floating point number between 0 (never) and 1 (allways).
 */
 
bool randomChance(double p);

/* 
 * Function: setRandomSeed
 * Usage: setRandomSeed(seed);
 * ---------------------
 * Sets the internal random number to the specific value. This set a
 * specific starting point for the pseudorandom sequence or ensures
 * that the program behavior is repeatable during debugging.
 */

void setRandomSeed(int seed);

#endif //_random_h
