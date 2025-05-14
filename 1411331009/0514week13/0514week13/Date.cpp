#include <iostream>
#include "Date.h"
using namespace std;

Date::Date(int mn, int dy, int yr)
{
    if (mn > 0 && mn <= monthsPerYear) // 驗證月份是否有效
        month = mn;
    else
        throw invalid_argument("month must be 1-12");

    if (yr > 0) // 驗證年份是否有效
        year = yr;
    else
        throw invalid_argument("year must be positive");

    day = checkDay(dy); // 驗證日期是否有效
}

// 打印日期
void Date::print() const
{
    cout << month << '/' << day << '/' << year;
}

// 解構子
Date::~Date()
{
    cout << "Date object destructor for date ";
    print();
    cout << endl;
}

// 檢查日期是否有效
unsigned int Date::checkDay(int testDay) const
{
    static const int daysPerMonth[] = { 0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
    if (testDay > 0 && testDay <= daysPerMonth[month])
        return testDay;

    throw invalid_argument("Invalid day for current month and year");
}