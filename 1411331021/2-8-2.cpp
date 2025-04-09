// Fig. 9.6: fig09_06.cpp 
// Constructor with default arguments.
#include <iostream>
#include <stdexcept>
#include "date.h" // include definition of class Time from Time.h
using namespace std;

int main()
{
    int year, month, day;

    cout << "請輸入年份 (1990 - 2000)：";
    cin >> year;

    cout << "請輸入月份 (1 - 12)：";
    cin >> month;

    cout << "請輸入日期 ：";
    cin >> day;

    try {
        DATE d(year, month, day); // 使用輸入的值建立 DATE 物件

        cout << "\n你輸入的日期（數字格式）為：";
        d.printUniversal(); // 顯示 1990/01/01 格式
        cout << "\n你輸入的日期（民國格式）為：";
        d.printStandard(); // 顯示 民國79年1月1日

    }
    catch (invalid_argument& e) {
        cerr << "\n發生錯誤：" << e.what() << endl;
    }

    return 0;
}
 // end main
