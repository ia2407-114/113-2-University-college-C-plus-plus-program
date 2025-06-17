#include <iostream>
#include "2.h"
using namespace std;

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

    cout << "A����l�x�} = \n";
    for (i = 0; i < row; i++)
    {
        for (j = 0; j < column; j++)
            cout << a.element[i][j] << '\t';
        cout << endl;
    }

    cout << "B����l�x�} = \n";
    for (i = 0; i < row; i++)
    {
        for (j = 0; j < column; j++)
            cout << b.element[i][j] << '\t';
        cout << endl;
    }

    c = a *= b;  // �x�}A + �x�}B

    cout << "�x�}A *= �x�}B = \n";
    for (i = 0; i < row; i++)
    {
        for (j = 0; j < column; j++)
            cout << c.element[i][j] << '\t';
        cout << endl;
    }

    c = a += b;  // �x�}A + �x�}B

    cout << "�x�}A += �x�}B = \n";
    for (i = 0; i < row; i++)
    {
        for (j = 0; j < column; j++)
            cout << c.element[i][j] << '\t';
        cout << endl;
    }

    c = a -= b;  // �x�}A + �x�}B

    cout << "�x�}A -= �x�}B = \n";
    for (i = 0; i < row; i++)
    {
        for (j = 0; j < column; j++)
            cout << c.element[i][j] << '\t';
        cout << endl;
    }
    return 0;
}