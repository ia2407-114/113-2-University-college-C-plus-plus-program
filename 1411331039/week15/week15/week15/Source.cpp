#include <iostream>
using namespace std;

class Matrix {
public:
    int row, column;
    int** element;

    // 建構子：初始化矩陣大小並分配記憶體
    Matrix(int m, int n) {
        row = m;
        column = n;
        element = new int* [m];
        for (int i = 0; i < m; i++) {
            element[i] = new int[n];
        }
    }

    // 定義矩陣的「-」(負號)前置運算子的多載
    Matrix operator-() {
        Matrix temp(row, column);
        for (int i = 0; i < row; i++)
            for (int j = 0; j < column; j++)
                temp.element[i][j] = -(this->element[i][j]);
        return temp;
    }

    // 定義一元運算子「++」將矩陣的每個元素加1
    Matrix operator++() {
        for (int i = 0; i < row; i++) {
            for (int j = 0; j < column; j++) {
                element[i][j]++; // 每個元素遞增1
            }
        }
        return *this; // 返回修改後的矩陣
    }

    // 顯示矩陣
    void display() const {
        for (int i = 0; i < row; i++) {
            for (int j = 0; j < column; j++) {
                cout << element[i][j] << "\t";
            }
            cout << endl;
        }
    }
};

int main() {
    int i, j, row, column;
    cout << "請輸入矩陣A的列數(row): ";
    cin >> row;
    cout << "請輸入矩陣A的行數(column): ";
    cin >> column;

    Matrix a(row, column);
    cout << "請輸入一個" << row << "x" << column << "的矩陣A：" << endl;

    // 輸入矩陣A的元素
    for (i = 0; i < row; i++) {
        for (j = 0; j < column; j++) {
            cout << "A[" << i << "][" << j << "] = ";
            cin >> a.element[i][j];
        }
    }

    // 顯示原始矩陣
    cout << "\n原始矩陣A：" << endl;
    a.display();

    // 使用一元運算子++將矩陣元素每個都加1
    ++a; // 遞增矩陣的每個元素

    // 顯示遞增後的矩陣
    cout << "\n遞增後的矩陣A：" << endl;
    a.display();

    return 0;
}
