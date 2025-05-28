#include <iostream>
#include "week15-2matrix.h"
using namespace std;

int main() {
    int row, column;
    cout << "�m�� +=�B-=�B*= �B��l�h���G�x�}���[�B����B����\n";
    cout << "��J�x�}A��B���C��(row):";
    cin >> row;
    cout << "��J�x�}A��B�����(column):";
    cin >> column;

    Matrix a('A', row, column);
    Matrix b('B', row, column);

    a.print("\n�x�} A�]��l�^");
    b.print("\n�x�} B");

    // ���� *=
    Matrix a1 = a;  // �ƻs�@����l a
    a1 *= b;
    a1.print("\nA *= B ���G");

    // ���[ +=
    Matrix a2 = a;
    a2 += b;
    a2.print("\nA += B ���G");

    // ���� -=
    Matrix a3 = a;
    a3 -= b;
    a3.print("\nA -= B ���G");

    return 0;
}
