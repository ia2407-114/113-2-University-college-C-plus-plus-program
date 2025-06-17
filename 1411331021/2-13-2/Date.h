#pragma once
#ifndef DATE_H
#define DATE_H

class Date {
public:
    static const unsigned int monthsPerYear = 12; // months in a year
    explicit Date(int = 1, int = 1, int = 1900); // default constructor
    void print() const; // print date in year/month/day format
    ~Date(); // provided to confirm destruction order
    bool isLeapYear() const; // §PÂ_¶|¦~
    unsigned int getYear() const { return year; }
    unsigned int getMonth() const { return month; }
    unsigned int getDay() const { return day; }
private:
    unsigned int month; // 1-12 (January-December)
    unsigned int day; // 1-31 based on month
    unsigned int year; // any year

    unsigned int checkDay(int) const; // utility function to check if day is proper for month and year
};

#endif
