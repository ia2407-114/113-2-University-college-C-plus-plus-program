#include "Date.h"
#include <array>
#include <iostream>
#include <stdexcept>
using namespace std;

Date::Date(int mn, int dy, int yr)
{
    if (mn > 0 && mn <= monthsPerYear)
        month = mn;
    else
        throw invalid_argument("month must be 1-12");

    year = yr;
    day = checkDay(dy);

    cout << "Date object constructor for date ";
    print();
    cout << endl;
}

Date::~Date()
{
    cout << "Date object destructor for date ";
    print();
    cout << endl;
}

unsigned int Date::checkDay(int testDay) const
{
    static const array<int, monthsPerYear + 1> daysInMonth =
    { 0,31,28,31,30,31,30,31,31,30,31,30,31 };

    // ���~�j��p���ˬd
    if (testDay > 0 && testDay <= daysInMonth[month])
        return testDay;
    // �|�~ 2/29
    if (month == 2 && testDay == 29 &&
        (year % 400 == 0 || (year % 4 == 0 && year % 100 != 0)))
        return testDay;

    throw invalid_argument("Invalid day for current month and year");
}

// �s�W Getter ��@
unsigned int Date::getYear() const { return year; }
unsigned int Date::getMonth() const { return month; }
unsigned int Date::getDay() const { return day; }

void Date::print() const
{
    cout << month << '/' << day << '/' << year;
}