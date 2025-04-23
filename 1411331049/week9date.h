// Date.h
// 程式碼序號: 22196312

#ifndef DATE_H
#define DATE_H

class Date
{
public:
    explicit Date(int = 0, int = 0, int = 0); // default constructor
    ~Date(); // destructor

    // seat functions
    void setDate(int, int, int);
    void setYear(int);
    void setMonth(int);
    void setDay(int);

    // get functions
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
#pragma once
