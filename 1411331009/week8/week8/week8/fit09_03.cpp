// Fig. 9.3: fig09_03.cpp
// Program to test class Date.
// NOTE: This file must be compiled with Date.cpp.
#include <iostream>
#include <stdexcept> // for invalid_argument exception class
#include "DATE.h" // include definitionof class Date from Date.h
using namespace std;

int main()
{
    Date t; // instantiate object t of class Date

    // output Date object t's initial values
    cout << "The initial universal Date is ";
    t.printUniversal(); // 00:00:00
    cout << "\nThe initial standard Date is ";
    t.printStandard(); // 12:00:00 AM

    t.setDate(1990, 01, 01); // change Date

    // output Date object t's new values
    cout << "\n\nUniversal Date after setDate is ";
    t.printUniversal(); // 13:27:06
    cout << "\nStandard Date after setDate is ";
    t.printStandard(); // 1:27:06 PM

    // attempt to set the Date with invalid values
    try
    {
        t.setDate(2017, 3, 32); // all values out of range
    } // end try
    catch (invalid_argument& e)
    {
        cout << "\n\nException: " << e.what() << endl;
    } // end catch

    // output t's values after specifying invalid values
    cout << "\nAfter attempting invalid settings:"
        << "\nad Date: ";
    t.printUniversal(); // 13:27:06
    cout << "\nrc Date: ";
    t.printStandard(); // 1:27:06 PM
    cout << endl;
} // end main