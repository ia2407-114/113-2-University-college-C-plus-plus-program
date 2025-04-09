// Date.cpp
#include <iostream>
#include <stdexcept>
#include "Date.h"
using namespace std;

Date::Date(int y, int m, int d) {
    if (!isValidDate(y, m, d)) {
        throw invalid_argument("Invalid date");
    }
    year = y;
    month = m;
    day = d;
}

bool Date::isLeapYear(int y) const {
    return (y % 4 == 0 && y % 100 != 0) || (y % 400 == 0);
}

bool Date::isValidDate(int y, int m, int d) const {
    if (m < 1 || m > 12) return false;

    int daysInMonth[] = {
        31, (isLeapYear(y) ? 29 : 28), 31, 30, 31, 30,
        31, 31, 30, 31, 30, 31
    };

    return d >= 1 && d <= daysInMonth[m - 1];
}

void Date::printGregorian() const {
    cout << "Gregorian Date: " << year << "/" << month << "/" << day << endl;
}

void Date::printMinguo() const {
    int minguoYear = year - 1911;
    cout << "Minguo Date: Year " << minguoYear << ", Month " << month << ", Day " << day << endl;
}
