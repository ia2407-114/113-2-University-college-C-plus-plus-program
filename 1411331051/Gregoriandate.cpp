#include "GregorianDate.h"
#include <stdexcept>
#include <iostream>
#include <iomanip>

using namespace std;

// Constructor initializing with default date values
GregorianDate::GregorianDate(int year, int month, int day)
{
    if (isValidDate(year, month, day))
    {
        this->year = year;
        this->month = month;
        this->day = day;
    }
    else
    {
        throw invalid_argument("Invalid date provided.");
    }
}

// Check if the date is valid
bool GregorianDate::isValidDate(int year, int month, int day) const
{
    if (month < 1 || month > 12)
        return false;

    if (day < 1 || day > 31)
        return false;

    // Month-specific days validation
    switch (month)
    {
    case 4: case 6: case 9: case 11:
        if (day > 30) return false;
        break;
    case 2:
        if (isLeapYear(year))
        {
            if (day > 29) return false;
        }
        else
        {
            if (day > 28) return false;
        }
        break;
    }

    return true;
}

// Check if the year is a leap year
bool GregorianDate::isLeapYear(int year) const
{
    return (year % 4 == 0 && (year % 100 != 0 || year % 400 == 0));
}

// Set the date
void GregorianDate::setDate(int year, int month, int day)
{
    if (isValidDate(year, month, day))
    {
        this->year = year;
        this->month = month;
        this->day = day;
    }
    else
    {
        throw invalid_argument("Invalid date provided.");
    }
}

// Print the Gregorian date
void GregorianDate::printGregorian() const
{
    cout << "Gregorian Date: " << year << "/" << setw(2) << setfill('0') << month << "/" << setw(2) << setfill('0') << day << endl;
}

// Print the Republic of China date
void GregorianDate::printRepublic() const
{
    int republicYear = year - 1911;  // ROC year is 1911 less than the Gregorian year
    cout << "Republic of China Date: " << republicYear << "/" << setw(2) << setfill('0') << month << "/" << setw(2) << setfill('0') << day << endl;
}

