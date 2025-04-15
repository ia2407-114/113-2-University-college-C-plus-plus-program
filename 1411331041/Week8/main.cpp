// Fig. 9.3: fig09_03.cpp
// Program to test class Time.
// NOTE: This file must be compiled with Time.cpp.
#include <iostream>
#include <stdexcept> // for invalid_argument exception class
#include "Date.h" // include definitionof class Time from Time.h
using namespace std;

int main()
{
    Date t; // instantiate object t of class Time
    int year;
    int month;
    int day;
    cout << "�w�]��������G";
    t.printUniversal();
    cout << "\n��J�~�G";
    cin >> year;
    cout << "\n��J��G";
    cin >> month;
    cout << "\n��J��G";
    cin >> day;
    try
    {
        t.setDate(year, month, day); // 00:00:00
    } // end try
    catch (invalid_argument& e)
    {
        cerr << "\n\n�W�X�i�]�w���d�� " << e.what() << endl;
    } // end catch

    // output t's values after specifying invalid values
    cout << "\n�g�L���᪺����G ";
    t.printUniversal(); // 13:27:06
}