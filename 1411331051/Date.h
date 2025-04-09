#pragma once
#include <stdexcept> // for invalid_argument exception class

class Date
{
public:
    virtual void setDate(int year, int month, int day) = 0;  // Abstract method for setting the date
    virtual void printGregorian() const = 0;  // Abstract method to print Gregorian date
    virtual void printRepublic() const = 0;   // Abstract method to print Republic of China (ROC) date

    virtual ~Date() {}  // Virtual destructor
};


