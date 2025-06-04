// Date.h
#pragma once
#ifndef DATE_H
#define DATE_H

class Date {
public:
    static const unsigned int monthsPerYear = 12; // months in a year
    explicit Date(int month = 1, int day = 1, int year = 1900);
    int getMonth() const;
    int getDay() const;
    int getYear() const;
    void printStandard() const; // e.g., YYYY/MM/DD
    void printUniversal() const; // e.g., MM/DD/YYYY
    bool isValid() const;
    bool isBefore(const Date& other) const;

private:
    int month;
    int day;
    int year;

    unsigned int checkDay(int) const;
};

#endif // DATE_H
