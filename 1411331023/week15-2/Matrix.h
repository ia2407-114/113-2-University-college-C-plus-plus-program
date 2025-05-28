#pragma once

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

    // 定義矩陣的「+」(加號)運算子的多載
    Matrix operator+(Matrix x)
    {
        int i, j;
        Matrix temp(this->row, this->column);
        for (i = 0; i < this->row; i++)
            for (j = 0; j < this->column; j++)
                temp.element[i][j] = this->element[i][j] + x.element[i][j];

        return temp;
    }

    // 遞乘 *=
    Matrix& operator*=(const Matrix& x)
    {
        for (int i = 0; i < row; i++)
            for (int j = 0; j < column; j++)
                element[i][j] *= x.element[i][j];
        return *this;
    }

    // 遞加 +=
    Matrix& operator+=(const Matrix& x)
    {
        for (int i = 0; i < row; i++)
            for (int j = 0; j < column; j++)
                element[i][j] += x.element[i][j];
        return *this;
    }

    // 遞減 -=
    Matrix& operator-=(const Matrix& x)
    {
        for (int i = 0; i < row; i++)
            for (int j = 0; j < column; j++)
                element[i][j] -= x.element[i][j];
        return *this;
    }

    void printMatrix(const char* label)
    {
        cout << label << endl;
        for (int i = 0; i < row; i++) {
            for (int j = 0; j < column; j++)
                cout << element[i][j] << '\t';
            cout << endl;
        }
    }
};

