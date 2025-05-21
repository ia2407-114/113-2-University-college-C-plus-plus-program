#include <iostream>
#include <string>
using namespace std;

int main()
{
    string phoneNumber;

    // 提示使用者輸入手機號碼
    cout << "Enter a phone number (e.g., 0912345678): ";
    cin >> phoneNumber;

    // 檢查輸入長度是否為 10 個字元（不含國碼）
    if (phoneNumber.length() == 10)
    {
        // 格式化並輸出為 09xx-xxx-xxx 格式
        cout << "Formatted phone number: "
            << phoneNumber.substr(0, 4) << "-"
            << phoneNumber.substr(4, 3) << "-"
            << phoneNumber.substr(7) << endl;
    }
    else
    {
        // 若輸入長度不符合要求，顯示錯誤訊息
        cout << "Invalid phone number length. Please enter a 10-digit phone number." << endl;
    }

    return 0;
}
