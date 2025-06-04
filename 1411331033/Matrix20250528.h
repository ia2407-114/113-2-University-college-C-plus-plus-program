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

        element = new int* [m];
        int i, j;
        for (i = 0; i < m; i++)
            element[i] = new int[n];
    }

    Matrix operator++()
    {
        Matrix temp(row, column);
        int i, j;
        for (i = 0; i < row; i++)
            for (j = 0; j < column; j++)
                temp.element[i][j] = (this->element[i][j]) + 1;
        return temp;
    }
};