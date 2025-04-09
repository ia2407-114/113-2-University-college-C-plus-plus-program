// Fig. 9.1: Time.h
// Time class definition.
// Member functions are defined in Time.cpp

// prevent multiple inclusions of header
#ifndef TIME_H
#define TIME_H

// Time class definition
class Time
{
public:
	Time(); // constructor
	void setTime(int, int, int); // set hour, minute and second
	void printUniversal() const; // print time in universal-time format
	void printStandard() const; // print time in standard-time format
private:
	unsigned int hour; // 0 - 23 (24-hour clock format)
	unsigned int minute; // 0 - 59
	unsigned int second; // 0 - 59
}; // end class Time

#endif#pragma once
