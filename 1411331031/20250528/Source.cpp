#include <iostream>
#include "Matrix.h"
using namespace std;


int main()
{
    int i, j, row, column;
    cout << "���s�w�q�u++�v�e�m�B��l���h���A�DA�x�}�����W1�x�}(++A)�G\n";
    cout << "��J�x�}A���C��(row):";
    cin >> row;
    cout << "��J�x�}A�����(column):";
    cin >> column;
    Matrix a(row, column), b(row, column);
    cout << "��J�@" << row << 'x' << column << "�x�}A" << endl;
    for (i = 0; i < row; i++)
        for (j = 0; j < column; j++)
        {
            cout << "A[" << i << "][" << j << "]=";
            cin >> a.element[i][j];
        }
    cout << "�x�}A����x�}(A):\n";
    for (i = 0; i < row; i++)
    {
        for (j = 0; j < column; j++)
            cout << a.element[i][j] << '\t';
        cout << endl;
    }
    b = ++a;//�]���t���w�g�w�q���B��l�h��
    cout << "�x�}A�����W1�x�}(++A):\n";
    for (i = 0; i < row; i++)
    {
        for (j = 0; j < column; j++)
            cout << b.element[i][j] << '\t';
        cout << endl;
    }

    return 0;
}