#include <iostream>
#include <string>
using namespace std;

int main() {
    string phone;

    cout << "請輸入一串連續的手機號碼（例如0912345678）: ";
    cin >> phone;

    // 驗證輸入是否為10碼數字
    if (phone.length() != 10 || phone.substr(0, 2) != "09") {
        cout << "輸入格式錯誤，請輸入正確的手機號碼（10位數，以09開頭）" << endl;
        return 1; // 結束程式
    }

    // 使用 substr 取出不同區段
    string formatted = phone.substr(0, 4) + "-" +
        phone.substr(4, 3) + "-" +
        phone.substr(7, 3);

    cout << "格式化後的手機號碼為: " << formatted << endl;

    return 0;
}