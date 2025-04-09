// Fig. 9.5: Time.cpp
// Member-function definitions for class Time.
#include <iostream>
#include <iomanip>
#include <stdexcept>
#include "Time.h" // include definition of class Time from Time.h
using namespace std;

// Time constructor initializes each data member 
Time::Time(int Western_year, int month, int day)
{
    setTime(Western_year, month, day); // validate and set time
} // end Time constructor

// set new Time value using universal time
void Time::setTime(int w, int m, int d)
{
    setWestern_year(w); // set private field hour
    setmonth(m); // set private field minute
    setday(d); // set private field second
} // end function setTime

// set hour value
void Time::setWestern_year(int w)
{
    if (w >= 0 && w < 2025)
        Western_year = w;
    else
        throw invalid_argument("年必須為 0-2025"); 
} // end function setHour

// set minute value
void Time::setmonth(int m)
{
    if (m >= 1 && m < 12)
        month = m;
    else
        throw invalid_argument("月份必須是 1-12");
} // end function setMinute

// set second value
void Time::setday(int d)
{
    if (d >= 1 && d < 31)
        day = d;
    else
        throw invalid_argument("日期必須是 1-31");
} // end function setSecond

// return hour value
unsigned int Time::getWestern_year() const
{
    return Western_year;
} // end function getHour

// return minute value
unsigned int Time::getmonth() const
{
    return month;
} // end function getMinute

// return second value
unsigned int Time::getday() const
{
    return day;
} // end function getSecond

// print Time in universal-time format (HH:MM:SS)
void Time::printUniversal() const
{
    cout << setfill('0') << setw(4) << getWestern_year() << "/"
        << setw(2) << getmonth() << "/" << setw(2) << getday() << endl;
} // end function printUniversal

// print Time in standard-time format (HH:MM:SS AM or PM)
void Time::printStandard() const
{
    cout << setfill('0') << setw(4)  << ((getWestern_year() < 1911) ? getWestern_year() : getWestern_year() - 1911)
        << "/" << setw(2) << getmonth()
        << "/" << setw(2) << getday() << (getWestern_year() < 1911 ? " 西元" : " 民國")<< endl;
} // end function printStandard