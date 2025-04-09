
#include <iostream>
#include <stdexcept>
#include "week8 Date.h"
using namespace std;

DateImpl::DateImpl(int y, int m, int d) {
    setDate(y, m, d);
}

void DateImpl::setDate(int y, int m, int d) {
    if (!isValidDate(y, m, d)) {
        throw invalid_argument("Invalid date!");
    }
    year = y;
    month = m;
    day = d;
}

int DateImpl::getYear() const {
    return year;
}

int DateImpl::getMonth() const {
    return month;
}

int DateImpl::getDay() const {
    return day;
}

void DateImpl::printGregorian() const {
    cout << "Gregorian Date: " << year << "/" << month << "/" << day << endl;
}

void DateImpl::printROC() const {
    cout << "ROC Date: 民國" << (year - 1911) << "年" << month << "月" << day << "日" << endl;
}

bool DateImpl::isLeapYear(int y) const {
    return (y % 4 == 0 && y % 100 != 0) || (y % 400 == 0);
}

bool DateImpl::isValidDate(int y, int m, int d) const {
    if (y < 1 || m < 1 || m > 12 || d < 1)
        return false;

    int daysInMonth[] = { 31, 28, 31, 30, 31, 30,
                          31, 31, 30, 31, 30, 31 };

    if (isLeapYear(y)) daysInMonth[1] = 29;

    return d <= daysInMonth[m - 1];
}