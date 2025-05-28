#include <iostream>
using namespace std;

class Matrix {
public:
    int row, column;      // 矩陣的行數與列數
    int** element;        // 指向二維陣列的指標，存放矩陣元素

    // 建構子：用來動態配置 row x column 的二維陣列
    Matrix(int m, int n) {
        row = m;
        column = n;
        element = new int* [row];      // 配置 row 個指標，指向每一列
        for (int i = 0; i < row; i++)
            element[i] = new int[column];  // 每列配置 column 個 int 空間
    }

    // 複製建構子：用來深拷貝另一個矩陣物件
    Matrix(const Matrix& other) {
        row = other.row;
        column = other.column;
        element = new int* [row];       // 配置新記憶體
        for (int i = 0; i < row; i++) {
            element[i] = new int[column];
            for (int j = 0; j < column; j++)
                element[i][j] = other.element[i][j];  // 複製元素值
        }
    }

    // 賦值運算子重載：用來讓物件能正確被賦值（深拷貝）
    Matrix& operator=(const Matrix& other) {
        if (this == &other) return *this;  // 防止自賦值

        // 先釋放自己已有的動態記憶體
        for (int i = 0; i < row; i++)
            delete[] element[i];
        delete[] element;

        // 重新配置記憶體，並複製資料
        row = other.row;
        column = other.column;
        element = new int* [row];
        for (int i = 0; i < row; i++) {
            element[i] = new int[column];
            for (int j = 0; j < column; j++)
                element[i][j] = other.element[i][j];
        }
        return *this;  // 回傳自己，支持連鎖賦值
    }

    // 解構子：釋放動態配置的記憶體，避免記憶體洩漏
    ~Matrix() {
        for (int i = 0; i < row; i++)
            delete[] element[i];  // 釋放每一列的空間
        delete[] element;         // 釋放存放列指標的陣列
    }

    // *= 運算子重載，逐元素遞乘（乘以另一矩陣的對應元素）
    Matrix& operator*=(const Matrix& other) {
        for (int i = 0; i < row; i++)
            for (int j = 0; j < column; j++)
                element[i][j] *= other.element[i][j];
        return *this;  // 支持連鎖運算
    }

    // += 運算子重載，逐元素遞加
    Matrix& operator+=(const Matrix& other) {
        for (int i = 0; i < row; i++)
            for (int j = 0; j < column; j++)
                element[i][j] += other.element[i][j];
        return *this;
    }

    // -= 運算子重載，逐元素遞減
    Matrix& operator-=(const Matrix& other) {
        for (int i = 0; i < row; i++)
            for (int j = 0; j < column; j++)
                element[i][j] -= other.element[i][j];
        return *this;
    }

    // 印出矩陣內容，格式化輸出
    void print() const {
        for (int i = 0; i < row; i++) {
            for (int j = 0; j < column; j++)
                cout << element[i][j] << "\t";  // 元素間用 tab 隔開
            cout << endl;  // 每列換行
        }
    }
};
