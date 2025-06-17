#include <iostream>
using namespace std;
class Matrix
{
public:
    int row, column;
    int** element;

    // 預設建構子：動態配置矩陣的記憶體
    Matrix(int m, int n)
    {
        row = m;
        column = n;
        element = new int* [m];
        for (int i = 0; i < m; i++)
            element[i] = new int[n];
    }

    // 帶參數建構子：輸入矩陣資料
    Matrix(char name, int m, int n)
    {
        row = m;
        column = n;
        element = new int* [m];
        for (int i = 0; i < m; i++)
            element[i] = new int[n];

        cout << "輸入一" << m << 'x' << n << "矩陣" << name << endl;
        for (int i = 0; i < m; i++)
            for (int j = 0; j < n; j++)
            {
                cout << name << '[' << i << "][" << j << "]=";
                cin >> element[i][j];
            }
    }

    // 定義矩陣的「+=」(加號賦值)運算子多載
    Matrix& operator+=(Matrix x)
    {
        for (int i = 0; i < this->row; i++)
            for (int j = 0; j < this->column; j++)
                this->element[i][j] += x.element[i][j]; // 對應元素相加

        return *this; // 返回當前物件引用，支持鏈式調用
    }

    // 定義矩陣的「-=」(減號賦值)運算子多載
    Matrix& operator-=(Matrix x)
    {
        for (int i = 0; i < this->row; i++)
            for (int j = 0; j < this->column; j++)
                this->element[i][j] -= x.element[i][j]; // 對應元素相減

        return *this; // 返回當前物件引用，支持鏈式調用
    }

    // 定義矩陣的「*=」(乘號賦值)運算子多載：遞乘操作
    Matrix& operator*=(Matrix x)
    {
        for (int i = 0; i < this->row; i++)
            for (int j = 0; j < this->column; j++)
                this->element[i][j] *= x.element[i][j]; // 對應元素相乘

        return *this; // 返回當前物件引用，支持鏈式調用
    }

    // 輔助函數：打印矩陣
    void print()
    {
        for (int i = 0; i < row; i++)
        {
            for (int j = 0; j < column; j++)
                cout << element[i][j] << '\t'; // 用制表符分隔元素
            cout << endl;
        }
    }
};
