// Date.cpp
#include <iostream>
#include <stdexcept>
#include "Date.h"
using namespace std;

// constructor: validate month and day
Date::Date(int m, int d, int y) : year(y) {
    if (m > 0 && m <= monthsPerYear) {
        month = m;
    }
    else {
        throw invalid_argument("Month must be 1-12");
    }
    day = checkDay(d);
}

unsigned int Date::checkDay(int testDay) const {
    static const int daysPerMonth[Date::monthsPerYear + 1] =
    { 0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };

    // check for leap year
    if (month == 2 && ((year % 400 == 0) || (year % 4 == 0 && year % 100 != 0))) {
        if (testDay >= 1 && testDay <= 29) {
            return testDay;
        }
    }
    else {
        if (testDay >= 1 && testDay <= daysPerMonth[month]) {
            return testDay;
        }
    }
    throw invalid_argument("Day out of range for current month and year");
}

int Date::getMonth() const { return month; }
int Date::getDay() const { return day; }
int Date::getYear() const { return year; }

void Date::printStandard() const {
    cout << year << "/" << month << "/" << day;
}

void Date::printUniversal() const {
    cout << (month < 10 ? "0" : "") << month << "/"
        << (day < 10 ? "0" : "") << day << "/"
        << year;
}

bool Date::isValid() const {
    try {
        checkDay(day);
        return true;
    }
    catch (invalid_argument&) {
        return false;
    }
}

bool Date::isBefore(const Date& other) const {
    if (year < other.year) return true;
    if (year > other.year) return false;
    if (month < other.month) return true;
    if (month > other.month) return false;
    return day < other.day;
}