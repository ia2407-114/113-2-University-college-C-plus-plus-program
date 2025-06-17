#include <iostream>
#include <string>
using namespace std;

int main() {
    string phone;
    cout << "請輸入手機號碼: ";
    cin >> phone;

    
    if (phone.length() == 10 && phone.substr(0, 2) == "09") {  
        string part1 = phone.substr(0, 4); 
        string part2 = phone.substr(4, 3);  
        string part3 = phone.substr(7, 3);  

        cout << part1 << "-" << part2 << "-" << part3 << endl;
    }
    else {
        cerr << "輸入錯誤：請輸入 10 碼且以 09 開頭的手機號碼。" << endl;
        return 1;
    }

    return 0;
}
