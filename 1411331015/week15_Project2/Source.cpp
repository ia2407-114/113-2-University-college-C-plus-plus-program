#include <iostream>
using namespace std;
#include "Matrix.h"

void printMatrix(const Matrix& m, const char* name) {
    cout << "�x�}" << name << " = \n";
    for (int i = 0; i < m.row; i++) {
        for (int j = 0; j < m.column; j++)
            cout << m.element[i][j] << '\t';
        cout << endl;
    }
    cout << endl;
}

int main()
{
    int row, column;
    cout << "��J�x�}A�PB���C��(row): ";
    cin >> row;
    cout << "��J�x�}A�PB�����(column): ";
    cin >> column;

    Matrix a('A', row, column);
    Matrix b('B', row, column);

    // ���� +=
    Matrix temp1 = a;
    printMatrix(temp1, "A�]�쥻�^");
    temp1 += b;
    printMatrix(b, "B�]�쥻�^");
    printMatrix(temp1, "A += B");

    // ���� -=
    Matrix temp2 = a;
    temp2 -= b;
    printMatrix(temp2, "A -= B");

    // ���� *=
    Matrix temp3 = a;
    temp3 *= b;
    printMatrix(temp3, "A *= B");

    return 0;
}
