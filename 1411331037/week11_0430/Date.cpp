#include <array>
#include <iostream>
#include <stdexcept>
#include "Date.h" // include Date class definition
using namespace std;

// constructor confirms proper value for month; calls
// utility function checkDay to confirm proper value for day
Date::Date(int mn, int dy, int yr)
{
    if (mn > 0 && mn <= monthsPerYear) // validate the month
        month = mn;
    else
        throw invalid_argument("月份必須於 1-12 之間");
	if (yr < 2025 && yr>2005) // validate the year
		year = yr;
	else
		throw invalid_argument("年份必須於 2005-2025 之間");
    day = checkDay(dy); // validate the day

    // output Date object to show when its constructor is called
    print();
    cout << endl;
} // end Date constructor

// print Date object in form month/day/year
void Date::print() const
{
    cout << month << '/' << day << '/' << year;
} // end function print


// output Date object to show when its destructor is called
Date::~Date()
{
    cout << "結束顯示日期: ";
    print();
    cout << endl;
} // end ~Date destructor

// utility function to confirm proper day value based on 
// month and year; handles leap years, too
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

    throw invalid_argument("無效的日期、月份或年份!");
} 

int Date::get_month() const{
	return month;
}
int Date::get_day() const{
    return day;
}
int Date::get_year() const{
    return year;
}