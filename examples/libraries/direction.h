/*
 * File: direction.h
 * ---------------------
 * Interface to export the Direction enum whose elements are the four
 * compass points: NORTH, EAST, SOUTH, WEST.
 */
#ifndef _direction_h
#define _direction_h

/*
 * Type: Direction
 * ---------------------
 * This enumerated type represents the four compass directions.
 */
enum Direction (NORTH, EAST, SOUTH, WEST);

/*
 * Function: leftFrom
 * Usage: Direction newdir = leftFrom(dir);
 * ---------------------
 * Return the direction that is to the left of the argument.
 * For example, leftFrom(NORTH) returns WEST.
 */
Direction leftFrom(Direction dir);

/*
 * Function: rightFrom
 * Usage: Direction newdir = rightFrom(dir);
 * ---------------------
 * Return the direction that is to the right of the argument.
 * For example, rightFrom(NORTH) returns EAST.
 */
Direction rightFrom(Direction dir);

/*
 * Function: directionToSTring
 * Usage: std::string str = directionToSTring(dir);
 * ---------------------
 * Returns the name of the direction as a string.
 */
std::string directionToSTring(Direction dir);

#endif //_direction_h
