#include <iostream>
using namespace std;

class Matrix {
public:
    int row, column;
    int** element;

    // 初始化矩陣並分配記憶體
    Matrix(int m, int n) {
        row = m;
        column = n;
        element = new int* [m];
        for (int i = 0; i < m; i++) {
            element[i] = new int[n];
        }
    }

    // 帶名字的建構子，並輸入矩陣元素
    Matrix(char name, int m, int n) {
        row = m;
        column = n;
        element = new int* [m];
        for (int i = 0; i < m; i++) {
            element[i] = new int[n];
        }

        cout << "輸入一" << m << 'x' << n << "矩陣" << name << endl;
        for (int i = 0; i < m; i++)
            for (int j = 0; j < n; j++) {
                cout << name << '[' << i << "][" << j << "]=";
                cin >> element[i][j];
            }
    }

    // 定義矩陣加法運算子+
    Matrix operator+(Matrix x) {
        Matrix temp(this->row, this->column);
        for (int i = 0; i < this->row; i++)
            for (int j = 0; j < this->column; j++)
                temp.element[i][j] = this->element[i][j] + x.element[i][j];
        return temp;
    }

    // 定義矩陣加法運算子+=
    Matrix operator+=(Matrix x) {
        for (int i = 0; i < this->row; i++)
            for (int j = 0; j < this->column; j++)
                this->element[i][j] += x.element[i][j];
        return *this;  // 返回修改後的矩陣
    }

    // 定義矩陣乘法運算子*=
    Matrix operator*=(Matrix x) {
        for (int i = 0; i < this->row; i++)
            for (int j = 0; j < this->column; j++)
                this->element[i][j] *= x.element[i][j];  // 每個元素對應位置相乘
        return *this;  // 返回修改後的矩陣
    }

    // 定義矩陣減法運算子-=
    Matrix operator-=(Matrix x) {
        for (int i = 0; i < this->row; i++)
            for (int j = 0; j < this->column; j++)
                this->element[i][j] -= x.element[i][j];  // 每個元素對應位置相減
        return *this;  // 返回修改後的矩陣
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
    cout << "請輸入矩陣A和B的行列數：\n";
    cout << "列數(row): ";
    cin >> row;
    cout << "行數(column): ";
    cin >> column;

    Matrix a('A', row, column);
    Matrix b('B', row, column);

    // 顯示原矩陣A和B
    cout << "\n原矩陣A：" << endl;
    a.display();
    cout << "\n原矩陣B：" << endl;
    b.display();

    // 矩陣A和B的遞加運算
    Matrix c = a + b;
    cout << "\n矩陣A + 矩陣B = " << endl;
    c.display();

    // 遞加運算+=
    cout << "\n執行矩陣A += 矩陣B後：" << endl;
    a += b;
    a.display();

    // 遞乘運算*=
    cout << "\n執行矩陣A *= 矩陣B後：" << endl;
    a *= b;
    a.display();

    // 遞減運算-=
    cout << "\n執行矩陣A -= 矩陣B後：" << endl;
    a -= b;
    a.display();

    return 0;
}