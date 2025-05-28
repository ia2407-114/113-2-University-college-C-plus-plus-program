#include <iostream>
using namespace std;
#include "Matrix.h"

int main() {
    int i, j, row, column;

    // ��J�x�}����ƩM�C��
    cout << "�п�J�x�}���C��(row): ";
    cin >> row;
    cout << "�п�J�x�}�����(column): ";
    cin >> column;

    // �Ыدx�} a �M b
    Matrix a(row, column), b(row, column);

    // ��J�x�} A ������
    cout << "��J�@ " << row << "x" << column << " �x�} A" << endl;
    for (i = 0; i < row; i++) {
        for (j = 0; j < column; j++) {
            cout << "A[" << i << "][" << j << "] = ";
            cin >> a.element[i][j];
        }
    }

    // ��X���W�e���x�}
    cout << "�x�} A ���W�e�����G�G" << endl;
    a.print();

    // �ϥ�++�B��Ż��W�x�}�����C�Ӥ���
    ++a;

    // ��X���W�᪺�x�}
    cout << "�x�} A ���W�᪺���G�G" << endl;
    a.print();

    return 0;
}
