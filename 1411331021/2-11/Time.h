#pragma once
#ifndef Time_h
#define Time_h
class Time
{
public:
	explicit Time(int = 0, int = 0, int = 0);
	void setTime(int, int, int);
	unsigned int getHour() const;
	unsigned int& badSetHour(int); // dangerous reference return
private:
	unsigned int hour;
	unsigned int minute;
	unsigned int second;
}; // end class Time
#endif
