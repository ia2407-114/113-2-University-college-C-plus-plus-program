#pragma once
// Fig. 9.1: Time.h
// Time class definition.
// Member functions are defined in Time.cpp

// prevent multiple inclusions of header
#ifndef DATE_H
#define DATE_H

// Time class definition
class Date
{
public:
	Date(); // constructor
	void setDate(int, int, int); // set hour, minute and second
	void printUniversal() const; // print time in universal-time format
private:
	unsigned int year; // 0 - 23 (24-hour clock format)
	unsigned int month; // 0 - 59
	unsigned int day; // 0 - 59
}; // end class Time

#endif

