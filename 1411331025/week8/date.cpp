#include <iostream>
#include <iomanip>
#include <stdexcept>
#include "date.h" // include definition of class Date from Date.h
using namespace std;

// Date constructor initializes each data member
Date::Date(int year, int month, int day)
{
    setDate(year, month, day); // validate and set date
} // end Date constructor

// set new Date value
void Date::setDate(int y, int m, int d)
{
    setYear(y); // set private field year
    setMonth(m); // set private field month
    setDay(d); // set private field day
} // end function setDate

// set year value
void Date::setYear(int y)
{
    if (y >= 1990 && y <= 2050)
        year = y;
    else
        throw invalid_argument("year must be 1990-2050");
}

// set month value
void Date::setMonth(int m)
{
    if (m >= 1 && m <= 12)
        month = m;
    else
        throw invalid_argument("month must be 1-12");
}

// set day value
void Date::setDay(int d)
{
    if (d >= 1 && d <= 31)
        day = d;
    else
        throw invalid_argument("day must be 1-31");
}

// return year value
unsigned int Date::getYear() const
{
    return year;
}

// return month value
unsigned int Date::getMonth() const
{
    return month;
}

// return day value
unsigned int Date::getDay() const
{
    return day;
}

// print Date in universal format (YYYY/MM/DD)
void Date::printUniversal() const
{
    cout << setfill('0') << setw(4) << getYear() << "/"
        << setw(2) << getMonth() << "/" << setw(2) << getDay();
}

// print Date in standard format (YYYY/MM/DD)
void Date::printStandard() const
{
    cout << getYear() << "/" << setfill('0') << setw(2) << getMonth()
        << "/" << setw(2) << getDay();
} // end function printStandard