#pragma once
// Time.h
// 程式碼序號: 22196312
// Member functions defined in Time.cpp.

// prevent multiple inclusions of header 
#ifndef DATE_H
#define DATE_H

class Date {
public:
    Date(int, int, int);   // 建構子
    ~Date();               // 解構子

    void setDate(int, int, int);
    void setYear(int);
    void setMonth(int);
    void setDay(int);

    unsigned int getYear() const;
    unsigned int getMonth() const;
    unsigned int getDay() const;

    void printUniversal() const;
    void printStandard() const;

private:
    unsigned int year;
    unsigned int month;
    unsigned int day;
};

#endif
