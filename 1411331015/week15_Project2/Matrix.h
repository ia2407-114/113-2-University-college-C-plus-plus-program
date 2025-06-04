#pragma once
#include <iostream>
using namespace std;
class Matrix
{
public:
    int row, column;
    int** element;
    Matrix(int m, int n)
    {
        row = m;
        column = n;

        // 動態配置mxn的二維陣列element之記憶體
        element = new int* [m];
        int i;
        for (i = 0; i < m; i++)
            element[i] = new int[n];
    }

    Matrix(char name, int m, int n)
    {
        row = m;
        column = n;

        // 動態配置mxn的二維陣列element之記憶體
        element = new int* [m];
        int i, j;
        for (i = 0; i < m; i++)
            element[i] = new int[n];

        cout << "輸入一" << m << 'x' << n << "矩陣" << name << endl;
        for (i = 0; i < m; i++)
            for (j = 0; j < n; j++)
            {
                cout << name << '[' << i << "]["
                    << j << "]=";
                cin >> element[i][j];
            }
    }


    Matrix& operator+=(const Matrix& x)
    {
        for (int i = 0; i < row; i++)
            for (int j = 0; j < column; j++)
                this->element[i][j] += x.element[i][j];
        return *this;
    }


    Matrix& operator-=(const Matrix& x)
    {
        for (int i = 0; i < row; i++)
            for (int j = 0; j < column; j++)
                this->element[i][j] -= x.element[i][j];
        return *this;
    }


    Matrix& operator*=(const Matrix& x)
    {
        for (int i = 0; i < row; i++)
            for (int j = 0; j < column; j++)
                this->element[i][j] *= x.element[i][j];
        return *this;
    }
};