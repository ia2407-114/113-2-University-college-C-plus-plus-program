#include <iostream>
using namespace std;

class Matrix {
public:
    int row, column;
    int** element;

    // 建構子，動態配置二維陣列
    Matrix(int m, int n) {
        row = m;
        column = n;

        // 配置mxn的二維陣列element之動態記憶體
        element = new int* [m];
        for (int i = 0; i < m; i++) {
            element[i] = new int[n];
        }
    }

    // 解構子，釋放動態記憶體
    ~Matrix() {
        for (int i = 0; i < row; i++) {
            delete[] element[i];
        }
        delete[] element;
    }

    // 重載++運算符，遞增矩陣每個元素的值
    Matrix& operator++() {
        for (int i = 0; i < row; i++) {
            for (int j = 0; j < column; j++) {
                element[i][j]++;  // 每個元素遞增 1
            }
        }
        return *this;
    }

    // 輸出矩陣
    void print() const {
        for (int i = 0; i < row; i++) {
            for (int j = 0; j < column; j++) {
                cout << element[i][j] << "\t";
            }
            cout << endl;
        }
    }
};


