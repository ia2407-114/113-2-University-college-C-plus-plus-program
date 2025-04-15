// Fig. 9.4: Time.h
// Time class containing a constructor with default arguments.
// Member functions defined in Time.cpp.

// prevent multiple inclusions of header 
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

	void printAD() const; // output time in universal-time format
	void printROC_Year() const; // output time in standard-time format
private:
	unsigned int year; // 1990 - 2050 (24-hour clock format)
	unsigned int month; // 1 - 12
	unsigned int day; // 1 - 31
}; // end class Date

#endif#pragma once
