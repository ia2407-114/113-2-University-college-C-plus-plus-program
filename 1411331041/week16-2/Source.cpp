#include <iostream>
#include "square_2D.h"
using namespace std;

int main() {
    float length, width, height;

    // ���ϥΪ̿�J����Ϊ����M�e
    cout << "�п�J����Ϊ����M�e:" << endl;
    cout << "��: ";
    cin >> length;
    cout << "�e: ";
    cin >> width;

    // �إߨ���ܪ����
    square_2D rect2D(length, width);
    rect2D.print_2D();

    // ���ϥΪ̿�J�����骺��
    cout << "\n�п�J�����骺��:" << endl;
    cout << "��: ";
    cin >> height;

    // �إߨ���ܪ�����
    rect_3D rect3D(length, width, height);
    rect3D.print_2D();  // ��ܪ���Ϊ����
    rect3D.print_3D();  // ��ܪ����骺���

    return 0;
}
