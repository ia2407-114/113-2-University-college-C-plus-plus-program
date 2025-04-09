// Fig. 9.5: Time.cpp
// Member-function definitions for class Time.
#include <iostream>
#include <iomanip>
#include <stdexcept>
#include "Date.h" // include definition of class Time from Time.h
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
    if (y >= 0)
        year = y;
    else
        throw invalid_argument("年必須大於0");
} // end function setHour

// set minute value
void Date::setMonth(int m)
{
    if (m >= 1 && m < 13)
        month = m;
    else
        throw invalid_argument("月份必須為1 - 12");
} // end function setMinute

// set second value
void Date::setDay(int d)
{
    if (d >= 1 && d < 32)
        day = d;
    else
        throw invalid_argument("請檢查日期1-31");
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
    cout << (getYear() - 1911)
        << "/" << setfill('0') << setw(2) << getMonth()
        << "/" << setw(2) << getDay();
}