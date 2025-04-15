// Fig. 9.5: Date.cpp
// Member-function definitions for class Date.
#include <iostream>
#include <iomanip>
#include <stdexcept>
#include "Date.h" // include definition of class Date from Date.h
using namespace std;

// Date constructor initializes each data member 
Date::Date(int year, int month, int day)
{
    setDate(year, month, day); // validate and set Date
} // end Date constructor

// set new Time value using universal time
void Date::setDate(int y, int m, int d)
{
    setYear(y); // set private field year
    setMonth(m); // set private field month
    setDay(d); // set private field day
} // end function setDate

// set year value
void Date::setYear(int y)
{
    if (y >= 1990 && y < 2050)
        year = y;
    else
        throw invalid_argument("year must be 1990-2050");
} // end function setYear

// set month value
void Date::setMonth(int m)
{
    if (m >= 1 && m < 12)
        month = m;
    else
        throw invalid_argument("month must be 1-12");
} // end function setMonth

// 設定日期（含檢查當月最大天數）
void Date::setDay(int d)
{
    int daysInMonth[] = { 31, (isLeapYear(year) ? 29 : 28), 31, 30, 31, 30,
                          31, 31, 30, 31, 30, 31 };

    if (d >= 1 && d <= daysInMonth[month - 1])
        day = d;
    else
        throw invalid_argument("該月的日期無效，請確認是否超過該月份的天數");
}
// 判斷是否為閏年
bool Date::isLeapYear(int y) const
{
    return (y % 4 == 0 && y % 100 != 0) or (y % 400 == 0);
}
// end function setDay

// return year value
unsigned int Date::getYear() const
{
    return year;
} // end function getYear

// return month value
unsigned int Date::getMonth() const
{
    return month;
} // end function getMonth

// return day value
unsigned int Date::getDay() const
{
    return day;
} // end function getDay

// 印出西元格式(yyyy/mm/dd)
void Date::printGregorian() const
{
    cout << "西元日期:"
        << year << "/"  //把year印出來，加上一個/，例如:2025/
        << setw(2) << setfill('0') << month << "/"  //setw(2)設定寬度為2，setfill('0')如果數字不足兩位 用0補滿 例如:month=4 會印出:04/
        << setw(2) << setfill('0') << day << endl;  //一樣是把day補0印出來，endl是「end line」的縮寫，代表換行
} // end function printGregorian

// 印出民國格式(民國yyy年mm月dd日)
void Date::printROC() const
{
    cout << "民國日期:民國"
        << (year - 1911) << "年"
        << month << "月"
        << day << "日" << endl;
} // end function printROC

