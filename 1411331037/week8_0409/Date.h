#include <iostream>
#include <stdexcept>
class Date
{
public:
	Date(); // constructor
	void setDate(int, int, int); //
	void printUniversal() const; 
private:
	unsigned int year; // 0000
	unsigned int month; // 1 - 12
	unsigned int day; // 1 - 31
}; // end class Time