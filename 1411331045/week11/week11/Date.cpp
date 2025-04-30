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
    cout << "���: " << year << "/" << month << "/" << day << endl;
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
    if (d >= 1 && d <= 31) day = d;  // ²�ƳB�z�A��������ˬd�C�Ӥ몺�Ѽ�
    else throw invalid_argument("Invalid day!");
}

void Date::printDate() const {
    cout << setw(4) << setfill('0') << year << "/"
        << setw(2) << setfill('0') << month << "/"
        << setw(2) << setfill('0') << day;
}

bool Date::isValidDate() const {
    // �i�H�ھڹ�ڻݨD�X�i����ˬd�A�o��²�Ƭ��ˬd�~���d��
    return (year >= 1900 && year <= 2100);
}

int Date::calculateAge() const {
    // ���]��e����O 2025�~4��30��
    int currentYear = 2025;
    int currentMonth = 4;
    int currentDay = 30;

    int age = currentYear - year;
    if (currentMonth < month || (currentMonth == month && currentDay < day)) {
        age--;
    }
    return age;
}