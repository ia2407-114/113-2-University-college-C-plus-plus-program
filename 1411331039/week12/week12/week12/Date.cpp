#include <array>
#include <iostream>
#include <stdexcept>
#include "Date.h" // include Date class definition
using namespace std;

Date::Date(int mn, int dy, int yr)
{
    if (mn > 0 && mn <= monthsPerYear) // validate the month
        month = mn;
    else
        throw invalid_argument("month must be 1-12");
    if (yr > 0 && yr <= 20) // validate the year
        year = yr;
    else {
        year = -1;
        cout << "year must be 1~20";
    }

    day = checkDay(dy); // validate the day
    cout << "Date object constructor for date ";
    print();
    cout << endl;
} // end Date constructor

void Date::print() const
{
    cout << month << '/' << day << '/' << year;
} // end function print

Date::~Date()
{
    cout << "Date object destructor for date ";
    print();
    cout << endl;
} // end ~Date destructor

unsigned int Date::checkDay(int testDay) const
{
    static const array< int, monthsPerYear + 1 > daysPerMonth =
    { 0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };

    // determine whether testDay is valid for specified month
    if (testDay > 0 && testDay <= daysPerMonth[month])
        return testDay;

    // February 29 check for leap year 
    if (month == 2 && testDay == 29 && (year % 400 == 0 ||
        (year % 4 == 0 && year % 100 != 0)))
        return testDay;

    throw invalid_argument("Invalid day for current month and year");
} // end function checkDay

// 新增的 setter 方法，用於設置日期
Date& Date::setMonth(unsigned int m) {
    if (m > 0 && m <= monthsPerYear) {
        month = m;
    }
    else {
        throw invalid_argument("Month must be between 1 and 12.");
    }
    return *this; // 支援瀑布式調用
}

Date& Date::setDay(unsigned int d) {
    day = checkDay(d);
    return *this; // 支援瀑布式調用
}

Date& Date::setYear(unsigned int y) {
    if (y > 0 && y <= 20) {
        year = y;
    }
    else {
        throw invalid_argument("Year must be between 1 and 20.");
    }
    return *this; // 支援瀑布式調用
}
