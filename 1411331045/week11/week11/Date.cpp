// Fig. 9.18: Date.cpp
// Date class member-function definitions.
#include "Date.h"
#include <stdexcept>
#include <iomanip>
using namespace std;

Date::Date(int y, int m, int d) {
    setYear(y);
    setMonth(m);
    setDay(d);
}

Date::~Date() {
    cout << "日期: " << year << "/" << month << "/" << day << endl;
}

void Date::setYear(int y) {
    if (y >= 1900 && y <= 2100) year = y;
    else throw invalid_argument("Invalid year!");
}

void Date::setMonth(int m) {
    if (m >= 1 && m <= 12) month = m;
    else throw invalid_argument("Invalid month!");
}

void Date::setDay(int d) {
    if (d >= 1 && d <= 31) day = d;  // 簡化處理，實際應該檢查每個月的天數
    else throw invalid_argument("Invalid day!");
}

void Date::printDate() const {
    cout << setw(4) << setfill('0') << year << "/"
        << setw(2) << setfill('0') << month << "/"
        << setw(2) << setfill('0') << day;
}

bool Date::isValidDate() const {
    // 可以根據實際需求擴展日期檢查，這裡簡化為檢查年份範圍
    return (year >= 1900 && year <= 2100);
}

int Date::calculateAge() const {
    // 假設當前日期是 2025年4月30日
    int currentYear = 2025;
    int currentMonth = 4;
    int currentDay = 30;

    int age = currentYear - year;
    if (currentMonth < month || (currentMonth == month && currentDay < day)) {
        age--;
    }
    return age;
}