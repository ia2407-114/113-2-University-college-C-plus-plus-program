// Fig. 9.6: fig09_06.cpp 
// Constructor with default arguments.
#include <iostream>
#include <stdexcept>
#include "date.h" // include definition of class Time from Time.h
using namespace std;

int main()
{
    int year, month, day;

    // 提示使用者輸入西元日期
    cout << "Enter the Gregorian year: ";
    cin >> year;
    cout << "Enter the Gregorian month: ";
    cin >> month;
    cout << "Enter the Gregorian day: ";
    cin >> day;

    try {
        // 建立 Date 物件，並檢查是否為有效的日期
        Date d(year, month, day);

        // 印出西元和民國日期
        d.printUniversal();
        d.printStandard();
    }
    catch (const invalid_argument& e) {
        cerr << "Error: " << e.what() << endl;
    }

    return 0;
} // end main
