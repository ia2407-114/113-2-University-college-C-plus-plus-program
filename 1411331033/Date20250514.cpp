#include <array>
#include <iostream>
#include <stdexcept>
#include "Date20250514.h"
using namespace std;

Date::Date(int mn, int dy, int yr)
{
    setTime(mn, dy, yr);
}

Date &Date::setTime(int m, int d, int y)
{
    setMonth(m);
    setDay(d);
    setYear(y);
    
    return *this;
}

Date &Date::setMonth(int m)
{
    if (m > 0 && m <= monthsPerYear)
        month = m;
    else
        throw invalid_argument("month must be 1-12");

    return *this;
}

Date& Date::setDay(int d)
{
    day = checkDay(d);
    return *this;
    
}

Date& Date::setYear(int y)
{
    if (y > 2004 && y <= 2025)
        year = y;
    else
        throw invalid_argument("�����~���ݦb0~20���H��(2005~2025)");

    return *this;
}

void Date::print() const
{
    cout << month << '/' << day << '/' << year;
}

unsigned int Date::getyear() const
{
    return  year;
}
unsigned int Date::getday() const
{
    return day;
}
unsigned int Date::getmonth() const
{
    return month;
}

Date::~Date()
{
    cout << "�������ƪ���R�c��� ";
    print();
    cout << endl;
}

unsigned int Date::checkDay(int testDay) const
{
    static const array< int, monthsPerYear + 1 > daysPerMonth =
    { 0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 }; //���~���C�Ӥ몺����Ѽ�


    if (testDay > 0 && testDay <= daysPerMonth[month]) // �ˬd���O�_���o�Ӥ�(�w�]�����~)
        return testDay;

    if (month == 2 && testDay == 29 && (year % 400 == 0 ||
        (year % 4 == 0 && year % 100 != 0))) //�ˬd����O�_��2��M�O�_��29��A�ˬd�O�_���|�~ 
        return testDay;

    throw invalid_argument("Invalid day for current month and year");
}