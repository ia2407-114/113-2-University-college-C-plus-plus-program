#include <iostream>
using namespace std;
#include "matrix.h"

    // �w�q�x�}���u+�v(�[��)�B��l���h��
   

int main()
{
    int i, j, row, column;
    cout << "���s�w�q�u+�v(�[��)�B��l�h���A�Ϩ�����Φb�x�}�[�k�W\n";
    cout << "��J�x�}A��B���C��(row):";
    cin >> row;
    cout << "��J�x�}A��B�����(column):";
    cin >> column;
    Matrix a('A', row, column);
    Matrix b('B', row, column);
    Matrix c(row, column);

    
    cout << "�x�} A = \n";
    for (int i = 0; i < a.row; i++) {
        for (int j = 0; j < a.column; j++)
            cout << a.element[i][j] << '\t';
        cout << endl;
    }
    cout << "�x�} B = \n";
    for (int i = 0; i < b.row; i++) {
        for (int j = 0; j < b.column; j++)
            cout << b.element[i][j] << '\t';
        cout << endl;
    }

    c = a *= b;  // �x�}A + �x�}B

    cout << "�����x�}A *= �x�}B = \n";
    for (i = 0; i < row; i++)
    {
        for (j = 0; j < column; j++)
            cout << c.element[i][j] << '\t';
        cout << endl;
    }

    c = a += b;  // �x�}A + �x�}B

    cout << "���[�x�}A += �x�}B = \n";
    for (i = 0; i < row; i++)
    {
        for (j = 0; j < column; j++)
            cout << c.element[i][j] << '\t';
        cout << endl;
    }

    c = a -= b;  // �x�}A - �x�}B

    cout << "����x�}A -= �x�}B = \n";
    for (i = 0; i < row; i++)
    {
        for (j = 0; j < column; j++)
            cout << c.element[i][j] << '\t';
        cout << endl;
    }

    return 0;
}