#ifndef MATRIX_H
#define MATRIX_H

#include <iostream>
using namespace std;

class Matrix {
public:
    int row, column;
    int** element;

    Matrix(int m, int n) {
        row = m;
        column = n;
        element = new int* [m];
        for (int i = 0; i < m; i++)
            element[i] = new int[n];
    }

    Matrix(char name, int m, int n) {
        row = m;
        column = n;
        element = new int* [m];
        for (int i = 0; i < m; i++)
            element[i] = new int[n];

        cout << "¿é¤J¤@" << m << 'x' << n << "¯x°}" << name << endl;
        for (int i = 0; i < m; i++)
            for (int j = 0; j < n; j++) {
                cout << name << '[' << i << "][" << j << "]=";
                cin >> element[i][j];
            }
    }

    ~Matrix() {
        for (int i = 0; i < row; i++)
            delete[] element[i];
        delete[] element;
    }

    Matrix operator+(Matrix x) {
        Matrix temp(row, column);
        for (int i = 0; i < row; i++)
            for (int j = 0; j < column; j++)
                temp.element[i][j] = this->element[i][j] + x.element[i][j];
        return temp;
    }

    Matrix& operator+=(const Matrix& x) {
        for (int i = 0; i < row; i++)
            for (int j = 0; j < column; j++)
                this->element[i][j] += x.element[i][j];
        return *this;
    }

    Matrix& operator-=(const Matrix& x) {
        for (int i = 0; i < row; i++)
            for (int j = 0; j < column; j++)
                this->element[i][j] -= x.element[i][j];
        return *this;
    }

    Matrix& operator*=(const Matrix& x) {
        for (int i = 0; i < row; i++)
            for (int j = 0; j < column; j++)
                this->element[i][j] *= x.element[i][j];
        return *this;
    }

    void print(const string& title) const {
        cout << title << endl;
        for (int i = 0; i < row; i++) {
            for (int j = 0; j < column; j++)
                cout << element[i][j] << '\t';
            cout << endl;
        }
    }
};

#endif
