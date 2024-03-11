/* 
 * File: more_on_switch_and_enum.cpp
 * ---------------------
 * Another example of switch and enum using months
 */
#include <iostream>

using std::string, std::cout, std::endl;

enum Month {
    JANUARY, FEBRUARY, MARCH, APRIL, MAY, JUNE,
    JULY, AUGUST, SEPTEMBER, OCTOBER, NOVEMBER, DECEMBER
};

int daysInMonth(Month month, int year);
bool isLeapYear(int year);

int main() {
    cout << "September, 1998 have " 
        << daysInMonth(SEPTEMBER, 1998) << " days." << "\n";
    cout << "April, 2000 have " 
        << daysInMonth(APRIL, 2000) << " days." << "\n";
    cout << "February, 2024 have " 
        << daysInMonth(FEBRUARY, 2024) << " days." << endl;
    
    return 0;
}

// The inclussion of year feels weird
// But thats not the point of this
int daysInMonth(Month month, int year) {
    switch (month) {
        case APRIL:
        case JUNE:
        case SEPTEMBER:
        case NOVEMBER:
            return 30;
        case FEBRUARY:
            // Please note the use of the ternary operator
            return (isLeapYear(year)) ? 29 : 28;
        default:
            return 31;
    }
}

bool isLeapYear(int year) {
    return ((year % 4 == 0) && (year % 100 != 0))
        || (year % 400 == 0);
}
