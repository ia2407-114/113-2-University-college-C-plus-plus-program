#include <iostream>
#include <string>
using namespace std;

int main() {
    string phone;

    cout << "�п�J�@��s�򪺤�����X�]�Ҧp0912345678�^: ";
    cin >> phone;

    // ���ҿ�J�O�_��10�X�Ʀr
    if (phone.length() != 10 || phone.substr(0, 2) != "09") {
        cout << "��J�榡���~�A�п�J���T��������X�]10��ơA�H09�}�Y�^" << endl;
        return 1; // �����{��
    }

    // �ϥ� substr ���X���P�Ϭq
    string formatted = phone.substr(0, 4) + "-" +
        phone.substr(4, 3) + "-" +
        phone.substr(7, 3);

    cout << "�榡�ƫ᪺������X��: " << formatted << endl;

    return 0;
}