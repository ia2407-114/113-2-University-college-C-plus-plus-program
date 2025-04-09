#include <iostream>
#include <iomanip>
#include <stdexcept> 
#include "Date.h" 

using namespace std;


Date::Date()
    : year(1990), month(1), day(1)
{} 

// set new Time value using universal time
void Date::setDate(int h, int m, int s)
{
    
    if (h >= 1990 && (m >= 1 && m <= 12) &&
        (s >= 1 && s <= 31))
    {
        year = h;
        month = m;
        day = s;
    } 
    else
        throw invalid_argument("年月日數值超出範圍");
} 


void Date::printUniversal() const
{
    cout << setfill('0') << setw(4) << year << "/"
        << setw(2) << month << "/" << setw(2) << day;
} 
