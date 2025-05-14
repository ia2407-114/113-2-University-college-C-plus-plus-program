#ifndef DATE_H
#define DATE_H

class Date
{
public:
	static const unsigned int monthsPerYear = 12; // months in a year
	explicit Date(int = 1, int = 1, int = 1900);
	void print() const;
	~Date();

	// �s�W�G���o�~���
	unsigned int getYear() const;
	unsigned int getMonth() const;
	unsigned int getDay() const;

private:
	unsigned int month;
	unsigned int day;
	unsigned int year;

	unsigned int checkDay(int) const;
};

#endif
