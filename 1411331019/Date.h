#ifndef DATE_H
#define DATE_H

class Date
{
public:
	static const unsigned int monthsPerYear = 12; // months in a year
	explicit Date(int = 1, int = 1, int = 1900); // default constructor
	Date& setMonth(int mn); // setter for month
	Date& setDay(int dy);   // setter for day
	Date& setYear(int yr);  // setter for year
	void print() const; // print date in month/day/year format
	~Date(); // destructor to confirm destruction order

private:
	unsigned int month; // 1-12 (January-December)
	unsigned int day;   // 1-31 based on month
	unsigned int year;  // any year

	// utility function to check if day is proper for month and year
	unsigned int checkDay(int testDay) const;
}; // end class Date

#endif // DATE_H
#pragma once
