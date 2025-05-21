// Fig. 10.1: fig10_01.cpp
// Standard Library string class test program.
#include <iostream>
#include <string>
using namespace std;

int main()
{
    string phone;
    cout << "請輸入手機號碼:";
    cin >> phone;

    //驗證手機號碼長度是否為10碼
    if (phone.length() != 10) {
        cerr << "手機號碼必須為10碼!" << endl;
        return 1;
    }

    //驗證手機號碼開頭是否為09
    if (phone.substr(0, 2) != "09") {
        cerr << "手機號碼開頭須為09!" << endl;
        return 1;
    }

    string formatted =
        phone.substr(0, 4) + "-" +  // 0912
        phone.substr(4, 3) + "-" +  // 345
        phone.substr(7, 3);         // 678

    cout << "格式化後的手機號碼： " << formatted << endl;
    return 0;
}
