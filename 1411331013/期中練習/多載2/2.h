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

    // 定義矩陣的「*=」(遞乘)運算子的多載
    Matrix operator*=(Matrix x)
    {
        int i, j;
        Matrix temp(this->row, this->column);
        for (i = 0; i < this->row; i++)
            for (j = 0; j < this->column; j++)
                temp.element[i][j] = this->element[i][j] *= x.element[i][j];

        return temp;
    }

    // 定義矩陣的「+=」(遞增)運算子的多載
    Matrix operator+=(Matrix x)
    {
        int i, j;
        Matrix temp(this->row, this->column);
        for (i = 0; i < this->row; i++)
            for (j = 0; j < this->column; j++)
                temp.element[i][j] = this->element[i][j] += x.element[i][j];

        return temp;
    }

    // 定義矩陣的「-=」(遞減)運算子的多載
    Matrix operator-=(Matrix x)
    {
        int i, j;
        Matrix temp(this->row, this->column);
        for (i = 0; i < this->row; i++)
            for (j = 0; j < this->column; j++)
                temp.element[i][j] = this->element[i][j]-= x.element[i][j];

        return temp;
    }
};
