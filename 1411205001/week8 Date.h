// Fig. 9.4: Date.h
// Date class containing a constructor with default arguments.
// Member functions defined in Date.cpp.

// prevent multiple inclusions of header 
#ifndef DATE_H
#define DATE_H

// Date class definition
class Date
{
public:
	explicit Date(int = 0, int = 0, int = 0); // default constructor

	// set functions
	void setDate(int, int, int); // set hour, minute, second
	void setYear(int); // set hour (after validation)
	void setMonth(int); // set minute (after validation)
	void setDay(int); // set second (after validation)

	// get functions
	unsigned int getYear() const; // return hour
	unsigned int getMonth() const; // return minute
	unsigned int getDay() const; // return second

	void printGregorian() const; // output time in universal-time format
	void printROC() const; // output time in standard-time format
private:
	unsigned int year; // 0 - 23 (24-hour clock format)
	unsigned int month; // 0 - 59
	unsigned int day; // 0 - 59

	bool isLeapYear(int) const;
}; // end class Time

#endif
