/*
 * File: direction.cpp
 * ---------------------
 * direction.h implementation
 */
#include <string>
#include "direction.h"
using std::string;

/*
 * Implementation notes: leftFrom, rightGrom
 * ---------------------
 * These functions use the remainder operator to ccle through the
 * internal values of the enomeration type. Note that leftFrom
 * instead of subtracting adds 3, achieving the same result but
 * ensuring the values remains positive.
 */
Direction leftFrom(Direction dir) {
    // dir+3 uses an implicit Direction to int conversion
    return Direction((dir+3) % 4);
}

Direction rightFrom(Direction dir) {
    return Direction((dir+1) % 4);
}

/*
 * Implementation notes: directionToString
 * ---------------------
 * Most C++ compilers tequire the default clause to meke sire that
 * this function always returns a string, even if the direction is
 * not one of the legal values.
 */
string directionToSTring(Direction dir) {
    switch (dir) {
        case NORTH: return "NORTH";
        case EAST: return "EAST";
        case SOUTH: return "SOUTH";
        case WEST: return "WEST";
        default: return "???";
    }
}
