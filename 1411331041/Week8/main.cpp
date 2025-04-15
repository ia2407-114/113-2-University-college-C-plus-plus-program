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
    cout << "預設的日期為：";
    t.printUniversal();
    cout << "\n輸入年：";
    cin >> year;
    cout << "\n輸入月：";
    cin >> month;
    cout << "\n輸入日：";
    cin >> day;
    try
    {
        t.setDate(year, month, day); // 00:00:00
    } // end try
    catch (invalid_argument& e)
    {
        cerr << "\n\n超出可設定的範圍 " << e.what() << endl;
    } // end catch

    // output t's values after specifying invalid values
    cout << "\n經過更改後的日期： ";
    t.printUniversal(); // 13:27:06
}