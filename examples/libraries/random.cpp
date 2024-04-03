/* 
 * File: random.cpp
 * ---------------------
 * This file implements random.h interface.
 */
#include <cstdlib>
#include <cmath>
#include <ctime>
#include "random.h"
using namespace std;

/* Private function prototype */
// THis function is not in the interface.
void initRandomSeed();


/* 
 * Implementation notes: randomInteger
 * The code for randomInteger produces the number in four steps:
 *
 * 1) Generate a random real number in the range [0, 1)
 * 2) Scale the number to the range [0, N) where N is the number of values.
 * 3) Translate the number to the appropiate range.
 * 4) Convert the result to the next lower integer.
 *
 * The implementation accounts that the expressions RAND_MAX + 1 and
 * high - low + 1 can overflow the integer range. These calculations
 * must be performed using doaubles instead of ints.
 */
 
int randomInteger(int low, int high) {
    initRandomSeed();
    double d = random() / (double(RAND_MAX) + 1);
    double s = d * (double(high) - low + 1);
    return int(floor(low + s));
}

/* 
 * Implementation notes: randomReal
 * ---------------------
 * The implementatios is similar to randomInteger, withoout the 
 * final step.
 */
 
double randomReal(double low, double high) {
    initRandomSeed();
    double d = random() / (double(RAND_MAX) + 1);
    double s = d * (double(high) - low + 1);
    return low + s;
}

/* 
 * Implementation notes: randomChance
 * ---------------------
 * randomChances use randomReal(0, 1) and chechs wheter the result
 * is less than the rquested probability.
 */
 
bool randomChance(double p) {
    initRandomSeed();
    return randomReal(0, 1) < p;
}

/* 
 * Implementation notes: setRandomSeed
 * ---------------------
 * This function simply forwards its argument to srand.
 * The call to inirRandomSeed is required to set the 
 * initialized flag.
 */

void setRandomSeed(int seed) {
    initRandomSeed();
    srand(seed);
}

/* 
 * Implementation notes: initRandomSeed
 * ---------------------
 * This function simply declares a static variable that keeps track
 * of whether the seed has been initialized. The fist tiem initRandomSeeed
 * is called, initialize is false, so the seed is set to the current time.
 */

void initRandomSeed() {
    static bool initialized = false;
    if (!initialized) {
        srand(int(time(NULL)));
        initialized = true;
    }
}
