// FormatPhone.cpp
// 將使用者輸入的手機號碼格式化為 09xx-xxx-xxx
#include <iostream>
#include <string>
using namespace std;

int main() {
    string phone;

    cout << "請輸入手機號碼（例如：0912345678）: ";
    cin >> phone;

    // 檢查輸入長度是否為10位數
    if (phone.length() == 10 && phone.substr(0, 2) == "09") {
        // 格式化輸出：0912-345-678
        string formatted = phone.substr(0, 4) + "-" + phone.substr(4, 3) + "-" + phone.substr(7, 3);
        cout << "格式化後的手機號碼為: " << formatted << endl;
    }
    else {
        cout << "輸入的手機號碼格式錯誤，請確認為 10 位數且以 09 開頭。" << endl;
    }

    return 0;
}
