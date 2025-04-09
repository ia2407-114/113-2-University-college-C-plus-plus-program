#pragma once
#include <iostream>
#include <iomanip>
#include "Date.h"

class GregorianDate : public Date
{
public:
    GregorianDate(int year = 1990, int month = 1, int day = 1);  // Constructor with default values
    void setDate(int year, int month, int day) override;  // Implement setting the date
    void printGregorian() const override;  // Print Gregorian date
    void printRepublic() const override;   // Print Republic of China date

private:
    int year;
    int month;
    int day;

    bool isValidDate(int year, int month, int day) const;  // Check if the date is valid
    bool isLeapYear(int year) const;  // Check if the year is a leap year
};

