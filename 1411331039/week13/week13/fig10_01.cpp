#include <iostream>
#include <string>
using namespace std;

int main() {
    string phoneNumber;

    // ��J������X
    cout << "�п�J������X (���t���j��): ";
    cin >> phoneNumber;

    // �ˬd��J��������X�O�_�� 10 ���
    if (phoneNumber.length() == 10) {
        // ��X�榡�ƫ᪺������X
        cout << phoneNumber.substr(0, 4) << "-"    // ���o�e�|��å[�W -
            << phoneNumber.substr(4, 3) << "-"    // ���o�����T��å[�W -
            << phoneNumber.substr(7, 3) << endl;  // ���o�̫�T��ÿ�X
    }
    else {
        cout << "��J��������X�榡�����T�A�нT�O�O 10 ��Ʀr�C" << endl;
    }

    return 0;
}
