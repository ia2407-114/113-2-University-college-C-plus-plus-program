#include <iostream>
#include "Matrix.h"

using namespace std;

int main() {
    int row, column;

    // 讓使用者輸入矩陣的行數（橫向有幾列）
    cout << "請輸入矩陣的行數(row): ";
    cin >> row;

    // 讓使用者輸入矩陣的列數（每列有幾個元素）
    cout << "請輸入矩陣的列數(column): ";
    cin >> column;

    // 建立兩個 row x column 的矩陣物件 a 和 b
    Matrix a(row, column), b(row, column);

    // 輸入矩陣 a 的每個元素
    cout << "輸入矩陣 A：" << endl;
    for (int i = 0; i < row; i++)
        for (int j = 0; j < column; j++) {
            cout << "A[" << i << "][" << j << "] = ";
            cin >> a.element[i][j];
        }

    // 輸入矩陣 b 的每個元素
    cout << "輸入矩陣 B：" << endl;
    for (int i = 0; i < row; i++)
        for (int j = 0; j < column; j++) {
            cout << "B[" << i << "][" << j << "] = ";
            cin >> b.element[i][j];
        }

    // 印出矩陣 a 的原始內容
    cout << "矩陣 A 原始：" << endl;
    a.print();

    // 印出矩陣 b 的原始內容
    cout << "矩陣 B 原始：" << endl;
    b.print();

    // 複製一份 a 的初始值，方便後面重置使用
    Matrix a_original = a;

    // 執行逐元素遞乘 a *= b
    a *= b;
    cout << "a *= b 後：" << endl;
    a.print();

    // 將 a 重設為初始值，避免累積前一次結果
    a = a_original;

    // 執行逐元素遞加 a += b
    a += b;
    cout << "a += b 後：" << endl;
    a.print();

    // 再次重設 a 為初始值
    a = a_original;

    // 執行逐元素遞減 a -= b
    a -= b;
    cout << "a -= b 後：" << endl;
    a.print();

    return 0;
}
