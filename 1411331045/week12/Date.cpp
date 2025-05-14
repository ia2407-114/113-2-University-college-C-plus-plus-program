#include <array>
#include <iostream>
#include <stdexcept>
#include "Date.h"
using namespace std;

Date::Date(int mn, int dy, int yr)
{
    if (mn > 0 && mn <= monthsPerYear)
        month = mn;
    else
        throw invalid_argument("month must be 1-12");

    if (yr > 2004 && yr <= 2025)
        year = yr;
    else
        throw invalid_argument("狗的年紀需在0~20歲以內(2005~2025)");

    day = checkDay(dy);

    cout << "日期的資料物件建構函數 ";
    print();
    cout << endl;
}

void Date::print() const
{
    cout << month << '/' << day << '/' << year;
}

unsigned int Date::getyear() const
{
    return  year;
}
unsigned int Date::getday() const
{
    return day;
}
unsigned int Date::getmonth() const
{
    return month;
}

Date::~Date()
{
    cout << "日期的資料物件析構函數 ";
    print();
    cout << endl;
}

unsigned int Date::checkDay(int testDay) const
{
    static const array< int, monthsPerYear + 1 > daysPerMonth =
    { 0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 }; //平年的每個月的日期天數


    if (testDay > 0 && testDay <= daysPerMonth[month]) // 檢查當月是否有這個日(預設為平年)
        return testDay;

    if (month == 2 && testDay == 29 && (year % 400 == 0 ||
        (year % 4 == 0 && year % 100 != 0))) //檢查月份是否為2月和是否為29日再檢查是否為閏年 
        return testDay;

    throw invalid_argument("Invalid day for current month and year");
}