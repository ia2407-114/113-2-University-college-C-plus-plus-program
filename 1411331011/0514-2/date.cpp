#include <array>
#include <iostream>
#include <stdexcept>
#include "Date.h"
using namespace std;

Date::Date(int mn, int dy, int yr) {
    if (mn > 0 && mn <= monthsPerYear) { // 驗證月份
        month = mn;
    }
    else {
        throw invalid_argument("month must be 1-12");
    }

    year = yr;
    day = checkDay(dy); // 驗證日期是否合法
    cout << "Date object constructor: ";
    print();  // 顯示建立的日期
    cout << endl;
}

void Date::setDate(int mn, int dy, int yr) {
    this->month = mn;
    this->year = yr;
    this->day = checkDay(dy);
}

void Date::print() const {
    cout << month << "/" << day << "/" << year;
}

Date::~Date() {
    cout << "Date object destructor: ";
    print();  // 顯示銷毀的日期
    cout << endl;
}

unsigned int Date::checkDay(int testDay) const {
    static const array<int, monthsPerYear + 1> daysPerMonth = { 0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };

    if (testDay > 0 && testDay <= daysPerMonth[month]) {
        return testDay;
    }

    // 處理閏年
    if (month == 2 && testDay == 29 && (year % 400 == 0 || (year % 4 == 0 && year % 100 != 0))) {
        return testDay;
    }

    throw invalid_argument("Invalid day for current month and year");
}
