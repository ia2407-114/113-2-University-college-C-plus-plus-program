// Fig. 9.17: Date.h 
// Date class definition; Member functions defined in Date.cpp
#ifndef DATE_H
#define DATE_H

#include <iostream>
using namespace std;

class Date {
public:
    Date(int year, int month, int day);  // 建構子
    ~Date();  // 解構子

    void printDate() const;  // 輸出日期
    bool isValidDate() const;  // 日期檢查
    int calculateAge() const;  // 計算年齡，不需要引數

private:
    int year, month, day;

    void setYear(int y);
    void setMonth(int m);
    void setDay(int d);
};
#endif // DATE_H