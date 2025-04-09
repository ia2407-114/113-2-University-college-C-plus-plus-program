// Fig. 9.3: fig09_03.cpp
// Program to test class Time.
// NOTE: This file must be compiled with Time.cpp.
#include <iostream>
#include <stdexcept> // for invalid_argument exception class
#include "Date.h" // include definitionof class Time from Time.h
using namespace std;

int main()
{
    Date t(1990, 1, 1); // instantiate object t of class Time

    // output Time object t's initial values
    cout << "預設西元年：";
    t.printUniversal(); // 00:00:00
    cout << "\n預設民國日期：";
    t.printStandard(); // 12:00:00 AM

    int s1, s2, s3;
    cout << "\n\n請輸入西元年：";
    cin >> s1;
    cout << "請輸入月份：" ;
    cin >> s2;
    cout << "請輸入日期：";
    cin >> s3;
    t.setDate(s1, s2, s3); // change time

    // output Time object t's new values
    cout << "\n修改後西元日期為：";
    t.printUniversal(); // 13:27:06
    cout << "\n修改後民國日期為：";
    t.printStandard(); // 1:27:06 PM

    // attempt to set the time with invalid values
    try
    {
        cout << "\n\n測試2017/3/32" << endl;
        t.setDate(2017, 3, 32); // all values out of range
    } // end try
    catch (invalid_argument& e)
    {
        cout << "\n錯誤: " << e.what() << endl;
    } // end catch

    // output t's values after specifying invalid values
    cout << "\n嘗試非合理日期後："
        << "\n西元日期：";
    t.printUniversal(); // 13:27:06
    cout << "\n民國日期：";
    t.printStandard(); // 1:27:06 PM
    cout << endl;
} // end main