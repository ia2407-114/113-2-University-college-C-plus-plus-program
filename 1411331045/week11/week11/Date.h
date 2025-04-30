// Fig. 9.17: Date.h 
// Date class definition; Member functions defined in Date.cpp
#ifndef DATE_H
#define DATE_H

#include <iostream>
using namespace std;

class Date {
public:
    Date(int year, int month, int day);  // �غc�l
    ~Date();  // �Ѻc�l

    void printDate() const;  // ��X���
    bool isValidDate() const;  // ����ˬd
    int calculateAge() const;  // �p��~�֡A���ݭn�޼�

private:
    int year, month, day;

    void setYear(int y);
    void setMonth(int m);
    void setDay(int d);
};
#endif // DATE_H