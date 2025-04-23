// Fig. 9.3: fig09_03.cpp
// Program to test class Time.
// NOTE: This file must be compiled with Time.cpp.
#include <iostream>
#include <stdexcept> // for invalid_argument exception class
#include "Date.h" // include definitionof class Time from Time.h
using namespace std;

int main()
{
    int year, month, day; // instantiate object t of class Time

    // output Time object t's initial values
    cout << "�п�J�褸�~:";
    cin >> year; // 00:00:00
    cout << "\n�п�J���:";
    cin >> month; // 12:00:00 AM
    cout << "\n�п�J���:";
    cin >> day;

    try
    {
        Date date(year, month, day);

        cout << "�褸���: ";
        date.printUniversal();
        cout << endl;

        cout << "������: ";
        date.printStandard();
        cout << endl;

    } // end try
    catch (invalid_argument& e)
    {
        cout << "\n\nException " << e.what() << endl;
    } // end catch

    // output t's values after specifying invalid values
    //cout << "\nAfter attempting invalid settings:"
        //<< "\nUniversal time: ";
    //d.printUniversal(); // 13:27:06
    //cout << "\nStandard time: ";
    //d.printStandard(); // 1:27:06 PM
    //cout << endl;
} // end main