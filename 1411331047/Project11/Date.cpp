// Date.cpp
#include "Date.h"
#include <iostream>
using namespace std;

Date::Date(int mn, int dy, int yr) {
    if (mn < 1 || mn > monthsPerYear)
        throw invalid_argument("month must be 1-12");
    month = mn;
    year = yr;
    day = checkDay(dy);

    cout << "Date constructor: ";
    print();
    cout << endl;
}

unsigned int Date::checkDay(int testDay) const {
    static const array<int, monthsPerYear + 1> daysPerMonth
        = { 0,31,28,31,30,31,30,31,31,30,31,30,31 };

    if (testDay > 0 && testDay <= daysPerMonth[month])
        return testDay;
    // leap-year check
    if (month == 2 && testDay == 29 &&
        (year % 400 == 0 || (year % 4 == 0 && year % 100 != 0)))
        return testDay;
    throw invalid_argument("Invalid day for current month/year");
}

void Date::print() const {
    cout << month << '/' << day << '/' << year;
}

int Date::calculateAge(const Date& onDate) const {
    int age = onDate.year - year;
    // 若 onDate 的月／日還不到生日，減 1 歲
    if (onDate.month < month ||
        (onDate.month == month && onDate.day < day))
        --age;
    return age;
}

bool Date::operator<=(const Date& rhs) const {
    if (year != rhs.year)        return year < rhs.year;
    if (month != rhs.month)      return month < rhs.month;
    return day <= rhs.day;
}

Date::~Date() {
    cout << "Date destructor: ";
    print();
    cout << endl;
}
