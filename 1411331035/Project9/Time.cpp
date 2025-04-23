// Time.cpp
// 程式碼序號: 22196883
#include <iostream>
#include <iomanip>
#include <stdexcept>
#include "Date.h"
 // 請在此引入必要的使用者標頭檔
using namespace std;

// Time constructor initializes each data member 
Date::Date(int year, int month, int day)
{
    setDate(year, month, day); // validate and set time
} // end Time constructor

// set new Time value using universal time
void Date::setDate(int y, int m, int d)
{
    setYear(y); // set private field hour
    setMonth(m); // set private field minute
    setDay(d); // set private field second
} // end function setTime

// set hour value
void Date::setYear(int y)
{
    if (y >= 1911 && y < 2100)
        year = y;
    else
        throw invalid_argument("year must be 1911-2099");
} // end function setHour

// set minute value
void Date::setMonth(int m)
{
    if (m >= 1 && m < 13)
        month = m;
    else
        throw invalid_argument("month must be 1-12");
} // end function setMinute

// set second value
void Date::setDay(int d)
{
    if ((month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12) && (d >= 1 && d <= 31))
        day = d;
    else if ((month == 4 || month == 6 || month == 9 || month == 11) && (d >= 1 && d <= 30))
        day = d;
    else if ((month == 2) && (d >= 1 && d <= 28))
        day = d;
    else
        throw invalid_argument("這個月沒有這一天!!!");
} // end function setSecond

// return hour value
unsigned int Date::getYear() const
{
    return year;
} // end function getHour

// return minute value
unsigned int Date::getMonth() const
{
    return month;
} // end function getMinute

// return second value
unsigned int Date::getDay() const
{
    return day;
} // end function getSecond

// print Time in universal-time format (HH:MM:SS)
void Date::printUniversal() const
{
    cout << setfill('0') << setw(4) << getYear() << "/"
        << setw(2) << getMonth() << "/" << setw(2) << getDay();
} // end function printUniversal

// print Time in standard-time format (HH:MM:SS AM or PM)
void Date::printStandard() const
{
    int rocYear = getYear() - 1911;
    cout << setw(3) << setfill('0') << rocYear << "/" << setw(2) << setfill('0') << getMonth() << "/" << setw(2) << setfill('0') << getDay();

} // end functio3n printStandard  //6883
Date::~Date() {
    cout << "西元";
    printUniversal();
    cout << endl;
    
    cout << "民國";
    printStandard();
    cout << endl;

    cout << "Bye Bye!" << endl;
}