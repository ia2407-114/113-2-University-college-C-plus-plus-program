// Fig. 9.11: Time.cpp
// Time class member-function definitions.
#include <stdexcept>
#include "Time.h" // include definition of class Time
using namespace std;

// constructor function to initialize private data; calls member function
// setTime to set variables; default values are 0 (see class definition)
Time::Time(int hr, int min, int sec)
{
    setTime(hr, min, sec);
} // end Time constructor

// set values of hour, minute and second
void Time::setTime(int h, int m, int s)
{
    // validate hour, minute and second
    if ((h >= 0 && h < 24) && (m >= 0 && m < 60) &&
        (s >= 0 && s < 60))
    {
        hour = h;
        minute = m;
        second = s;
    } // end if
    else
        throw invalid_argument(
            "hour, minute and/or second was out of range");
} // end function setTime

// return hour value
unsigned int Time::getHour() const
{
    return hour;
} // end function getHour

// poor practice: returning a reference to a private data member.
unsigned int& Time::badSetHour(int hh)
{
    if (hh >= 0 && hh < 24)
        hour = hh;
    else
        throw invalid_argument("hour must be 0-23");

    return hour; // dangerous reference return
} // end function badSetHour
