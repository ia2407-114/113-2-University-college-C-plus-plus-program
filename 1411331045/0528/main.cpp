#include <iostream>
using namespace std;
#include "Matrix.h"

int main() {
    int i, j, row, column;

    // 輸入矩陣的行數和列數
    cout << "請輸入矩陣的列數(row): ";
    cin >> row;
    cout << "請輸入矩陣的行數(column): ";
    cin >> column;

    // 創建矩陣 a 和 b
    Matrix a(row, column), b(row, column);

    // 輸入矩陣 A 的元素
    cout << "輸入一 " << row << "x" << column << " 矩陣 A" << endl;
    for (i = 0; i < row; i++) {
        for (j = 0; j < column; j++) {
            cout << "A[" << i << "][" << j << "] = ";
            cin >> a.element[i][j];
        }
    }

    // 輸出遞增前的矩陣
    cout << "矩陣 A 遞增前的結果：" << endl;
    a.print();

    // 使用++運算符遞增矩陣中的每個元素
    ++a;

    // 輸出遞增後的矩陣
    cout << "矩陣 A 遞增後的結果：" << endl;
    a.print();

    return 0;
}
