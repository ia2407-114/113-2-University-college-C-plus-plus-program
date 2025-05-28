#include <iostream>
#include "Matrix.h"

using namespace std;

int main() {
    int row, column;

    // ���ϥΪ̿�J�x�}����ơ]��V���X�C�^
    cout << "�п�J�x�}�����(row): ";
    cin >> row;

    // ���ϥΪ̿�J�x�}���C�ơ]�C�C���X�Ӥ����^
    cout << "�п�J�x�}���C��(column): ";
    cin >> column;

    // �إߨ�� row x column ���x�}���� a �M b
    Matrix a(row, column), b(row, column);

    // ��J�x�} a ���C�Ӥ���
    cout << "��J�x�} A�G" << endl;
    for (int i = 0; i < row; i++)
        for (int j = 0; j < column; j++) {
            cout << "A[" << i << "][" << j << "] = ";
            cin >> a.element[i][j];
        }

    // ��J�x�} b ���C�Ӥ���
    cout << "��J�x�} B�G" << endl;
    for (int i = 0; i < row; i++)
        for (int j = 0; j < column; j++) {
            cout << "B[" << i << "][" << j << "] = ";
            cin >> b.element[i][j];
        }

    // �L�X�x�} a ����l���e
    cout << "�x�} A ��l�G" << endl;
    a.print();

    // �L�X�x�} b ����l���e
    cout << "�x�} B ��l�G" << endl;
    b.print();

    // �ƻs�@�� a ����l�ȡA��K�᭱���m�ϥ�
    Matrix a_original = a;

    // ����v�������� a *= b
    a *= b;
    cout << "a *= b ��G" << endl;
    a.print();

    // �N a ���]����l�ȡA�קK�ֿn�e�@�����G
    a = a_original;

    // ����v�������[ a += b
    a += b;
    cout << "a += b ��G" << endl;
    a.print();

    // �A�����] a ����l��
    a = a_original;

    // ����v�������� a -= b
    a -= b;
    cout << "a -= b ��G" << endl;
    a.print();

    return 0;
}
