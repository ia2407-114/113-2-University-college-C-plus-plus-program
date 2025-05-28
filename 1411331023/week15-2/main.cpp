#include <iostream>
using namespace std;
#include "Matrix.h"

int main()
{
    int i, j, row, column;
    cout << "重新定義 *=、+=、-= 運算子，用來進行矩陣對應元素的遞乘、遞加、遞減\n";
    cout << "輸入矩陣A及B的列數(row): ";
    cin >> row;
    cout << "輸入矩陣A及B的行數(column): ";
    cin >> column;

    Matrix a('A', row, column);
    Matrix b('B', row, column);


    a.printMatrix("原始矩陣 A:");
    b.printMatrix("原始矩陣 B:");
  

    Matrix mult = a; // copy for *=
    mult *= b;
    mult.printMatrix("A *= B 的結果:");

    Matrix add = a;
    add += b;
    add.printMatrix("A += B 的結果:");

    Matrix sub = a;
    sub -= b;
    sub.printMatrix("A -= B 的結果:");


    return 0;
}
