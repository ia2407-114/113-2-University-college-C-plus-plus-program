// 程式碼序號: 22196310
#include <iostream>
#include <stdexcept>
#include "Date.h"
 // 請在此引入必要的使用者標頭檔
using namespace std;

int main()
{
    int year, month, day;

    cout << "請輸入西元年:";
    cin >> year;
    cout << "\n請輸入月份:";
    cin >> month;
    cout << "\n請輸入日期:";
    cin >> day;

    try {
        Date date(year, month, day);

        cout << "西元日期:";
        date.printUniversal();
        cout << endl;

        cout << "民國日期:";
        date.printStandard();
        cout << endl;
    }

    catch (invalid_argument& e)
    {
        cout << "\n\nException" << e.what() << endl;

    }
} // end main//6310