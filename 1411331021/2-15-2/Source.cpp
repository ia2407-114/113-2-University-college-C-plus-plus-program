#include <iostream>
using namespace std;
#include "matrix.h"

    // 定義矩陣的「+」(加號)運算子的多載
   

int main()
{
    int i, j, row, column;
    cout << "重新定義「+」(加號)運算子多載，使其能應用在矩陣加法上\n";
    cout << "輸入矩陣A及B的列數(row):";
    cin >> row;
    cout << "輸入矩陣A及B的行數(column):";
    cin >> column;
    Matrix a('A', row, column);
    Matrix b('B', row, column);
    Matrix c(row, column);

    
    cout << "矩陣 A = \n";
    for (int i = 0; i < a.row; i++) {
        for (int j = 0; j < a.column; j++)
            cout << a.element[i][j] << '\t';
        cout << endl;
    }
    cout << "矩陣 B = \n";
    for (int i = 0; i < b.row; i++) {
        for (int j = 0; j < b.column; j++)
            cout << b.element[i][j] << '\t';
        cout << endl;
    }

    c = a *= b;  // 矩陣A + 矩陣B

    cout << "遞乘矩陣A *= 矩陣B = \n";
    for (i = 0; i < row; i++)
    {
        for (j = 0; j < column; j++)
            cout << c.element[i][j] << '\t';
        cout << endl;
    }

    c = a += b;  // 矩陣A + 矩陣B

    cout << "遞加矩陣A += 矩陣B = \n";
    for (i = 0; i < row; i++)
    {
        for (j = 0; j < column; j++)
            cout << c.element[i][j] << '\t';
        cout << endl;
    }

    c = a -= b;  // 矩陣A - 矩陣B

    cout << "遞減矩陣A -= 矩陣B = \n";
    for (i = 0; i < row; i++)
    {
        for (j = 0; j < column; j++)
            cout << c.element[i][j] << '\t';
        cout << endl;
    }

    return 0;
}