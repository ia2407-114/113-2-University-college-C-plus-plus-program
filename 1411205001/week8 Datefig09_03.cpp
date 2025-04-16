// Fig. 9.3: fig09_03.cpp
// Program to test class Date with user input.
#include <iostream>
#include <stdexcept> // for invalid_argument exception class
#include "Date.h"    // include definition of class Date
using namespace std;

int main()
{
    Date d; // 預設 1990/1/1）

    int year, month, day;

    // 顯示初始日期
    cout << "The initial Gregorian date is ";
    d.printGregorian(); // 初始日期1990/01/01
    cout << "The initial ROC date is ";
    d.printROC();       // 民國79年1月1日

    // 讓使用者輸入日期
    cout << "\n請輸入年份(1990-2050)：";
    cin >> year;

    cout << "\n請輸入月份(1-12)：";
    cin >> month;

    cout << "\n請輸入日期(1-31)：";
    cin >> day;


    // 嘗試設定日期
    try
    {
        d.setDate(year, month, day);
    }
    catch (invalid_argument& e)
    {
        cout << "\nException: " << e.what() << endl;
        return 1; // 輸入錯誤就直接結束程式
    }

    // 顯示目前日期
    cout << "\n目前日期為：\n";
    cout << "Gregorian date: ";
    d.printGregorian();
    cout << "ROC date: ";
    d.printROC();
    cout << endl;

    return 0;
}
