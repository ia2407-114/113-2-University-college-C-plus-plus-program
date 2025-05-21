// Fig. 10.1: fig10_01.cpp
// Standard Library string class test program.
#include <iostream>
#include <string>
using namespace std;

int main()
{
    string phone;
    cout << "�п�J������X:";
    cin >> phone;

    //���Ҥ�����X���׬O�_��10�X
    if (phone.length() != 10) {
        cerr << "������X������10�X!" << endl;
        return 1;
    }

    //���Ҥ�����X�}�Y�O�_��09
    if (phone.substr(0, 2) != "09") {
        cerr << "������X�}�Y����09!" << endl;
        return 1;
    }

    string formatted =
        phone.substr(0, 4) + "-" +  // 0912
        phone.substr(4, 3) + "-" +  // 345
        phone.substr(7, 3);         // 678

    cout << "�榡�ƫ᪺������X�G " << formatted << endl;
    return 0;
}
