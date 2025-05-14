#ifndef DATE_H
#define DATE_H

class Date
{
public:
    static const unsigned int monthsPerYear = 12; // months in a year
    explicit Date(int = 1, int = 1, int = 1900); // default constructor
    void print() const; // print date in month/day/year format
    ~Date(); // provided to confirm destruction order

    // �s�W�� getter ���
    unsigned int getYear() const { return year; }
    unsigned int getMonth() const { return month; }
    unsigned int getDay() const { return day; }

    // �s�W�� setter ��ơA�Ω��r�����I�s
    Date& setMonth(unsigned int m);
    Date& setDay(unsigned int d);
    Date& setYear(unsigned int y);

private:
    unsigned int month; // 1-12 (January-December)
    unsigned int day; // 1-31 based on month
    unsigned int year; // any year

    // utility function to check if day is proper for month and year
    unsigned int checkDay(int) const;
}; // end class Date

#endif
