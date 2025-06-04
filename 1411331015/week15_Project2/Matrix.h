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

        // �ʺA�t�mmxn���G���}�Celement���O����
        element = new int* [m];
        int i;
        for (i = 0; i < m; i++)
            element[i] = new int[n];
    }

    Matrix(char name, int m, int n)
    {
        row = m;
        column = n;

        // �ʺA�t�mmxn���G���}�Celement���O����
        element = new int* [m];
        int i, j;
        for (i = 0; i < m; i++)
            element[i] = new int[n];

        cout << "��J�@" << m << 'x' << n << "�x�}" << name << endl;
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