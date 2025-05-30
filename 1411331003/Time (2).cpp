#pragma once
// Fig. 9.2: Time.cpp
// Time class member-function definitions.
#include <iostream>
#include <iomanip>
#include <stdexcept> // for illegal_argument exception class
#include "Time.h" // include definition of class Time from Time.h

using namespace std;

// Time constructor initializes each data member to zero.
Time::Time()
    : hour(0), minute(0), second(0)
{
} // end Time constructor

// set new Time value using universal time
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

// print Time in universal-time format (HH:MM:SS)
void Time::printUniversal() const
{
    cout << setfill('0') << setw(2) << hour << ":"
        << setw(2) << minute << ":" << setw(2) << second;
} // end function printUniversal

// print Time in standard-time format (HH:MM:SS AM or PM)
void Time::printStandard() const
{
    cout << ((hour == 0 || hour == 12) ? 12 : hour % 12) << ":"
        << setfill('0') << setw(2) << minute << ":" << setw(2)
        << second << (hour < 12 ? " AM" : " PM");
} // end function printStandard