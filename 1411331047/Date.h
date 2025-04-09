// Fig. 9.1: Date.h
// Date class definition.
// Member functions are defined in Date.cpp

// prevent multiple inclusions of header
#ifndef Date_H
#define Date_H

// Date class definition
class Date
{
public:
	Date(); // constructor
	void setDate(int, int, int); // set year, month and day
	void printUniversal() const; // print Date in universal-Date format
	void printStandard() const; // print Date in standard-Date format
private:
	unsigned int year; // 0 - 23 (24-year clock format)
	unsigned int month; // 0 - 59
	unsigned int day; // 0 - 59
}; // end class Date

#endif