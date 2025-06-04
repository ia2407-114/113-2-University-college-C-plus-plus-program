#include <iostream>
using namespace std;
#include "Matrix.h"

void printMatrix(const Matrix& m, const char* name) {
    cout << "痻皚" << name << " = \n";
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
    cout << "块痻皚A籔B计(row): ";
    cin >> row;
    cout << "块痻皚A籔B︽计(column): ";
    cin >> column;

    Matrix a('A', row, column);
    Matrix b('B', row, column);

    // 代刚 +=
    Matrix temp1 = a;
    printMatrix(temp1, "Aセ");
    temp1 += b;
    printMatrix(b, "Bセ");
    printMatrix(temp1, "A += B");

    // 代刚 -=
    Matrix temp2 = a;
    temp2 -= b;
    printMatrix(temp2, "A -= B");

    // 代刚 *=
    Matrix temp3 = a;
    temp3 *= b;
    printMatrix(temp3, "A *= B");

    return 0;
}
