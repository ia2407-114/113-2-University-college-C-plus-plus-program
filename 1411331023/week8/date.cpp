#include <iostream>
#include <iomanip>
#include <stdexcept>
#include <string>
#include "date.h" // include definition of class Date
using namespace std;

// Date constructor initializes each data member 
Date::Date(int y, int m, int d)
{
    setDate(y, m, d); // validate and set date
}

// Set full date
void Date::setDate(int y, int m, int d)
{
    setYear(y);
    setMonth(m);
    setDay(d);
}

// Set year value
void Date::setYear(int y)
{
    if (y >= 1900 && y < 2050)
        year = y;
    else
        throw invalid_argument("Year must be between 1900 and 2050");
}

// Set month value
void Date::setMonth(int m)
{
    if (m >= 1 && m <= 12)
        month = m;
    else
        throw invalid_argument("Month must be between 1 and 12");
}

// Set day value
void Date::setDay(int d)
{
    if (d < 1 || d > 31)
        throw invalid_argument("Day must be between 1 and 31");

    if ((month == 4 || month == 6 || month == 9 || month == 11) && d > 30)
        throw invalid_argument("This month has only 30 days");

    if (month == 2 && d > 28)
        throw invalid_argument("February has only 28 days");

    day = d;
}

// Getters
unsigned int Date::getYear() const { return year; }
unsigned int Date::getMonth() const { return month; }
unsigned int Date::getDay() const { return day; }

// Print functions
void Date::printUniversal() const
{
    cout << setfill('0') << setw(4) << getYear() << "/"
        << setw(2) << getMonth() << "/"
        << setw(2) << getDay();
}

void Date::printStandard() const
{
    cout << setfill('0') << (getYear() - 1911) << "/"
        << setw(2) << getMonth() << "/"
        << setw(2) << getDay();
}

// Validate date
std ::string Date::isValidDate(int y, int m, int d) const
{
    if (m < 1 || m > 12)
        return "invalid";

    if ((m == 4 || m == 6 || m == 9 || m == 11) && d > 30)
        return "invalid";

    if (m == 2 && d > 28)
        return "invalid";

    if (d < 1 || d > 31)
        return "invalid";

    return "valid";
}
