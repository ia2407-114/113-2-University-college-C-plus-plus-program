#include <iostream>
#include <string>
using namespace std;

int main() {
    string phoneNumber;

    // 輸入手機號碼
    cout << "請輸入手機號碼 (不含分隔符): ";
    cin >> phoneNumber;

    // 檢查輸入的手機號碼是否為 10 位數
    if (phoneNumber.length() == 10) {
        // 輸出格式化後的手機號碼
        cout << phoneNumber.substr(0, 4) << "-"    // 取得前四位並加上 -
            << phoneNumber.substr(4, 3) << "-"    // 取得中間三位並加上 -
            << phoneNumber.substr(7, 3) << endl;  // 取得最後三位並輸出
    }
    else {
        cout << "輸入的手機號碼格式不正確，請確保是 10 位數字。" << endl;
    }

    return 0;
}
