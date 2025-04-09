// Fig. 9.2: Time.cpp
// Time class member-function definitions.
#include <iostream>
#include <iomanip>
#include <stdexcept> // for illegal_argument exception class
#include "Time.h" // include definition of class Time from Time.h

using namespace std;

// Time constructor initializes each data member to zero.
Date::Date()
    : year(0), month(0), day(0)
{
} // end Time constructor

// set new Time value using universal time
void Date::setDate(int y, int m, int d)
{
    // validate month and day
    if ((m >= 1 && m <= 12) && (d >= 1 && d <= 31))
    {
        year = y;
        month = m;
        day = d;
    } // end if
    else
    {
        throw invalid_argument("year, month and/or day was out of range");
    } // end else
}


// print Time in universal-time format (HH:MM:SS)
void Date::printUniversal() const
{
    cout << setfill('0') << setw(2) << year << "/"
        << setw(2) << month << "/" << setw(2) << day;
} // end function printUniversal

// print Time in standard-time format (HH:MM:SS AM or PM)
void Date::printStandard() const
{
    cout << ((year<1911) ? year : year-1911) << "/"
        << setfill('0') << setw(2) << month << "/" << setw(2)
        << day;
} // end function printStandard