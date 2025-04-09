// Fig. 9.3: fig09_03.cpp
// Program to test class Time.
// NOTE: This file must be compiled with Time.cpp.
#include <iostream>
#include <stdexcept> // for invalid_argument exception class
#include "Date.h" // include definitionof class Time from Time.h
using namespace std;

int main()
{
    Date t(1990,1,1); // instantiate object t of class Time

    // output Time object t's initial values
    cout << "�w�]�褸�~�G";
    t.printUniversal(); // 00:00:00
    cout << "\n�w�]�������G";
    t.printStandard(); // 12:00:00 AM

    int s1, s2, s3;
    cout << "�п�J�褸�~�G" << endl;
    cin >> s1;
    cout << "�п�J����G" << endl;
    cin >> s2;
    cout << "�п�J����G" << endl;
    cin >> s3;
    t.setDate(s1,s2,s3); // change time

    // output Time object t's new values
    cout << "\n\n�ק��褸������G";
    t.printUniversal(); // 13:27:06
    cout << "\n�ק����������G";
    t.printStandard(); // 1:27:06 PM

    // attempt to set the time with invalid values
    try
    {
        t.setTime(2017,3,32); // all values out of range
    } // end try
    catch (invalid_argument& e)
    {
        cout << "\n\nException: " << e.what() << endl;
    } // end catch

    // output t's values after specifying invalid values
    cout << "\nAfter attempting invalid settings:"
        << "\nUniversal time: ";
    t.printUniversal(); // 13:27:06
    cout << "\nStandard time: ";
    t.printStandard(); // 1:27:06 PM
    cout << endl;
} // end main