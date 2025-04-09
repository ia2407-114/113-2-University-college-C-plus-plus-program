// Fig. 9.4: Time.h
// Time class containing a constructor with default arguments.
// Member functions defined in Time.cpp.

// prevent multiple inclusions of header 
#ifndef TIME_H
#define TIME_H

// Time class definition
class Time
{
public:
	explicit Time(int = 1990, int = 1, int = 1); // default constructor

	// set functions
	void setTime(int, int, int); // set hour, minute, second
	void setWestern_year(int); // set hour (after validation)
	void setmonth(int); // set minute (after validation)
	void setday(int); // set second (after validation)

	// get functions
	unsigned int getWestern_year() const; // return hour
	unsigned int getmonth() const; // return minute
	unsigned int getday() const; // return second

	void printUniversal() const; // output time in universal-time format
	void printStandard() const; // output time in standard-time format
private:
	unsigned int Western_year; // 0 - 23 (24-hour clock format)
	unsigned int month; // 0 - 59
	unsigned int day; // 0 - 59
}; // end class Time

#endif