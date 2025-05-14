#ifndef DATE_H
#define DATE_H

class Date
{
public:
	static const unsigned int monthsPerYear = 12; // months in a year
	explicit Date(int = 1, int = 1, int = 1900); // default constructor
	void print() const;  // print date in month/day/year format
	~Date();

	unsigned int getYear() const;   // 取得年份
	unsigned int getMonth() const;  // 取得月份
	unsigned int getDay() const;    // 取得日子

private:
	unsigned int month;
	unsigned int day;
	unsigned int year;

	unsigned int checkDay(int) const;
};

#endif