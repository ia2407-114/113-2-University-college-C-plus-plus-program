
#ifndef DATE2_H
#define DATE2_H

class Date
{
public:
	static const unsigned int monthsPerYear = 12;
	explicit Date(int = 1, int = 1, int = 2005);
	void print() const;
	unsigned int getyear() const;
	unsigned int getday() const;
	unsigned int getmonth() const;
	~Date();
private:
	unsigned int month;
	unsigned int day;
	unsigned int year;

	unsigned int checkDay(int) const;
};

#endif
