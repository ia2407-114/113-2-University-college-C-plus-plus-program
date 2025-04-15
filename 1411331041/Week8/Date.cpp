// Fig. 9.2: Time.cpp
// Time class member-function definitions.
#include <iostream>
#include <iomanip>
#include <stdexcept> // for illegal_argument exception class
#include "Date.h" // include definition of class Time from Time.h

using namespace std;

// Time constructor initializes each data member to zero.
Date::Date()
    : year(1990), month(1), day(1)
{
} // end Time constructor

// set new Time value using universal time
void Date::setDate(int y, int m, int d)
{
    // validate hour, minute and second
    if ((y >= 2005 && y <= 2500) && (m >= 1 && m <= 12) && (d <= 31 && d >= 1))
    {
        year = y;
        month = m;
        day = d;
    } // end if
    else
        throw invalid_argument(
            "");
} // end function setTime

// print Time in universal-time format (HH:MM:SS)
void Date::printUniversal() const
{
    cout << setfill('0') << setw(4) << year << "/"
        << setw(2) << month << "/" << setw(2) << day;
} // end function printUniversal

// print Time in standard-time format (HH:MM:SS AM or PM)
