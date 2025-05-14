#include "Date.h"
#include <iostream>
#include <array>
#include <stdexcept>
using namespace std;

Date::Date(int mn, int dy, int yr) {
    setMonth(mn).setDay(dy).setYear(yr);
    cout << "[Date constructor] ";
    print();
    cout << endl;
}

Date& Date::setMonth(int mn) {
    if (mn < 1 || mn > monthsPerYear)
        throw invalid_argument("month must be 1-12");
    this->month = mn;
    return *this;
}

Date& Date::setDay(int dy) {
    this->day = checkDay(dy);
    return *this;
}

Date& Date::setYear(int yr) {
    this->year = yr;
    return *this;
}

unsigned int Date::checkDay(int testDay) const {
    static const array<int, monthsPerYear + 1> daysInMonth =
    { 0,31,28,31,30,31,30,31,31,30,31,30,31 };
    if (testDay > 0 && testDay <= daysInMonth[month])
        return testDay;
    if (month == 2 && testDay == 29 &&
        (year % 400 == 0 || (year % 4 == 0 && year % 100 != 0)))
        return testDay;
    throw invalid_argument("invalid day for current month/year");
}

void Date::print() const {
    cout << month << "/" << day << "/" << year;
}

Date::~Date() {
    cout << "[Date destructor] ";
    print();
    cout << endl;
}
