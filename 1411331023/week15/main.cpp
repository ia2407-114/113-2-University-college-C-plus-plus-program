#include <iostream>
using namespace std;
#include "Matrix.h"


int main()
{
    int i, j, row, column;
    cout << "重新定義「-」前置運算子的多載，求A矩陣的副矩陣(-A)：\n";
    cout << "輸入矩陣A的列數(row):";
    cin >> row;
    cout << "輸入矩陣A的行數(column):";
    cin >> column;

    Matrix a(row, column), b(row, column);

    cout << "輸入一" << row << 'x' << column << "矩陣A" << endl;
    for (i = 0; i < row; i++)
        for (j = 0; j < column; j++)
        {
            cout << "A[" << i << "][" << j << "]=";
            cin >> a.element[i][j];
        }
    b = -a;
    cout << "\n遞增前的矩陣 A：\n";
    for (i = 0; i < row; i++)
    {
        for (j = 0; j < column; j++)
            cout << a.element[i][j] << '\t';
        cout << endl;
    }

    ++a; // 執行遞增

    cout << "\n遞增後的矩陣 A：\n";
    for (i = 0; i < row; i++)
    {
        for (j = 0; j < column; j++)
            cout << a.element[i][j] << '\t';
        cout << endl;
    }

    return 0;
}
