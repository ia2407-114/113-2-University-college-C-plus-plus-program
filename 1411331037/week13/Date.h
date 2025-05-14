#ifndef DATE_H
#define DATE_H

class Date
{
public:
	static const unsigned int monthsPerYear = 12;
	explicit Date(int = 1, int = 1, int = 2005);
	
	Date& setDate(int, int, int);
	Date& setYear(int);
	Date& setMonth(int);
	Date& setDay(int);
	
	unsigned int getyear() const;
	unsigned int getday() const;
	unsigned int getmonth() const;

	void print() const;
	~Date();
private:
	unsigned int month;
	unsigned int day;
	unsigned int year;

	unsigned int checkDay(int) const;
};

#endif