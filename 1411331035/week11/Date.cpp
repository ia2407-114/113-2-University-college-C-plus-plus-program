// Date.cpp
#include <array>
#include <iostream>
#include <stdexcept>
#include "Date.h"
using namespace std;

Date::Date(int mn, int dy, int yr) : year(yr) {
    if (mn > 0 && mn <= monthsPerYear)
        month = mn;
    else
        throw invalid_argument("月份必須介於1~12");

    day = checkDay(dy);
    cout << "Date constructor for date "; print(); cout << endl;
}

unsigned int Date::checkDay(int testDay) const {
    static const array<int, monthsPerYear + 1> daysPerMonth = { 0,31,28,31,30,31,30,31,31,30,31,30,31 };
    if (testDay > 0 && testDay <= daysPerMonth[month])
        return testDay;
    if (month == 2 && testDay == 29 && (year % 400 == 0 || (year % 4 == 0 && year % 100 != 0)))
        return testDay;
    throw invalid_argument("此月無此日期");
}

void Date::print() const {
    cout << month << '/' << day << '/' << year;
}

Date::~Date() {
    cout << "Date destructor for date "; print(); cout << endl;
}

unsigned int Date::getYear() const { return year; }
unsigned int Date::getMonth() const { return month; }
unsigned int Date::getDay() const { return day; }

bool Date::operator<=(const Date& o) const {
    if (year != o.year) return year < o.year;
    if (month != o.month) return month < o.month;
    return day <= o.day;
}