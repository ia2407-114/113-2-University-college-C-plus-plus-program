#include <iostream>
#include <string>
using namespace std;

int main() {
    string phone;
    cout << "�п�J������X: ";
    cin >> phone;

    
    if (phone.length() == 10 && phone.substr(0, 2) == "09") {  
        string part1 = phone.substr(0, 4); 
        string part2 = phone.substr(4, 3);  
        string part3 = phone.substr(7, 3);  

        cout << part1 << "-" << part2 << "-" << part3 << endl;
    }
    else {
        cerr << "��J���~�G�п�J 10 �X�B�H 09 �}�Y��������X�C" << endl;
        return 1;
    }

    return 0;
}
