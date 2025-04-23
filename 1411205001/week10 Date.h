#pragma once
// Time.h
// 程式碼序號: 22196312
// Member functions defined in Time.cpp.

// prevent multiple inclusions of header 
#ifndef DATE_H
#define DATE_H

// Time class definition
class Date
{
public:
	explicit Date(int = 0, int = 0, int = 0); // default constructor
	~Date(); //結構子宣告

	// set functions
	void setDate(int, int, int); // set hour, minute, second
	void setYear(int); // set hour (after validation)
	void setMonth(int); // set minute (after validation)
	void setDay(int); // set second (after validation)

	// get functions
	// 請對照Time.cpp程式碼，於此處加入缺少的成員函數名稱
	unsigned int getYear() const; // return hour
	unsigned int getMonth() const; // return minute
	unsigned int getDay() const; // return second

	void printUniversal() const; // output time in universal-time format
	void printStandard() const; // output time in standard-time format
private:
	unsigned int year; // 0 - 23 (24-hour clock format)
	unsigned int month; // 0 - 59
	unsigned int day; // 0 - 59
}; // end class Time

#endif //6312
