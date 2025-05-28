#include <iostream>
#include "week15-2matrix.h"
using namespace std;

int main() {
    int row, column;
    cout << "練習 +=、-=、*= 運算子多載：矩陣遞加、遞減、遞乘\n";
    cout << "輸入矩陣A及B的列數(row):";
    cin >> row;
    cout << "輸入矩陣A及B的行數(column):";
    cin >> column;

    Matrix a('A', row, column);
    Matrix b('B', row, column);

    a.print("\n矩陣 A（原始）");
    b.print("\n矩陣 B");

    // 遞乘 *=
    Matrix a1 = a;  // 複製一份原始 a
    a1 *= b;
    a1.print("\nA *= B 結果");

    // 遞加 +=
    Matrix a2 = a;
    a2 += b;
    a2.print("\nA += B 結果");

    // 遞減 -=
    Matrix a3 = a;
    a3 -= b;
    a3.print("\nA -= B 結果");

    return 0;
}
