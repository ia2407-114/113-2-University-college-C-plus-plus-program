// Fig. 9.2: Date.cpp
// Date class member-function definitions.
#include <iostream>
#include <iomanip>
#include <stdexcept> // for illegal_argument exception class
#include "Date.h" // include definition of class Date from Date.h

using namespace std;

// Date constructor initializes each data member to zero.
Date::Date()
    : year(0), month(0), day(0)
{
} // end Date constructor

// set new Date value using universal Date
void Date::setDate(int h, int m, int s)
{
    // validate year, month and day
    if  ((m >= 0 && m <= 12) &&
        (s >= 0 && s <=31))
    {
        year = h;
        month = m;
        day = s;
    } // end if
    else
        throw invalid_argument(
            "year, month and/or day was out of range");
} // end function setDate

// print Date in universal-Date format (HH:MM:SS)
void Date::printUniversal() const
{
    cout << setfill('0') << setw(2) << year << "/"
        << setw(2) << month << "/" << setw(2) << day;
} // end function printUniversal

// print Date in standard-Date format (HH:MM:SS AM or PM)
void Date::printStandard() const
{
    cout << ((year<1911) ? year : year - 1911) << "/"
        << setfill('0') << setw(2) << month << "/" << setw(2)
        << day ;
} // end function printStandard