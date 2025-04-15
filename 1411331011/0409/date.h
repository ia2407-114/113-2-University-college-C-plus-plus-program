#ifndef DATE_H
#define DATE_H

// Time class definition
class Date
{
public:
explicit Date(int = 1990, int = 1, int = 1); // default constructor

// set functions
void setDate(int, int, int); // set hour, minute, second
void setYear(int); // set hour (after validation)
void setMonth(int); // set minute (after validation)
void setDay(int); // set second (after validation)

// get functions
unsigned int getYear() const; // return hour
unsigned int getMonth() const; // return minute
unsigned int getDay() const; // return second

void printUniversal() const; // output time in universal-time format
void printStandard() const; // output time in standard-time format
std::string isValidDate(int y, int m, int d) const;
private:
unsigned int year; // 1990-2050 (24-hour clock format)
unsigned int month; // 1 - 12
unsigned int day; // 1 - 31
}; // end class Time

#endif
