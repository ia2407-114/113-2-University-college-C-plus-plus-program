// FormatPhone.cpp
// �N�ϥΪ̿�J��������X�榡�Ƭ� 09xx-xxx-xxx
#include <iostream>
#include <string>
using namespace std;

int main() {
    string phone;

    cout << "�п�J������X�]�Ҧp�G0912345678�^: ";
    cin >> phone;

    // �ˬd��J���׬O�_��10���
    if (phone.length() == 10 && phone.substr(0, 2) == "09") {
        // �榡�ƿ�X�G0912-345-678
        string formatted = phone.substr(0, 4) + "-" + phone.substr(4, 3) + "-" + phone.substr(7, 3);
        cout << "�榡�ƫ᪺������X��: " << formatted << endl;
    }
    else {
        cout << "��J��������X�榡���~�A�нT�{�� 10 ��ƥB�H 09 �}�Y�C" << endl;
    }

    return 0;
}
