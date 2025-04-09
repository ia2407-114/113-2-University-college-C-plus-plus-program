// Fig. 9.3: fig09_03.cpp
// Program to test class Time.
// NOTE: This file must be compiled with Time.cpp.
#include <iostream>
#include <stdexcept> // for invalid_argument exception class
#include "Time.h" // include definitionof class Time from Time.h
using namespace std;

int main()
{
    Date d; // instantiate object t of class Time

    // output Time object t's initial values
    cout << "The initial universal date is ";
    d.printUniversal(); // 00:00:00
    cout << "\nThe initial standard date is ";
    d.printStandard(); // 12:00:00 AM

    d.setDate(1990, 1, 1); // change time

    // output Time object t's new values
    cout << "\n\nAD time after setDate is ";
    d.printUniversal(); // 13:27:06
    cout << "\nRC time after setDate is ";
    d.printStandard(); // 1:27:06 PM

    // attempt to set the time with invalid values
    try
    {
        d.setDate(9999, 99, 99); // all values out of range
    } // end try
    catch (invalid_argument& e)
    {
        cout << "\n\nException: " << e.what() << endl;
    } // end catch

    // output t's values after specifying invalid values
    cout << "\nAfter attempting invalid settings:"
        << "\nAD date: ";
    d.printUniversal(); // 13:27:06
    cout << "\nRC date: ";
    d.printStandard(); // 1:27:06 PM
    cout << endl;
} // end main